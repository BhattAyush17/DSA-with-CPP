#include<stdio.h>
int main(){ 
    int  x, y,n=0, sum =0, p,i,d;
    printf("Enter a number");
    scanf("%d", &x);
    y=x;
    while(y){
         y=y/10;
         n++;
    }
    for(y=x; y;y=y/10){
        d=y%10;
        p = 1;
        for(i = 1; i <= n; i++)
            p = p * d;
        sum = sum+p;

    }
    if(sum==x)
    printf("%d is an Armstrong number\n", x);
    else
    printf("%d is not an Armstrong number\n", x);
    return 0;
}