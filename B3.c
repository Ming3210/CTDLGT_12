#include <stdio.h>

void selectionSort(int arr[], int n) {
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
        }
    }
}

int binarySearch(int arr[], int n, int x) {
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == x) {
            return mid;
        }

        if (arr[mid] > x) {
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }

    return -1;
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

    for (int i = 0; i < n; i++) {
        printf("Phan tu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    selectionSort(arr, n);

    printf("After: ");
    printArray(arr, n);
    int x;
    printf("Nhap phan tu can tim: ");
    scanf("%d", &x);
    int result = binarySearch(arr, n, x);

    if (result != -1) {
        printf("Phan tu %d duoc tim thay tai vi tri %d .\n", x, result);
    } else {
        printf("Khong tim thay phan tu %d trong mang.\n", x);
    }

    return 0;
}
