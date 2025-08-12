// Rotate array
#include<stdio.h>

void rotate(int A[], int size, int d) {
    int i, temp,n;
    if(d==1){
        while(n){
        temp = A[0];
        for(i=0;i<=size-2;i++)
        A[i] = A[i+1];
        A[size-1] = temp;
    }
    }
    else{

        while(n){
            temp=A[0];
            for(i=0;i<size-1;i++)
                A[i-1] = A[i];
                    A[size-1] = temp;
                          n--;
        }
    }

}
int main(){
    int A[] = {1, 2, 3, 4, 5};
    int size = sizeof(A) / sizeof(A[0]);
    rotate(A, size, 1);
    for(int i = 0; i < size; i++) {
        printf("%d ", A[i]);
    }
    return 0;
}   

// swap
#include<stdio.h>
void swap_arr(int a[], int i1, int i2 ){
    int temp = a[i1];
    a[i1] = a[i2];
    a[i2]= temp;
}
int main(){
    int A[] = {1, 2, 3, 4, 5};
   swap_arr(A, 0, 1);
    for(int i = 0; i < 5; i++) {
        printf("%d ", A[i]);
    }
    return 0;
}   

// duplicate
#include <stdio.h>
int duplicate(int A[], int size) {
    for(int i=0; i <size; i++){
        for(int j = i-1; j>=0; j--)
        if(A[i] == A[j]){
            return i;
        }
    }
    return -1;

}

int main(){
    int A[] = {3,1,1,2,13,3,23,1,2};
    int size =sizeof(A)/sizeof(A[0]);
    int index = duplicate(A, size);
    if(index != -1){
        printf("Duplicate element found at index: %d\n", index);
    }
    return 0;
}
   