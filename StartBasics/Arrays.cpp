#include<stdio.h>

int main(){
    int a[5], sum = 0, i;
    printf("Enter the 5 elements in the array: \n");
    
    for(i = 0; i < 5; i++){
        scanf("%d", &a[i]); 
        sum += a[i];         
    } 
    
    printf("The sum of the elements in the array is: %d\n", sum);
    return 0;
}   

// ASSIGNMENT 18
#include<stdio.h>
int main(){
int i , a[10], sum=0;
printf("Enter the number of elements in the array:\n");
for(i=0; i<10; i++)
    scanf("%d", &a[i]);
    for(i=0; i<10; i++)
    sum+=a[i];
printf("The sum of the elements in the array is: %d\n", sum);
    return 0;
 }
 
// AVG and size from user
#include<stdio.h>
 int main(){
int i ,n,a[10] ;
float avg=0.0, sum = 0.0;
printf("Enter the number of elements:");
scanf("%d",&n);
printf("Enter the elements in the array:\n");
for(i=1; i<=n; i++)
    scanf("%d", &a[i]);
    for(i=1; i<=n; i++)
    sum+=a[i];
    avg = sum/n;
printf("The sum and the average of the elements in the array is:%f %f\n", sum, avg);
    return 0;
 } 
   
//  sum of even and odd nums in array
#include<stdio.h>
int main(){
int i, n, even_sum = 0, odd_sum = 0;
float even_avg = 0.0, odd_avg = 0.0;
printf("Enter the number of elements:");
scanf("%d", &n);
int a[n];
printf("\nEnter the mixed odd and even numbers in the array:");
for(i = 1; i <= n; i++)
    scanf("%d", &a[i]);
for(i = 1; i <= n; i++) {
    if(a[i] % 2 == 0) {
        even_sum += a[i];
       
    } else {
        odd_sum += a[i];
        
    }
   
    }
     printf("\nThe sum of even nums is %d", even_sum);
     printf("\nThe sum of odd nums is %d", odd_sum);

// average
if(n>0)
even_avg = even_sum / n;
printf("\nThe avg of even nums are %f\n", even_avg);
if(n>0)
odd_avg = odd_sum / n;
printf("\nThe avg of odd nums are %f\n", odd_avg);
return 0;

}

// Find the largest and smallest element in an array
#include<stdio.h>
int main(){
    int i , n ;
    printf("enter the size");
    scanf("%d", &n);
    int a[n] ;
    printf("Enter the elements in the array:\n");
    for( i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
int max = a[0];
int sec_max = a[0]; 
for(i =0; i<n; i++){
    if(a[i]> max){
        max= a[i];
    }
}
// Find second greatest
sec_max = a[0];
for(i=0; i<n; i++){
    if(a[i] > sec_max && a[i] < max)
        sec_max = a[i];
}
    int min = a[0];
    for(i=0; i<n; i++){
        if(a[i]<min) 
        min =a[i];
    }
    int sec_min = a[0];
    for(i=0; i<n; i++){
        if(a[i]>a[i+1]) 
        sec_min =a[i+1];
    }


    printf("greatest element is %d\n", max);
    printf("second greatest element is %d\n", sec_max);
    printf("smallest element is %d\n", min);
    printf("second smallest element is %d\n", sec_min);
    printf("\n");
}

// transfering arr1 data to arr2
#include<stdio.h>
int main(){
    int i , n1, n2 ;
    printf("enter the size of 1st array");
    scanf("%d", &n1);
    int a[n1] ;
    printf("Enter the elements in the array:\n");
    for( i=0; i<n1; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter the size of sec arr");
    scanf("%d", &n2);
    int b[n2];
    for(i=0; i<n2; i++){
        b[i] = a[i];
    }
    printf("The elements in the second array are:\n");
        for(i=0; i<n2; i++)
    printf("%d ", b[i]);


    printf("\n");
    return 0;
}