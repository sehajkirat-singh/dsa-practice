#include <stdio.h>

int main(){
    int A[]={1,2,3,4,23};
    int B[]={10,5,4,7,8};
    int disjoint =1;//assuming sets are not disjoint
    int n1=sizeof(A)/sizeof(A[0]);
    int n2=sizeof(B)/sizeof(B[0]);

    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(A[i]==B[j]){
                 disjoint=0;
                break;
            }
        }
    }
    if(disjoint==1){
        printf("Sets are disjoint.");
    }
    else{
        printf("Sets have common elements");
    }
    return 0;
}