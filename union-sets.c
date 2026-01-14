#include <stdio.h>
int main(){
    int A [5]={1,2,3};
    int B [5]={3,4,2,3,5};
    int U[10];
    int n1=3,n2=5,k=0;
    //to copy elements from A
    for(int i=0;i<n1;i++){
        U[k++]=A[i];

    }
    //add elements of b not already present
    for(int i=0;i<n2;i++){
        int found =0;
        for(int j=0;j<n1;j++){
            if(B[i]==A[j]){
                found=1;
                break;
            }
        }
        if (found==0){
            U[k++]=B[i];
        }
    }
    printf("Union: ");
    for(int i =0;i<k;i++){
        printf("%d",U[i]);
    }
    return 0;

}