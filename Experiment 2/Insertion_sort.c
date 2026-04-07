#include <stdio.h>

void insertionSort(int a[], int n) {
    int i, j, key;
    for (i = 1; i < n; i++) {
        key = a[i];
        j = i - 1;

        // Shift elements of a[0..i-1] that are greater than key
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }

//write your code here...
    
    
    
    
}

int main() {
    int a[20], n, i;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    insertionSort(a, n);

    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
