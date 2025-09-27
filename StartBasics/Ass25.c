#include<stdio.h>
#include<string.h>

void swap(int *p, int *q){
    int temp;
    temp =*p;
    *p=*q;
    *q=temp;

}
 
// Search occurances of a character in a  str
int search_all_occurences(char*str, char ch, int *arr){
    int i,k=0;
    for(i=0; str[i]; i++){
        if(str[i]==ch){
            arr[k]=i;
            k++;
        }
    }
    return k;
}

// uppercase identification
char* uppercase(char *str){
    int i;
    for (i=0; i< str[i]; i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i]-=32;
        }
    }
    return str;
}

// lowercase identification
char* lowercase(char *str){
    int i;
    for (i=0; i< str[i]; i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i]+=32;
        }
    }
    return str;
}
//  Extract string
void extract_string( char*str, int strt, int end, int *arr){
    int i, k=0;
   for(i=strt; i<=end; i++){
    arr[k]=str[i];
   }
   arr[k]='\0'; // Null-terminate the array 
}

// Swap strings
void swap_string(char *s1, char *s2) {
   char temp[50];
   strcpy(temp, s1);
   strcpy(s1, s2);
   strcpy(s2, temp);
}
// Sorting int values
void sort_nums(int arr[], int size){
    int i, j, temp;
    for(i=0; i<size-1; i++){
        for(j=size-1; j>i; j--){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
//   merge array
void merge_arrays(int *arr1, int size_arr1, int *arr2, int size_arr2, int *arr3, int size_arr3, int *arrFi) {
    int i;
    int k=0;  // for tracking the space and elements for final array

    for(i = 0; i < size_arr1; i++) {
        arrFi[k] = arr1[i];
        k++;
    }
    for(i = 0; i < size_arr2; i++) {
        arrFi[k] = arr2[i];
        k++;
    }
    for(i = 0; i < size_arr3; i++) {
        arrFi[k] = arr3[i];
        k++;
    }

//   quick sort array
void quick_sort(int arr1[], int size) {
   int p=0;
   int left = 0, right = size - 1;
   while (left < right) {
       if (arr1[left] > arr1[right]) {
           int temp = arr1[left];
           arr1[left] = arr1[right];
           arr1[right] = temp;
       }
       left++;
       right--;
   }
   if 
}


int main() { 
    int arr1[] ={01, 00, 44, 14, 35, 45, 56, 47};
    int size = sizeof(arr1) / sizeof(arr1[0]);
    quick_sort(arr1);


    printf("quick Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arrFi[i]);
    }
    printf("\n");

    return 0;
}
}