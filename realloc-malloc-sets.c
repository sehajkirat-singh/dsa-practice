#include <stdio.h>
#include <stdlib.h>
int insert(int set[],int n,int element){
    for(int i=0;i<n;i++){
        if (set[i]==element)
        return n;
    }
    set[n]=element;
    return n+1;
}


int main(){
    int *arr;
    int i,n,n1,size,element;
    n1=0;
    printf("Enter no of elements in the set:");
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    if(arr==NULL){
        printf("Memory allocation FAILED");
        return 1;
    }
    printf("Enter the elements of the set:");
    for(int i=0;i<n;i++){                                                                             
        scanf("%d",&element);
        n1=insert(arr,n1,element);
    }
    printf("The original array was:");
    for(int i=0;i<n1;i++){
        printf("%d",arr[i]);
    }

    printf("Enter the size of the new array:");
    scanf("%d",&size);
    arr=(int *)realloc(arr,size*sizeof(int));
    if(arr==NULL){
        printf("Relocation failed");
        return 1;
    }
    if (size>n1)
    {
        printf("Enter the additional elements of the set:");
        for(int i=0;i<(size-n1);i++){
            scanf("%d",&element);
            n1 = insert(arr,n1,element);
        }   
    }
    printf("Resized array would be:");
    for(i=0;i<size;i++){
        printf("%d",arr[i]);
    }
    free(arr);
    arr=NULL;

}