#include<stdio.h>
int main(){
    int n, natural(int n);
    printf("Enter till you want to print natural nums");
    scanf("%d", &n);
    natural(n);
    printf("Sum of first %d natural nums are %d\n", n , natural(n));
    return 0;
}
int natural(int n){
    if(n ==0){
        printf("Natural nums starts from 1");
        return 0;
    }
    return n + natural(n-1);

}
