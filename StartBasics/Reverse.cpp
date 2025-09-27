#include<stdio.h>
int main(){
     int n = 12345;
    int y =0;
    int x;
    while(n!=0){
     x=n%10;
    y = y*10 +x;
    n=n/10;
}
printf("%d", y);
return 0;
}