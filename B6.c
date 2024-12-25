#include <stdio.h>

void selectionSort(int arr[], int n) {
    int swapCount = 0;
    
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
            swapCount++;
            
            printf("Hoan doi: ");
            for (int k = 0; k < n; k++) {
                printf("%d ", arr[k]);
            }
            printf("\n\n");
        }
    }
    printf("Tong so lan hoan doi: %d\n", swapCount);
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;

    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nMang ban dau: ");
    printArray(arr, n);
    printf("\n");

    selectionSort(arr, n);

    printf("Mang sau khi sap xep: ");
    printArray(arr, n);

    return 0;
}