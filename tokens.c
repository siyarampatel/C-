#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char a[200];
    int i;
    fgets(a,sizeof(a),stdin);
    while(a[i]!='\0'){
        if(a[i]=='\n'){
            printf("\n");
        }else
        printf("%c",a[i]);
        i++;
    }
    return 0;
}
