#include<stdio.h>
float f1(float r){
    float area;
    area = 3.14*r*r;
    return area;
}

int main(){
    float r;
    printf("Enter the radius to calculate the area:\n");
    scanf("%f",&r);
    f1(r);
    printf("The area of the circle with rad %f is %f\n ",r, f1(r));

    return 0;
}


#include<stdio.h>
float si(float p,float r,float t){
     float si;
    si = (p*r*t)/100;
    return si;
}

int main(){
    float p, r, t;
    printf("Enter the principle to calculate the SI:\n");
    scanf("%f",&p);
    printf("Enter the rate to calculate the SI:\n");
    scanf("%f",&r);
    printf("Enter the time to calculate the SI:\n");
    scanf("%f",&t);
    si(p,r,t);
    printf("The si of principle %f , rate %f and time %f is : %f\n ",p,r,t, si(p,r,t));

    return 0;
}


// Take something return nothing(TSRN)
#include<stdio.h>
void sum(int n){
    int csum =0;
    for(int  i =1; i<=n; i++){
        if(i%2!=0)
            csum += i;
        
    }
    printf("The sum of first %d odd natural nums is %d:\n",n,csum);
    }
   


int main(){
    int n;
    printf("Enter the number till the sum is displayed:\n");
    scanf("%d",&n);
    sum(n);
    

    return 0;
}

// TSRS
// FACTORIAL
// try using long int for higher range as int can take a limited value
#include<stdio.h>
long int fact(long int n){
    long int fact =1;
    for(int i =1; i<=n; i++){
        fact *= i;
    }
    return fact;
}


int main(){
    long int n;
    printf("Enter the number till the fact is displayed:\n");
    scanf("%ld",&n);
    long int result = fact(n);
    printf("The factorial of %ld is = %ld\n", n, result);

    return 0;
}

// PERMUTATION AND COMBINATION
#include<stdio.h>
long long int factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

long long int perm(int n, int r){
   long long int perm;
   long long fact_n = factorial(n);
   long long fact_n_r = factorial(n - r);
   perm = (fact_n / fact_n_r);
   return perm;
}
long long int comb(int n , int r){
    long long int comb;
    long long int fact_n = factorial(n);
    long long int fact_r = factorial(r);
    long long int fact_n_r = factorial(n-r);
    comb = (fact_n)/((fact_r)*fact_n_r);
    return comb;
}


int main(){
    int n , r;
    printf("Enter the value of n and r = \n");
    scanf("%d %d", &n,&r);
    comb(n ,r);
    printf("The comb of %d and %d is = %lld " ,n , r, comb( n,  r));
    return 0;
  }


// DIGIT CHECKER
#include<stdio.h>

int checker(int num, int digit){
    while(num > 0) { 
        if(num % 10 == digit){
            return 1; 
        }
       num/=10; 
    } 
    return 0;


}
  int main(){
    int num, digit;
    printf("Enter the number to check for digit:\n");
    scanf("%d", &num);
    printf("Enter the digit to check in the number:\n");
    scanf("%d", &digit);
    
    if(checker(num, digit)){
        printf("The digit %d is present in the number %d\n", digit, num);
    } else {
        printf("The digit %d is not present in the number %d\n", digit, num);
    }
    
    return 0;

  }

//   N ODD NATURAL NUMBERS
#include<stdio.h>
void f1(int n){
    if(n>0){
        printf("%d ", 2*n-1);
         f1(n*(n-1));
         
    }
   
}


int main(){
    int n;
    printf("Enter a limit for printing odd integers:\n");
    scanf("%d", &n);
    printf("The first %d odd natural numbers are:\n", n);
    f1(n);
    return 0;
}
  
//   N EVEN NATURAL NUMBERS
#include<stdio.h>
void f1(int n){
    if(n>0){
     
            f1((n-1));
            printf("%d ", 2*n);
         
         
    }
   
}


int main(){
    int n;
    printf("Enter a limit for printing even integers:\n");
    scanf("%d", &n);
    printf("The first %d even natural numbers are:\n", n);
    f1(n);
    return 0;
}




