#include <stdio.h>

int main() {
    int N;

    // Input the number of elements
    printf("Enter the number of elements (N): ");
    scanf("%d", &N);

    if (N >= 30) {
        printf("Please enter a number less than 30.\n");
        return 1;
    }

    int array[100]= {}; // Initialize array to store frequencies

    // Input the elements of the array and count occurrences
    printf("Enter the elements of the array separated by space: ");
    for (int i = 0; i < N; i++) {
        int element;
        scanf("%d", &element);
        if (element < 0 || element >= 100) {
            printf("Element out of range. Please enter elements between 0 and 99.\n");
        }
        array[element]++;
    }

    // Display occurrences of each element
    printf("Number of occurrences of each element:\n");
    for (int i = 0; i < 100; i++) {
        if (array[i] > 0) {
            printf("%d: %d\n", i, array[i]);
        }
    }

}