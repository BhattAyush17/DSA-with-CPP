#include<stdio.h>
int main(){
    int i , sum=1;
    for(int i=1; i<=5; i++){
        sum *=i;
    }
    printf("factorial of first 5 natural numbers=%d",sum);
}