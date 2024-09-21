#include <stdio.h>
#define MAX_SIZE 100

int main() {
    int array[MAX_SIZE], size, element, index;

    // Get the size of the array
    printf("Enter the size of the array (up to %d): ", MAX_SIZE);
    scanf("%d", &size);

    // Check for valid size
    if(size <= 0 || size > MAX_SIZE) {
        printf("Invalid array size.\n");
        return 0;
    }

    // Get the array elements
    printf("Enter the elements of the array:\n");
    for(int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    // Get the element to insert
    printf("Enter the element to insert: ");
    scanf("%d", &element);

    // Get the index to insert at
    printf("Enter the index at which to insert the element: ");
    scanf("%d", &index);

    // Check for valid index
    if(index < 0 || index > size) {
        printf("Invalid index.\n");
        return 0;
    }

    // Shift elements to the right from index to make space for the new element
    for(int i = size - 1; i >= index; i--) {
        array[i + 1] = array[i];
    }

    // Insert the new element at the specified index
    array[index] = element;
    size++;

    // Print the array after insertion
    printf("Array after insertion: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
