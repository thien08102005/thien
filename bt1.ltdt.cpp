#include <stdio.h>

#define MAX_SIZE 100

// Ham nhap mang
void nhapMang(int arr[], int *n) {
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", n);
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < *n; i++) {
        printf("Phan tu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

// 1. In ra phan tu thu i trong mang
void inPhanTuThuI(int arr[], int n, int x) {
    if (x >= 1 && x <= n) {
        printf("Gia tri phan tu thu %d la: %d\n", x, arr[x - 1]);
    } else {
        printf("Chi so khong hop le.\n");
    }
}

// 2. Tim phan tu lon nhat
void timMax(int arr[], int n) {
    int maxVal = arr[0];
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
            maxIndex = i;
        }
    }
    printf("Vi tri max: %d, gia tri max: %d\n", maxIndex + 1, maxVal);
}

// 3. Tim phan tu be nhat
void timMin(int arr[], int n) {
    int minVal = arr[0];
    int minIndex = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];
            minIndex = i;
        }
    }
    printf("Vi tri min: %d, gia tri min: %d\n", minIndex + 1, minVal);
}

// 4. In ra cac so le trong mang
void inSoLe(int arr[], int n) {
    printf("Cac so le trong mang: ");
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

// 5. Tinh tong gia tri cua cac phan tu trong mang
void tinhTong(int arr[], int n) {
    int tong = 0;
    for (int i = 0; i < n; i++) {
        tong += arr[i];
    }
    printf("Tong gia tri cua cac phan tu trong mang: %d\n", tong);
}

// Chuong trinh chinh
int main() {
    int arr[MAX_SIZE];
    int n;
    
    nhapMang(arr, &n);
    
    int x;
    printf("Nhap x (chi so cua phan tu ban muon in): ");
    scanf("%d", &x);
    
    inPhanTuThuI(arr, n, x);
    timMax(arr, n);
    timMin(arr, n);
    inSoLe(arr, n);
    tinhTong(arr, n);

    return 0;
}

