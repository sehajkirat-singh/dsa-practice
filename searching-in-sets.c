#include <stdio.h>
int main(){
    int set[]={2,3,4,5};
    int key=5;
    int found;
    printf("Searching element...\n");
    for(int i=0;i<4;i++){
        if(set[i]==key){
            printf("ELEMENT FOUND: %d",key);
            found=1;
        }
    }
    if(!found){
        printf("Element not in the set");

    }
    
    return 0;
}