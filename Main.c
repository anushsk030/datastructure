
#include<stdio.h>

void sort(int limit, int arr[]);

int main() {
    int limit, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &limit);
    int arr[10];
    printf("Enter the elements:\n");
    for (i = 0; i < limit; i++) {
        scanf("%d", &arr[i]);
    }
    
    // For Selection Sort Call Function
    sort(limit, arr);

    printf("Sorted array is: ");
    for (i = 0; i < limit; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

void sort(int limit, int arr[]) {
    int i, j, temp, min_index;
    for (i = 0; i < limit - 1; i++) {
        min_index = i;
        for (j = i + 1; j < limit; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}