#include <stdio.h>
#include <stdlib.h>
void duplicate(int *arr, int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                printf("%d ", arr[i]);
                break;
            }
        }
    }
}
void inputElements(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d_Element:", i + 1);
        scanf("%d", &arr[i]);
    }
}
int main()
{
    int *arr, i, size, key;
    printf("Enter the size of the Array:");
    scanf("%d", &size);
    arr = (int *)malloc(sizeof(int) * size);
    printf("Input Elements in the Array:\n");
    inputElements(arr, size);
    printf("The Duplicate Elements are:");
    duplicate(arr, size);
    return 0;
}