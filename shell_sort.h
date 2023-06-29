#include <stdio.h>

void shellSort(char** arr, int n) {
    int gap, i, j;
    char* temp;

    for (gap = n / 2; gap > 0; gap /= 2) {
        for (i = gap; i < n; i++) {
            temp = arr[i];
            j = i;

            while (j >= gap && strlen(arr[j - gap]) > strlen(temp)) {
                arr[j] = arr[j - gap];
                j -= gap;
            }

            arr[j] = temp;
        }
    }
}