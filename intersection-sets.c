#include <stdio.h>

int insert(int set[],int n,int element){
    for(int i=0;i<n;i++){
        if (set[i]==element)
        return n;
    }
    printf("\nelement=%d",element);
    set[n]=element;
    printf("\n %d th element set to =%d\n",n,set[n]);
    return n+1;
}

void display(int set[],int n){
    printf("\nfinal intersection set={");
    for(int i=0;i<n;i++){
        printf("%d,",set[i]);
    }
    printf("}\n");
}


int main(){
    int A[5]={1,2,3,3,2};
    int B[5]={2,4,3};
    int n1=5, n2=3;
    int set[5]={};
    int lenofintersection=0;
    printf("The common elements in A and B are: ");
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(A[i]==B[j]){
                printf("\n %d th element to be inserted =%d",lenofintersection,A[i]);
                lenofintersection=insert(set,lenofintersection,A[i]);
                
                break;
            }
        }
    }
    display(set,lenofintersection);
    return 0;
}
