#include <stdio.h>

// This function prints all elements of the array.
// 'void' is used because the function only prints the array
// and does not need to return any value.

void PrintArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void reverse(int arr[], int n)
{
    // For i from 0 to n/2:
    // Swap arr[i] with arr[n-i-1].
    int temp;
    for (int i = 0; i < n / 2; i++)
    {
        // We only need to go through half of the array
        // because each iteration swaps TWO elements:
        // one element from the beginning and one from the end.
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    PrintArray(arr, 6);

    // Pass the array and its size to the reverse function.
    // The function will modify the original array.

    reverse(arr, 6);
    PrintArray(arr, 6);
    return 0;
}