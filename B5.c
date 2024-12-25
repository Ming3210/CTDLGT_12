#include <stdio.h>

// Ham sap xep noi bot
void bubbleSort(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n - 1; i++) {
        int swapped = 0; 
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1; 
            }
        }

        count++;

        if (swapped == 0) {
            break;
        }
    }
    printf("Sap xep hoan thanh sau %d lan lap.\n", count);
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;

    printf("Nhap so luong phan tu n: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Mang truoc khi sap xep: ");
    printArray(arr, n);

    bubbleSort(arr, n);

    printf("Mang sau khi sap xep: ");
    printArray(arr, n);

    return 0;
}
