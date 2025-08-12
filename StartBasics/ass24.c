#include <stdio.h>
#include <string.h>
void input(char s[][20], int n) {
      printf("Enter string %d: ", i + 1);
    for (int i = 0; i < n; i++) {
        printf("Enter string %d: ", i + 1);
        fgets(s[i], sizeof(s[i]), stdin);
        s[i][strlen(s[i])-1] = '\0'; // Remove newline character ,2d array

    }
}
// count vowels
int count_vowels(char str[]){
char v[]= "aeiouAEIOU";
int i,j, count = 0;
for(i=0;i<str[i];i++){
    for(j=0;j<v[j];j++){
        if(str[i] == v[j]){
            count++;
            break;
        }
    }
}
    return count;
}
// Sort Cities
void sort(char city[][20], int n) {
    char temp[20];
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(city[i], city[j]) > 0) {
                strcpy(temp, city[i]);
                strcpy(city[i], city[j]);
                strcpy(city[j], temp);
            }
        }
    }
}
// cities
void f3(){
    int i;
    char city[10][20];
    input(city,10);
    for(i=0;i<=9;i++){
        printf("City %s",city[i]);
    }
    sort(city, 10);
    printf("\nSorted cities:\n");
    for(i=0;i<=9;i++){
        printf("City %s",city[i]);
    }
}

void string_to_words(char str[], char words[][20]) {
    int wcount,i,j,k;
    wcount = count_words(str);
   for(i=0;j=0;k=0; str[i]; i++,k++)
   {
    if(str[i] == ' ' || str[i] == '\0') {
       words[j][k] = '\0';
      
     
    } else {
        words[j][k] = str[i]; // Add character to current word
    }
   }
}
// Remove duplicates
void remove_duplicates(char name[][20], int n) {
    int i;
    sort(name, n);
    for(i=n-2; i>0; i--) {
        if(strcmp(name[i], name[i+1])==0)
        name[i+1][0] = '\0'; // Mark duplicate as empty
    }
    sort(name, n); // Sort again to bring empty strings to the end
}

void f5(){
    int i;
char name[][20]={
"John",
"Jane",
"Jack",
"Jill",
"James",
"John",
"Jane"
};
remove_duplicates(name, 7);
for(int i=0;i<=6; i++){
    printf("%s\n", name[i]);

}
}

int main(){
   f5();
   printf("\n");
    return 0;
}

