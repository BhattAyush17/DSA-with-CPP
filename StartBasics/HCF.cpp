#include<stdio.h>
int main(){
    int a = 15;
    int b= 10;
    int h;
    h =a<b? a:b;
    for(int i = h; i>=1; i--){
        if(a%i==0 && b%i==0){
            printf("HCF is = %d",i);
            break;
        }
    }
    return 0;
}