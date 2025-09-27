#include<stdio.h>
void f1();
void f2();
void f3();
void f4();
void f5();
void f6();
void f7();
void f8();
void f9();
int main(){

    f9();
    printf("\n");
    return 0;
}

    void f1()
    {
    int i, j;
    for(int i = 1; i<=5; i++){
        for(int j =1; j<=i-1; j++){
            if(j<=i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
   
}
 
    void f2()
    {
    int i, j;
    for(int i = 1; i<=5 ; i++){
        for(int j = 1; j<=5; j++){
            if(j<=6-i)
            printf("*");
            else 
            printf(" ");
        }
        printf("\n");
    }
   
}


  void f3()
    {
    int i, j;
    for(int i = 1; i<=5 ; i++){
        for(int j = 1; j<=5; j++){
            if(j<=6-i)
            printf("*");
            else 
            printf(" ");
        }
        printf("\n");
    }
   
}

   void f4()
    {
    int i, j;
    for(int i = 1; i<=5; i++){
        for(int j =1; j<=i; j++){
            if(j<=i)
            printf("%d", j);
            else
            printf(" ");
        }
        printf("\n");
    }
   
}
 void f5()
    {
    int i, j;
    for(int i = 1; i<=5; i++){
        for(int j =1; j<=i-1; j++){
            if(j<=i)
            printf("%d",j);
            else
            printf(" ");
        }
        printf("\n");
    }
   
}

 void f6()
    {
    int i, j, k;
    for(int i = 1; i<=5; i++){
        k=i;
        for(int j =1; j<=5; j++){
            if(j<=i) {
                printf("%d",k);
                k--;
            }
            else
            printf(" ");
        }
        printf("\n");
    }
   
}

void f8()
{
    int i , j ;
    int k=1;
    for(int i = 1; i<=5; i++){
        
        for(int j =1; j<=5; j++){
           
            if(i<=j) {
                printf("%d", k); 
                k++;
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void f9(){
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);
    switch(marks){
        case 90 ...100:
        printf("Grade A++"); 
        break;
        case 80 ... 89:
        printf("Grade A");
        break;
        case 70 ... 79:
        printf("Grade B");
        break;
        case 60 ... 69:
        printf("Grade C");
        break;
        default:
        printf("Invalid marks\n");
        break;
        printf("enter in the valid range\n");
    }
}