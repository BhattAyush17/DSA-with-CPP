#include<stdio.h>
int main(){
    int a = 12, b =14 ;
    int max;
    max = (a > b) ? a : b;
    while(1){
        if(max%a==0&& max%b==0){
            printf("LCM of %d and %d is %d",a,b,max);
            break;
        }
        max++;
    }
    return 0;

}