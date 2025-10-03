#include<stdio.h>
#include<string.h>

#define MAX_BOOKS 100

struct book{
    int id;
    char title[50];
    char author[50];
    int isBorrowed;
};
//adding books to an file
void saveToFile(struct book library [],int count){    //array of struct
    FILE *fp = fopen("library.txt","w");              //saves the information in an file 
    for(int i=0; i<count; i++){
        fprintf(fp,"%d,%s,%s,%d\n",library[i].id,library[i].title,library[i].author,library[i].isBorrowed);
    }
    fclose(fp);
}
//loading books from an file
int loadFromFile(struct book library[]){
    FILE *fp = fopen("library.txt","r");
    int count = 0;
    if(fp!=NULL){
        while(fscanf(fp,"%d,%49[^,],%49[^,],%d\n",
            &library[count].id,
            library[count].title,
            library[count].author,
        &library[count].isBorrowed)==4){
            count++;
        }
        fclose(fp);
    }
    return count;
}

void addBook(struct book library[],int *count){
    if(*count>=MAX_BOOKS){
    printf("Library is full ! ");
    return;
    }
    printf("Enter Book Id: ");
    scanf("%d",&library[*count].id);
    getchar();
    printf("Enter title: ");
    fgets(library[*count].title,sizeof(library[*count].title),stdin);
    library[*count].title[strcspn(library[*count].title,"\n")]='\0';  //for removal of new line 
    printf("Enter author: ");
    fgets(library[*count].author,sizeof(library[*count].author),stdin);
    library[*count].author[strcspn(library[*count].author,"\n")]='\0';
    library[*count].isBorrowed=0;  //availiable
    
    (*count)++;
    saveToFile(library,*count);
    printf("Book added successfully");
}
    //display of books
    void displayBooks(struct book library[],int count){
        printf("\n*-*-*Library Books*-*-*\n");
        for(int i=0; i<count; i++){
            printf("ID=%d | Title=%s | Author=%s | Status=%s\n",
            library[i].id,
            library[i].title,
            library[i].author,
            library[i].isBorrowed?"Borrowed":"Availiable");
        }
    }
    void searchBook(struct book library[],int count){
        char title[50];
        printf("Enter Title To Search");
        getchar();
        fgets(title,sizeof(title),stdin);
        title[strcspn(title,"\n")] = '\0';

        for(int i=0; i<count; i++){
            if(strcmp(library[i].title,title)==0){ //strcmp compares the strings lexicographically
                printf("Book Found! ID: %d | Author:%s | Status:%s\n",
                    library[i].id,library[i].author,
                    library[i].isBorrowed?"Borrowed":"Availiable");
                    return;
            }
        }
        printf("Book not found!");
    }

    void borrowBook(struct book library[],int count){     // for borrowing the book 
        int id;
        printf("Enter book ID to borrow"); 
        scanf("%d",&id);
        for(int i=0; i<count; i++){
            if(library[i].id==id){
                library[i].isBorrowed=1;
                saveToFile(library,count);
                printf("Book borrowed successfully");
            }
            else{
                printf("The book is already borrowed");
            }
            return ;
        }
        printf("Book ID not found ! ");
    }

    // Returning an book 

    void returnBook(struct book library[],int count){
        int id;
        printf("Enter book Id to return");
        scanf("%d",&id);
        for(int i=0; i<count; i++){
            if(library[i].id==id){
                if(library[i].isBorrowed==1){
                   library[i].isBorrowed=0;
                   saveToFile(library,count);
                   printf("Book returned successfully");
                }else{
                    printf("Book was not borrowed");
                }
                return;
            }
        }
            printf("Book ID does not found!");
    }

    // Deleting an book

    void deleteBook(struct book library[],int *count){    //*count for updating the memory
        int id;
        printf("Enter book ID to delete");
        scanf("%d",&id);
        for(int i=0; i<*count; i++){
            if(library[i].id==id){
                for(int j=i; j<*count-1; j++){
                    library[j] = library[j+1]; // for shifting of books 
                }
                (*count)--;
                saveToFile(library,*count);
                printf("Book deleted successfully");
                return;
            }
        }
        printf("Book id does not found");
    }

    // for updating the information of an book

    void updateBook(struct book library[], int count) {
    int id;
    printf("Enter Book ID to update: ");
    scanf("%d", &id);
    getchar();
        for(int i=0; i<count; i++){
            if(library[i].id == id){
                printf("Enter new title");
                fgets(library[i].title,sizeof(library[i].title),stdin);
                library[i].title[strcspn(library[i].title,"\n")]='\0';
                printf("Enter new author");
                fgets(library[i].author,sizeof(library[i].author),stdin);
                library[i].author[strcspn(library[i].author,"\n")]='\0';

                saveToFile(library,count);
                printf("Book updated successfully");
                return;
            }
        }
        printf("Book ID not found");
    }

    //Report of library no. of books ,borrowed books ,availiable books etc

    void reports(struct book library[],int count){
        int borrowed = 0;
        for(int i=0; i<count; i++){
            if(library[i].isBorrowed){
                borrowed++;
            }
        }
        printf("----LIBRARY REPORT----");
        printf("Total Books: %d\n",count);
        printf("Borrowed Books: %d\n",borrowed);
        printf("Availiable Books: %d\n",count-borrowed);

    }

    int main(){
        struct book library[MAX_BOOKS];
        int count = loadFromFile(library);    // for loading books
        int choice;

        do{
            printf("\n========LIBRARY MENU========\n");
            printf("1. Add Book\n2. Display Book\n3. Search Book\n4. Borrow Book\n5. Return Book\n");
            printf("6. Delete Book\n7. Update Book\n8. Reports\n9. Exit\n");
            printf("ENTER CHOICE");
            scanf("%d",&choice);
            
            switch(choice){
                case 1: addBook(library,&count); break;
                case 2: displayBooks(library,count); break;
                case 3: searchBook(library,count); break;
                case 4: borrowBook(library,count); break;
                case 5: returnBook(library,count); break;
                case 6: deleteBook(library,&count); break;
                case 7: updateBook(library,count); break;
                case 8: reports(library,count); break;
                case 9: printf("Exiting.....\n");break;
                default:printf("Invalid Choice!\n");
            }
        }while(choice!=9);
        return 0;
    }