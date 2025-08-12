#include<stdio.h>
void input(int *p, int size);
void display(int *p, int size);



int main(){

    int a[10];
    input(a,10);
    display(a,10);
    printf("\n");
    return 0;
}
 void display(int *p, int size){
    int i;
    for(i = 0; i < size; i ++){
        printf("%d ", *(p + i));
    }
 }
 void input(int *p, int size){
    int i;
    for(i = 0; i < size; i++){
        printf("Enter the element %d: ", i + 1);
        scanf("%d", (p + i));
    }
} 