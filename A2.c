#include <stdio.h>
#include <stdlib.h>
void unique(int *arr, int n)
{

    int i, j;
     for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
                break;
        }
        if (j == i)
        {
            printf("%d ", arr[i]);
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
    int *arr,size;
    printf("Enter the size of the Array:");
    scanf("%d", &size);
    arr = (int *)malloc(sizeof(int) * size);
    printf("Input Elements in the Array:\n");
    inputElements(arr, size);
    printf("The Unique Elements are:");
    unique(arr, size);
    return 0;
}
