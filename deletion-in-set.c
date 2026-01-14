#include <stdio.h>
void display(int set[], int n){
    for(int i=0;i<n;i++ ){
        printf("%d",set[i]);
    }
}
int deleteElement (int set[],int n,int element){
    int pos=-1;
    for(int i=0;i<n;i++){
        if (set[i]==element){
            pos=i;
            break;
        }
    }
    if(pos==-1){
        printf("Element not found");
        return n;
    }
    for(int i=pos;i<n;i++){
        set[i]=set[i+1];
    }
    return n-1;
}

int main (){
    int set[100]={10,20,30,40,50};
    int n=5;
    int element;
    printf("Original set:");
    display(set,n);
    printf("Enter element to delete:");
    scanf("%d",&element);
    n= deleteElement(set,n,element);
    printf("Set after deletion:");
    display(set,n);
    return 0;

}