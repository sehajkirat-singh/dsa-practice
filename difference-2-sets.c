#include <stdio.h>
int search(int set[],int n,int key){
    for(int i=0;i<n;i++){
        if(set[i]==key)
        return 1;
    }
    return 0;
}
void difference(int A[],int n1,int B[],int n2){
    printf("A-B=");
    for(int i=0;i<n1;i++){
        if(!search(B,n2,A[i])){
            printf("%d\t",A[i]);
        }
    }
}

int main(){
    int A[]={2,3,4,5};
    int B[]={1,2,3};
    int n1=4;
    int n2=3;

    difference(A,4,B,3);
    return 0;
}