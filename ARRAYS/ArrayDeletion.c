#include <stdio.h>

void display(int arr[], int n)
{
    // Array traversal
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }

    printf("\n");
}

void indDeletion(int arr[], int size, int index)
{
    // Deletion
    // if (size >= capacity)
    // {
    //     return -1;
    // }
    for (int i = index; i < size-1; i++)
    {
        arr[i] = arr[i+1];
    }
   

}

int main()
{

    int arr[100] = {7, 17, 28, 99, 100, 106, 210};
    int size = 7, index = 4;
    display(arr, size);
    indDeletion(arr, size, index);
    size -= 1;
    display(arr, size);

    return 0;
}