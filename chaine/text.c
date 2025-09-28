#include <stdio.h>

#define SIZE 100  // Maximum array size

// Function prototypes

void inputArray(int arr[], int n);

void printArray(int arr[], int n);



int main() {

    int n, arr[SIZE];



    printf("Enter the number of elements (max %d): ", SIZE);

    scanf("%d", &n);



    inputArray(arr, n);

    printArray(arr, n);



    // Call your challenge function here



    return 0;

}



void inputArray(int arr[], int n) {

    for(int i = 0; i < n; i++) {

        printf("Enter element %d: ", i + 1);

        scanf("%d", &arr[i]);

    }

}



void printArray(int arr[], int n) {

    printf("Array elements: ");

    for(int i = 0; i < n; i++) {

        printf("%d ", arr[i]);

    }

    printf("\n");


}