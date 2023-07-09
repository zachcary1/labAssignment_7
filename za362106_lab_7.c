#include <stdio.h>

int main() {
    //creates array of given values
    int arr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    //creates necessary variables
    int i, j, temp;
    int count[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };

    //nested for loop to sort the array using the bubble sort method, and adding 1 every time an index is swapped
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            if (arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                count[j]++;
            }
        }
    }

    //printing number of swaps per index and the sorted array
    printf("Number of swaps needed for each index:\n");
    for (i = 0; i < 9; i++)
    {
        printf("Index %d: %d swaps\n", i, count[i]);
    }
    printf("Sorted Array: \n");
    for(i = 0; i < 9; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}