// #include<stdio.h>
// #include<iostream>
// using namespace std;
// int main(){
//     int a =9;
//     int b=10;
//     printf("yo yo go");
//     printf("Welcome \n students");
//     printf("%d %d",a,b);
// }
// #include<stdio.h>
// #include <iostream>
// int main(){
//     int a,b,sum;
//     printf("Enter a and b");
//     scanf("%d %d", &a ,&b);
//     sum=a+b;
//     printf("Sum =%d", sum);
//     // for printing inverted commas in msg
//     printf("\"End\"");
//     return 0;
// }
//  #include<iostream>
//  #include<stdio.h>
//  int  main(){
//     float area,a ;
//     area= 3.14*a*a;
//     printf("Enter radius of circle");
//     scanf("%f",&a);
//     return 0;
//  }

// #include<iostream>
// #include<stdio.h>
// int  main(){
//     float a ,b,c, avg; 
//     printf("Enter a,b,c");
//      scanf("%f\n %f\n %f\n",&a, &b, &c);
//     avg = (a+b+c)/3;
//     printf("Average =%.2%f\n", avg);
//     return 0;
//  }

// #include<iostream>
// #include<stdio.h>
// int  main(){
//     float p,r,t,si,avg; 
//     printf("Enter a,b,c");
//     scanf("%f\n %f\n %f\n",&a, &b, &c);
//     avg = (a+b+c)/3;
//     printf("Average =%.2%f\n", avg);
//     return 0;
//  }

#include<stdio.h>
int main(){
    int a , b , sum;
    printf("Enter two numbers separated by comma: ");
    scanf("%d,%d", &a,&b);
    sum = a+b;
    printf("Sum = %d\n", sum);
    return 0;
}