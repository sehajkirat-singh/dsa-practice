#include <stdio.h>

void display (int set[], int n) {
    for (int i=0;i<n;i++) {
        printf("%d ",set[i]);
    }
    

}

int main() {
    int set[]={1,2,3,4,5};
    int n=5;
     display(set,n);
return 0;

}
