#include <stdio.h>
int insert(int set[],int n,int element){
    for(int i=0;i<n;i++){
        if (set[i]==element)
        return n;
    }
    set[n]=element;
    return n+1;
}

void display(int set[],int n){
    for(int i=0;i<n;i++){
        printf("%d , ",set[i]);
    }
    // printf("set = %d", set[0]);
}

int main(){
    int set[50];
    int n=0;
    int element;
    printf("Enter an element to be inserted:");
    scanf("%d",&element);
    n=insert(set,n,element);
    printf("Enter another element to be inserted:");
    scanf("%d",&element);
    n=insert(set,n,element);
    printf("Set elements are:");
    display(set,n);
    return 0;

}