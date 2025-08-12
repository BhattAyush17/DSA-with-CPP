
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



int main()
{
    f2();
    char* str = inputString();
    printf("You entered: %s\n", str);
    free(str); // Free the allocated memory
    return 0;
}

