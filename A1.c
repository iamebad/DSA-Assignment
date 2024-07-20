// C program to implement delete operation in a
// unsorted array
#include <stdio.h>
#include <stdlib.h>

// To search a key to be deleted
// Function to implement search operation 
int findElement(int arr[], int n, int key)
{
for (int i = 0; i < n; i++)
        if (arr[i] == key)
            return i;
    return -1;
}
// Function to delete an element
int deleteElement(int arr[], int size, int key)
{
    // Find position of element to be deleted
    int pos = findElement(arr, size, key);
    if (pos == -1)
    {
        printf("\n%d is not present in the array.",key);
        return size;
    }
    // Deleting element
    for (int i = pos; i < size-1 ; i++)
        arr[i] = arr[i + 1];
    return size - 1;
}

// Insert element in the Array.
void inputElements(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d_Element:", i + 1);
        scanf("%d", &arr[i]);
    }
}
// display fucntion to show the Array
void displayArray(int *arr, int new_size)
{
    for (int i = 0; i < new_size; i++)
        printf("%d ", arr[i]);
}
int main()
{
    int *arr,size, key;
    printf("Enter the size of the Array:");
    scanf("%d", &size);
    arr = (int *)malloc(sizeof(int) * size);
    printf("Input Elements in the Array:\n");
    inputElements(arr, size);
    printf("Enter the Element to be deleted:");
    scanf("%d", &key);
    printf("Array before deletion.\n");
    displayArray(arr, size);
    int new_size = deleteElement(arr, size, key);
    printf("\nArray after deletion.\n");
    displayArray(arr, new_size);
    return 0;
}
