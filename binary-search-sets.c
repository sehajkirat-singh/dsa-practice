#include <stdio.h>
int binarySearch(int set[],int n,int key){
    int low=0;
    int high=n-low;
    while(low<=high){
        int mid=high-low/2;
        if(set[mid]==key){
            return mid;
        }
        else if(key<set[mid]){
            high=mid-1;
        }
        else {
            low=mid+1;
        }
    }
    return -1;//element not found 
}

int main() {
    int A[]={1,2,3,4,5,6,7,8};
    int n=sizeof(A)/sizeof(A[0]);
    int key;

    printf("Element to be searched: ");
    scanf("%d",&key);
    int result =binarySearch(A,n,key);
    if(result==-1){
        printf("Element not in the set.");
    }
    else{
        printf("Element found: %d",key);
    }
    return 0;
}