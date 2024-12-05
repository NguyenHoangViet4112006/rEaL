#include <stdio.h>

int main() {
    int choice, n, value, position;
    int array[100];
    int i, j, temp;

    while (1) {
        printf("\nMENU\n");
        printf("1. Nhap so phan tu can nhap va gia tri cac phan tu\n");
        printf("2. In ra gia tri cac phan tu dang quan ly\n");
        printf("3. In ra gia tri lon nhat cua mang\n");
        printf("4. In ra cac phan tu la so nguyen to trong mang\n");
        printf("5. Them mot phan tu vao trong mang\n");
        printf("6. Xoa mot phan tu trong mang\n");
        printf("7. Sap xep mang theo thu tu tang dan\n");
        printf("8. Tim kiem phan tu va in ra vi tri index cua phan tu do\n");
        printf("9. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Nhap so phan tu: ");
            scanf("%d", &n);
            for (i = 0; i < n; i++) {
                printf("Nhap gia tri phan tu thu %d: ", i);
                scanf("%d", &array[i]);
            }
        } else if (choice == 2) {
            printf("Cac phan tu dang quan ly: ");
            for (i = 0; i < n; i++) {
                printf("%d ", array[i]);
            }
            printf("\n");
        } else if (choice == 3) {
            int max = array[0];
            for (i = 1; i < n; i++) {
                if (array[i] > max) {
                    max = array[i];
                }
            }
            printf("Gia tri lon nhat cua mang: %d\n", max);
        } else if (choice == 4) {
            printf("Cac phan tu la so nguyen to: ");
            for (i = 0; i < n; i++) {
                int isPrime = 1;
                if (array[i] <= 1) {
                    isPrime = 0;
                } else {
                    for (j = 2; j <= array[i] / 2; j++) {
                        if (array[i] % j == 0) {
                            isPrime = 0;
                            break;
                        }
                    }
                }
                if (isPrime) {
                    printf("%d ", array[i]);
                }
            }
            printf("\n");
        } else if (choice == 5) {
            printf("Nhap gia tri phan tu can them: ");
            scanf("%d", &value);
            printf("Nhap vi tri can them (0-%d): ", n);
            scanf("%d", &position);
            if (position >= 0 && position <= n) {
                for (i = n; i > position; i--) {
                    array[i] = array[i - 1];
                }
                array[position] = value;
                n++;
            } else {
                printf("Vi tri khong hop le!\n");
            }
        } else if (choice == 6) {
            printf("Nhap vi tri phan tu can xoa (0-%d): ", n - 1);
            scanf("%d", &position);
            if (position >= 0 && position < n) {
                for (i = position; i < n - 1; i++) {
                    array[i] = array[i + 1];
                }
                n--;
            } else {
                printf("Vi tri khong hop le!\n");
            }
        } else if (choice == 7) {
            for (i = 0; i < n - 1; i++) {
                for (j = i + 1; j < n; j++) {
                    if (array[i] > array[j]) {
                        temp = array[i];
                        array[i] = array[j];
                        array[j] = temp;
                    }
                }
            }
            printf("Mang sau khi sap xep: ");
            for (i = 0; i < n; i++) {
                printf("%d ", array[i]);
            }
            printf("\n");
        } else if (choice == 8) {
            printf("Nhap gia tri phan tu can tim: ");
            scanf("%d", &value);
            printf("Vi tri index cua phan tu %d trong mang: ", value);
            for (i = 0; i < n; i++) {
                if (array[i] == value) {
                    printf("%d ", i);
                }
            }
            printf("\n");
        } else if (choice == 9) {
            printf("Thoat chuong trinh.\n");
            break;
        } else {
            printf("Lua chon khong hop le!\n");
        }
    }

    return 0;
}

