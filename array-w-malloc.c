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
    int n;
    int size;
    int element;
     n=0;
    printf("Enter no of elements in the array:");
    scanf("%d",&size);
    arr =(int *)malloc(size*sizeof(int));

    if(arr==NULL){
        printf("Memory allocation FAILED.");
        return 1;

       
    }
    printf("Enter elements of the  array:");
    for(int i=0;i<size;i++){
        scanf("%d",&element);
        n=insert(arr,n,element);
    }
    printf("The array given by the user is:");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);    
    }
    free(arr);
    arr=NULL;

    return 0;


}
