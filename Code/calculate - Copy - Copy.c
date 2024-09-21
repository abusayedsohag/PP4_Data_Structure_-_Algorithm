#include <stdio.h>
#define MAX_SIZE 100

int main() {
    int array[MAX_SIZE], size, index;

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

    // Get the index to delete at
    printf("Enter the index of the element to delete: ");
    scanf("%d", &index);

    // Check for valid index
    if(index < 0 || index > size) {
        printf("Invalid index.\n");
        return 0;
    }

    // Shift elements to the left from index + 1 to overwrite the element to be deleted
    for(int i = index + 1; i < size; i++) {
        array[i - 1] = array[i];
    }

    // Decrease the size of the array
    size--;

    // Print the array after delete
    printf("Array after deletion: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
