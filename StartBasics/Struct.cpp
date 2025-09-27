
 #include<string.h>
 #include<stdio.h>
 struct Book{
    int BookID;
    char title[20];
    float price;
 } ;

 struct Book input(){
   struct Book b;
   printf("entr the book id ,title and price");
   scanf("%d", &b.BookID);
   fflush(stdin); // Clear the input buffer
   fgets(b.title, 20, stdin);
   b.title[strlen(b.title)-1] = '\0'; // Remove newline character
   scanf("%f", &b.price);
   return b;
 }

 void display(struct Book b){
   printf("\n %d %s %f", b.BookID, b.title, b.price);
 }

 int main(){
    struct Book b1 ={1,"C in Depth", 350.0};
    struct Book b2,b3;
    b2.BookID= 2;
    strcpy(b2.title, "Java");
    b2.price = 450.0;
    display(b2);
    printf("\n");
    display(b1);
    display(b2);
    display(b3);
printf("\n");
    return 0;
 }