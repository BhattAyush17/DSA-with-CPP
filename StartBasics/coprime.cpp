#include<stdio.h>
int main(){
    int a  =2 ,b=6;
    int c=a<b? a:b;
    if(a%c==0&& b%c==0){
        printf("Coprime\n");
    } else {
        printf("Not Coprime\n");
    }
    return 0;
}