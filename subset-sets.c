#include <stdio.h>

int insert(int set[],int n,int element){
    for(int i=0;i<n;i++){
        if (set[i]==element)
        return n;
    }
    set[n]=element;
    return n+1;
}

int main()
{
    int A[100];
    int n=0,element,n1;
    
    printf ("Enter elements for the first set, enter 0 to end the array: ");
    do{
        scanf("%d",&element);
        if (element!=0) { 
            (n=insert(A,n,element));
        }

    }while(element!=0);
    n1=n;

    
     int B[100];
    int n3=0,element2,n2;
    
    printf ("Enter elements for the first set, enter 0 to end the array: ");
    do{
        scanf("%d",&element2);
        if (element2!=0) { 
            (n3=insert(B,n3,element2));
        }

    }while(element2!=0);
    n2=n3; 

 
    
    
    int isSubset=1; //assuming that a is a subset of b 

    for(int i=0;i<n1;i++){
        int found =0; //declared a variable to compare elements 
        for(int j=0;j<n2;j++){
            if (A[i]==B[j]){
                found=1; // true if all elements of a exist in b 
                break;
            }
        }
        if (found==0){
            isSubset=0; //if no elements are similar the loop breaks 
            break;
        } // if found or issubset =1 then it prints that a is a subset of b 
    }
    if(isSubset)
    printf("A is a subset of B");// if found=1 then a is a subset of b 
    else 
    printf("A is not a subset of B");// if found =0 then issubset becomes false and hence a is not a subset of b 
    return 0;
}