//   N EVEN in REVERSE NATURAL NUMBERS
#include<stdio.h>
void f1(int n){
    if(n>0){
     
         
            printf("%d ", 2*n);
            f1((n-1));
         
    }
   
}


int main(){
    int n;
    printf("Enter a limit for printing even integers:\n");
    scanf("%d", &n);
    printf("The first %d even natural numbers are:\n", n);
    f1(n);
    return 0;
}

 
//  SQUARE OF N NATURAL NUMBERS
#include<stdio.h>
void f1(int n){
    if(n>0){
     
            f1((n-1));
            printf("%d ", n*n);
         
         
    }
   
}


int main(){
    int n;
    printf("Enter a limit for printing square of integers:\n");
    scanf("%d", &n);
    printf("The first %d square of natural numbers are:\n", n);
    f1(n);
    return 0;
}


// DECIMAL TO BINARY
#include<stdio.h>
void f1(int n){
    if(n==0){
        printf("0");
    }
    if(n>0){
        f1(n / 2);
       printf("%d", n % 2);
     
  
    }

}
int main(){
    int n;
    printf("Enter the decimal for bin conversion:\n");
    scanf("%d", &n);
    printf("The binary representation of %d is:\n", n);
    f1(n);
    return 0;
}


//  BINARY TO DECIMAL 
#include<stdio.h>
int decinum(int n){
    int base=1;
    int decinum=0;
    if(n == 0)
        return 0;
    else{
        decinum += (n % 10) * base;
        n /= 10;
        base *= 2;
    }
    return decinum;
}

int main(){
    int n;
    printf("Enter the binary for dec conversion:\n");
    scanf("%d", &n);
    printf("The decimal representation of %d is:\n", n);
    printf("%d\n", decinum(n));
    return 0;
}

// REVERSE of a num
#include<stdio.h>
int reverse(int n){
  
    if(n >0){
        printf("%d", n%10);
        reverse(n/10);
    }

    return 0;
}

int main(){
    int n;
    printf("Enter the number to reverse:\n");
    scanf("%d", &n);
    printf("The reverse of %d is:\n", n);
    reverse(n);
    return 0;
}

// HCF USING RECURSION
#include<stdio.h>
int hcf(int a, int b){
    if(a>b)
    if(a%b==0)
    return b;
    else
    return hcf(b, a%b);
    
    else
    if(b%a==0)
    return a;
    else
    return hcf(a, b%a);
}

int main(){
    int a, b;
    printf("Enter two numbers to find their HCF:\n");
    scanf("%d %d", &a, &b);
    hcf(a, b);
    printf("The HCF of %d and %d is: %d\n", a, b, hcf(a, b));
    return 0;
}

// FIBONACCI USING RECURSION
#include<stdio.h>
int fibo(int n){
    if(n==0 || n==1)
        return n;
    else
        return fibo(n-1) + fibo(n-2);
}

void fibo2(int n)
{
    if(n==0)
        printf("%d", n);
    else{
        fibo2(n-1);
        printf("%d ", fibo(n));
    }
}

int main(){
    int n;
    printf("Enter the number to find its Fibonacci:\n");
    scanf("%d", &n);
    fibo2(n);
    printf("The Fibonacci of %d is %d\n", n, fibo(n));
    return 0;
}


// Count digits
#include<stdio.h>
int countDigits(int n)
{
    if(n==0)
        return 0;
    return countDigits(n / 10) + 1;
}


int main(){
    int n;
    printf("Enter the number to count its digits:\n");
    scanf("%d", &n);
    printf("The number of digits in %d are: %d\n", n, countDigits(n));
    return 0;
}
   
// power of a number
#include<stdio.h>
float power(float base, float exp)            
{
    if(exp == 0)
        return 1;
    if(exp > 0)
        return base * power(base, exp - 1);
    if(exp < 0)
        return power(base, exp+1)/base;
}
int main(){
    float base;
    int exp;
    printf("Enter the base and exponent:\n");
    scanf("%f %d", &base, &exp);
    printf("%f raised to the power of %d is: %f\n", base, exp, power(base, exp));
    return 0;
}