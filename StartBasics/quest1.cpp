#include<stdio.h>
int main(){
    int i,x;

    for(i =0; i<=3; i++){
        printf("Enter an even num");
        scanf("%d",&x);
        if(x%2==0){
            break;
        }
    } if(i==4)
    printf("Game over");
    else
    printf("You win");
    return 0;
}