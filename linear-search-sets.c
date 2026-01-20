#include <stdio.h>
int main(){
    int A[]={1,2,3,4,89,54,32,8};
    int n=sizeof(A)/sizeof(A[0]);
    int key;
    int element=0;
    printf("Element to be searched: ");
    scanf("%d",&key);
    for(int i=0;i<n;i++){
        if(A[i]==key){
            printf("Element found %d",key);
            element= 1;
        }
    }
    if(element==0){
        printf("Element not in the set.");
    }
    
}