#include<stdio.h>
int main(){
    int n,  fact(int n);
    printf("Enter a number: ");
    scanf("%d", &n);

    fact(n);
    printf("Factorial of %d is %d\n", n , fact(n));
    return 0;
}
    
    int fact(int n){
        if(n ==0 || n==1){
            return 1;
        }
        return n*fact(n-1);
    }
   

