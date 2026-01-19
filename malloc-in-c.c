#include <stdio.h>
#include <stdlib.h>
int main() {
    int *ptr;
    ptr = (int*)malloc(sizeof(int));
    if(ptr==NULL){
        printf("Memory allocation FAILED.");
    }
    else {
            printf("Memory allocated.\n");
                 }       
    
    printf("element to be stored:");
    scanf("%d",&*ptr);
    printf("Value stored by user:%d\n",*ptr);
    
    free(ptr);
    ptr=NULL;
    if(ptr==NULL){
        printf("freed memory allocated");
        
    }
    else {
        printf("error");
    }
    return 0;
}