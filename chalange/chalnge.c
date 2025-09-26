#include <stdio.h>
#include<stdio.h>
#define SIZE 100  

void inputArray(int arr[], int n);
void printArray(int arr[], int n);
int sumLucas(int arr[],int n);
void largest(int arr[],int n);
void divise_by_3(int arr[],int n);

int main() {
    int n, arr[SIZE];
    printf("Enter the number of elements (max %d): ", SIZE);
    scanf("%d", &n);
    inputArray(arr, n);
    printArray(arr, n);
    printf("\n sum= %d   \n",sumLucas(arr,n));
    largest(arr, n);
    divise_by_3(arr, n);
    return 0;
}

void inputArray(int arr[], int n) {
   
    if(n == 1){
        arr[0]=2;
    }
    if(n == 2){
        arr[0]=2;
        arr[1]=1;
    }
    if(n>2){
        arr[0]=2;
        arr[1]=1;
         for(int i = 2; i < n; i++) 
            arr[i]=arr[i-1]+arr[i-2];
    }
    }

void printArray(int arr[], int n) {
    printf("Array elements: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int sumLucas(int arr[],int n){
    int sum=0;
     for(int i = 0; i < n; i++) 
        sum+=arr[i];
    return sum;
}

void largest(int arr[],int n){
    int sum=0;
     for(int i = 0; i < n; i++) 
     if(arr[i]>n)
         printf("%d ", arr[i]);
    printf("\n");
}

void divise_by_3(int arr[],int n){
    int sum=0;
     for(int i = 0; i < n; i++) 
     if(arr[i]%3==0)
         printf("%d ", arr[i]);
    printf("\n");
}