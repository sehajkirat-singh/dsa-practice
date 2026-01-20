#include <stdio.h>

int main(){
    int binary[32],n,i=0;
    printf("Enter element to be converted: ");
    scanf("%d",&n);


    if(n==0){
        printf("Binary : 0");
        return 0;
    }
    while(n>0){
        binary[i]=n%2;
        n=n/2;
        i++;
    }
    
    printf("       8421 \n");

    printf("Binary:");
    for(int j=i-1;j>=0;j--){
        printf("%d",binary[j]);
    }


}