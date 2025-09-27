// STRINGS
#include<stdio.h>
int main(){
    char str[10] = {'H', 'e', 'l', 'l', 'o', '\0'};
    printf("The string is: %s\n", str);
    return 0;

}
#include<stdio.h>
int main(){
    char str[10] = {'H', 'e', 'l', 'l', 'o', '\0'};
    int i;
    for(i = 0; str[i] != '\0'; i++) {
        // printf("The string is: %c\n", str[i]);
         printf("The string is: %s", &str[i]);
         printf("The string is: %c", str[i]);
         printf("The string is: %s", &str);
        }
    
    printf("\n");
    return 0;
}


#include<stdio.h>
int main(){
    char str[10]= "BHOPAL";
    int i;
    for(i = 0; i<=str[i]; i++){  
    }
     printf("The length of string is: %d\n", i);
    return 0;
}


#include<stdio.h>
int main(){
    char str[20];
    // gets is used to read a string with spaces
    printf("Enter your name: ");
    gets(str);
    printf("%s", str);
    printf("\n");
    return 0;
}

#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    int i;
    // using str length function = strlen
    printf("Enter your name: ");
    fgets(str,20,stdin);

    str[strlen(str)-1] = '\0'; // remove newline character
    i =strlen(str);
    
    printf("The length of string is: %d\n", i);
    return 0;
}