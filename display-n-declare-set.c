#include <stdio.h>
void display(int set[],int n){
    for(int i=0;i<n;i++){
        printf("%d",set[i]);
    }
    printf("/n");
}

int main() {
    int set[]={1,2,3,4,5};
    int n=5;
    display(set);
    return 0;

}