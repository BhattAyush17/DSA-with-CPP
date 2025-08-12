#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
  
// str input into array
char* inputString(){
    char ch, *p=NULL, *q=NULL;
    int size=1;
    printf("Enter a string: ");
     p=(char*)malloc(size);
     p[0] = '\0'; // Initialize the string with an empty string

    while(){
        ch=getch();
        if(ch=='\n' || ch=='\r') {
            break; // Exit on newline or carriage return
        }
       
        scanf("%c", &ch);
        q=(char*)malloc(size+1);
          for(i=0;p[i];i++)
           q[i]=p[i];
              q[i-1]=ch;
                q[i] = '\0';
        free(p);
        size++;
        p=(char*)malloc(size);
        strcpy(p, q);
        free(q);
    }
    return p;
}
 
// avg
void f2() {
    int size;
    float avg;
    int* p;   // Pointer 'p' must be declared
    int s = 0; // Sum 's' must be declared and initialized to 0

    printf("Enter the number of values: ");
    scanf("%d", &size);
  
    p = (int*)malloc(size * sizeof(int));
    // Always check if memory allocation was successful
    if (p == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }

    printf("Enter %d values:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &p[i]);
    }

    // This loop now correctly calculates the sum
    for (int i = 0; i < size; i++) {
        s = s + p[i];
    }

    avg = (float)s / size;
    printf("Average: %.2f\n", avg);

    free(p); // Free the allocated memory to prevent a leak
}

struct Student** createsStudentArray(int size)
{
    struct Student **ptr;
    ptr=(struct Student **) malloc(size * sizeof(struct Student*));
    return ptr;
}
    
struct Team** createTeamArray(int size){
    struct Team **ptr;
    ptr=(struct Team **) malloc(size * sizeof(struct Team*));
    return ptr;
}


int main()
{
    f2();
    char* str = inputString();
    printf("You entered: %s\n", str);
    free(str); // Free the allocated memory
    return 0;
}

