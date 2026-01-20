#include <stdio.h>
int main(){
    int A[]={1,2,3,4};
    int B[]={5,6,3,2};
    int n1=4;
    int n2=4;
    printf("The cartesian product of A and B is : {");
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            printf("(%d,%d) ",A[i],B[j]);
        }
    }
    printf("}");
    return 0;
}