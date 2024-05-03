#include <stdio.h>
#include <stdlib.h>
void mergeArray(int *arr1, int *arr2, int *arr3, int size1, int size2)
{
    int i = 0, j = 0, k = 0;
    while (i < size1 && j < size2)
    {
        if (arr1[i] <= arr2[j])
            arr3[k++] = arr1[i++];
        else
            arr3[k++] = arr2[j++];
    }
    while (i < size1)
        arr3[k++] = arr1[i++];
    while (j < size2)
        arr3[k++] = arr2[j++];
}
void inputElements(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d_Element:", i + 1);
        scanf("%d", &arr[i]);
    }
}
void displayArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
}
int main()
{
    int *arr1, *arr2, *arr3, size1, size2;
    printf("Enter the size of the  First Array:");
    scanf("%d", &size1);
    printf("Enter the size of the  Second Array:");
    scanf("%d", &size2);
    arr1 = (int *)malloc(sizeof(int) * size1);
    arr1 = (int *)malloc(sizeof(int) * size2);
    arr3 = (int *)malloc(sizeof(int) * (size1 + size2));
    printf("Input Elements in the sorted manner in the First Array:\n");
    inputElements(arr1, size1);
    printf("Input Elements in sorted manner in the Second Array:\n");
    inputElements(arr2, size2);
    mergeArray(arr1, arr2, arr3, size1, size2);
    printf("The sorted Array after merging:");
    displayArray(arr3, size1 + size2);
    return 0;
}