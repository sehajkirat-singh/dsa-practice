#include <stdio.h>
int count(int A[],int n){
        int n = sizeof(A)/sizeof(A[0]);
}
int main(){
    int A[]={1,2,3,4};    
    int n = sizeof(A)/sizeof(A[0]);

    printf("Cardinality of set A= %d",count(A,n));
}