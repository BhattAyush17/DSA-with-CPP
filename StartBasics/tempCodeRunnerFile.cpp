
// transfering arr1 data to arr2
#include<stdio.h>
int main(){
    int i , n1, n2 ;
    printf("enter the size of 1st array");
    scanf("%d", &n1);
    int a[n1] ;
    printf("Enter the elements in the array:\n");
    for( i=0; i<n1; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter the size of sec arr");
    scanf("%d", &n2);
    int b[n2];
    for(i=0; i<n2; i++){
        b[i] = a[i];
    }
    printf("The elements in the second array are:\n");
        for(i=0; i<n2; i++)
    printf("%d ", b[i]);


    printf("\n");
    return 0;
}