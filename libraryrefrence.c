#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100

struct Book {
    int id;
    char title[50];
    char author[50];
    int isBorrowed; // 0 = available, 1 = borrowed
};

// Save all books to file
void saveToFile(struct Book library[], int count) {
    FILE *fp = fopen("library.txt", "w");
    for (int i = 0; i < count; i++) {
        fprintf(fp, "%d,%s,%s,%d\n",
                library[i].id, library[i].title, library[i].author, library[i].isBorrowed);
    }
    fclose(fp);
}

// Load books from file
int loadFromFile(struct Book library[]) {
    FILE *fp = fopen("library.txt", "r");
    int count = 0;
    if (fp != NULL) {
        while (fscanf(fp, "%d,%49[^,],%49[^,],%d\n",
                      &library[count].id,
                      library[count].title,
                      library[count].author,
                      &library[count].isBorrowed) == 4) {
            count++;
        }
        fclose(fp);
    }
    return count;
}

// Add a new book
void addBook(struct Book library[], int *count) {
    if (*count >= MAX_BOOKS) {
        printf("Library full!\n");
        return;
    }

    printf("Enter Book ID: ");
    scanf("%d", &library[*count].id);
    getchar(); // clear buffer
    printf("Enter Title: ");
    fgets(library[*count].title, sizeof(library[*count].title), stdin);
    library[*count].title[strcspn(library[*count].title, "\n")] = '\0'; 
    printf("Enter Author: ");
    fgets(library[*count].author, sizeof(library[*count].author), stdin);
    library[*count].author[strcspn(library[*count].author, "\n")] = '\0';
    library[*count].isBorrowed = 0; // available by default

    (*count)++;
    saveToFile(library, *count);
    printf("Book added successfully!\n");
}

// Display all books
void displayBooks(struct Book library[], int count) {
    printf("\n--- Library Books ---\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d | Title: %s | Author: %s | Status: %s\n",
               library[i].id,
               library[i].title,
               library[i].author,
               library[i].isBorrowed ? "Borrowed" : "Available");
    }
}  

// Search by title
void searchBook(struct Book library[], int count) {
    char title[50];
    printf("Enter title to search: ");
    getchar(); // clear buffer
    fgets(title, sizeof(title), stdin);
    title[strcspn(title, "\n")] = '\0';

    for (int i = 0; i < count; i++) {
        if (strcmp(library[i].title, title) == 0) {
            printf("Book Found! ID: %d | Author: %s | Status: %s\n",
                   library[i].id, library[i].author,
                   library[i].isBorrowed ? "Borrowed" : "Available");
            return;
        }
    }
    printf("Book not found.\n");
}

// Borrow a book
void borrowBook(struct Book library[], int count) {
    int id;
    printf("Enter Book ID to borrow: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (library[i].id == id) {
            if (library[i].isBorrowed == 0) {
                library[i].isBorrowed = 1;
                saveToFile(library, count);
                printf("Book borrowed successfully!\n");
            } else {
                printf("Book is already borrowed.\n");
            }
            return;
        }
    }
    printf("Book ID not found.\n");
}

// Return a book
void returnBook(struct Book library[], int count) {
    int id;
    printf("Enter Book ID to return: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (library[i].id == id) {
            if (library[i].isBorrowed == 1) {
                library[i].isBorrowed = 0;
                saveToFile(library, count);
                printf("Book returned successfully!\n");
            } else {
                printf("Book was not borrowed.\n");
            }
            return;
        }
    }
    printf("Book ID not found.\n");
}

// Delete a book
void deleteBook(struct Book library[], int *count) {
    int id;
    printf("Enter Book ID to delete: ");
    scanf("%d", &id);

    for (int i = 0; i < *count; i++) {
        if (library[i].id == id) {
            for (int j = i; j < *count - 1; j++) {
                library[j] = library[j + 1]; // shift books
            }
            (*count)--;
            saveToFile(library, *count);
            printf("Book deleted successfully!\n");
            return;
        }
    }
    printf("Book ID not found.\n");
}

// Update a book
void updateBook(struct Book library[], int count) {
    int id;
    printf("Enter Book ID to update: ");
    scanf("%d", &id);
    getchar();

    for (int i = 0; i < count; i++) {
        if (library[i].id == id) {
            printf("Enter new Title: ");
            fgets(library[i].title, sizeof(library[i].title), stdin);
            library[i].title[strcspn(library[i].title, "\n")] = '\0';
            printf("Enter new Author: ");
            fgets(library[i].author, sizeof(library[i].author), stdin);
            library[i].author[strcspn(library[i].author, "\n")] = '\0';

            saveToFile(library, count);
            printf("Book updated successfully!\n");
            return;
        }
    }       
    printf("Book ID not found.\n");
}

// Reports
void reports(struct Book library[], int count) {
    int borrowed = 0;
    for (int i = 0; i < count; i++) {
        if (library[i].isBorrowed)
            borrowed++;
    }
    printf("\n--- Library Reports ---\n");
    printf("Total Books: %d\n", count);
    printf("Borrowed Books: %d\n", borrowed);
    printf("Available Books: %d\n", count - borrowed);
}

int main() {
    struct Book library[MAX_BOOKS];
    int count = loadFromFile(library); // load books at start
    int choice;

    do {
        printf("\n====== Library Menu ======\n");
        printf("1. Add Book\n2. Display Books\n3. Search Book\n4. Borrow Book\n5. Return Book\n");
        printf("6. Delete Book\n7. Update Book\n8. Reports\n9. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addBook(library, &count); break;
            case 2: displayBooks(library, count); break;
            case 3: searchBook(library, count); break;
            case 4: borrowBook(library, count); break;
            case 5: returnBook(library, count); break;
            case 6: deleteBook(library, &count); break;
            case 7: updateBook(library, count); break;
            case 8: reports(library, count); break;
            case 9: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while (choice != 9);

    return 0;
}
