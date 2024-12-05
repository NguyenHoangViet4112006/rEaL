#include <stdio.h>

int main() {
    int choice, size, value;
    int array[100][100];
    int i, j, temp;

    while (1) {
        printf("\nMENU\n");
        printf("1. Nhap kich co va gia tri cac phan tu cua mang\n");
        printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
        printf("3. In ra cac phan tu nam tren duong bien va tinh tich\n");
        printf("4. In ra cac phan tu nam tren duong cheo chinh\n");
        printf("5. In ra cac phan tu nam tren duong cheo phu\n");
        printf("6. Sap xep duong cheo chinh theo thu tu tang dan\n");
        printf("7. Tim kiem mot phan tu va in ra vi tri cua phan tu do trong mang\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Nhap kich co cua mang: ");
            scanf("%d", &size);
            for (i = 0; i < size; i++) {
                for (j = 0; j < size; j++) {
                    printf("Nhap gia tri phan tu [%d][%d]: ", i, j);
                    scanf("%d", &array[i][j]);
                }
            }
        } else if (choice == 2) {
            printf("Gia tri cac phan tu cua mang theo ma tran:\n");
            for (i = 0; i < size; i++) {
                for (j = 0; j < size; j++) {
                    printf("%d ", array[i][j]);
                }
                printf("\n");
            }
        } else if (choice == 3) {
            int product = 1;
            printf("Cac phan tu nam tren duong bien: ");
            for (i = 0; i < size; i++) {
                for (j = 0; j < size; j++) {
                    if (i == 0 || i == size - 1 || j == 0 || j == size - 1) {
                        printf("%d ", array[i][j]);
                        product *= array[i][j];
                    }
                }
            }
            printf("\nTich cac phan tu nam tren duong bien: %d\n", product);
        } else if (choice == 4) {
            printf("Cac phan tu nam tren duong cheo chinh: ");
            for (i = 0; i < size; i++) {
                printf("%d ", array[i][i]);
            }
            printf("\n");
        } else if (choice == 5) {
            printf("Cac phan tu nam tren duong cheo phu: ");
            for (i = 0; i < size; i++) {
                printf("%d ", array[i][size - i - 1]);
            }
            printf("\n");
        } else if (choice == 6) {
            for (i = 0; i < size - 1; i++) {
                for (j = i + 1; j < size; j++) {
                    if (array[i][i] > array[j][j]) {
                        temp = array[i][i];
                        array[i][i] = array[j][j];
                        array[j][j] = temp;
                    }
                }
            }
            printf("Duong cheo chinh sau khi sap xep: ");
            for (i = 0; i < size; i++) {
                printf("%d ", array[i][i]);
            }
            printf("\n");
        } else if (choice == 7) {
            printf("Nhap gia tri phan tu can tim: ");
            scanf("%d", &value);
            printf("Vi tri cua phan tu %d trong mang: ", value);
            for (i = 0; i < size; i++) {
                for (j = 0; j < size; j++) {
                    if (array[i][j] == value) {
                        printf("[%d][%d] ", i, j);
                    }
                }
            }
            printf("\n");
        } else if (choice == 8) {
            printf("Thoat chuong trinh.\n");
            break;
        } else {
            printf("Lua chon khong hop le!\n");
        }
    }

    return 0;
}

