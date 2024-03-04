#include <stdio.h>

#define MAX_SIZE 100 

int main() {
    int size, smallestPositive,i;
    
 
    printf("Number of elements in the array: ");
    scanf("%d", &size);
    
    if (size <= 0 || size > MAX_SIZE) {
        printf("Invalid size.", MAX_SIZE);
        return 1; 
    }
    
    int arr[MAX_SIZE];
    
  
    printf("Elements of the array:\n");
    for ( i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    smallestPositive = -1; 
    
   
    for ( i = 0; i < size; i++) {
        if (arr[i] > 0) {
            if (smallestPositive == -1 || arr[i] < smallestPositive) {
                smallestPositive = arr[i];
            }
        }
    }
    
    
    if (smallestPositive == -1) {
        printf("No positive number have been found.\n");
    } else {
        printf("The smallest positive number: %d\n", smallestPositive);
    }
    
    return 0;
}

