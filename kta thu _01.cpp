#include<stdio.h>
int main() {
    int array[100], n = 0, choice;
    int MAX ,ispirme; 

    do {
        // Hi?n th? menu
        printf("\n--- MENU ---\n");
        printf("1. Nhap so phan tu va gia tri cac phan tu\n");
        printf("2. In ra gia tri cac phan tu dang quan ly\n");
        printf("3. In ra gia tri lon nhat cua mang\n");
        printf("4. In ra cac phan tu la so nguyen to trong mang\n");
        printf("5. Them mot phan tu vao trong mang\n");
        printf("6. Xoa mot phan tu trong mang\n");
        printf("7. Sap xep mang theo thu tu tang dan\n");
        printf("8. Tim kiem phan tu\n");
        printf("9. Thoat\n");
        printf("LUU Y : BAT DAU CHON TU 1 KHONG THI BAN Se BI LOI VA CHON LAI\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: { // nhap mang 
                printf("Nhap so phan tu cua mang: ");
                scanf("%d", &n);
                for (int i = 0; i < n; i++) {
                    printf("Nhap phan tu thu %d: ", i + 1);
                    scanf("%d", &array[i]);
                }
                break;
            }
            case 2: { // in mang 
                printf("Cac phan tu trong mang: ");
                for (int i = 0; i < n; i++) {
                    printf("%d ", array[i]);
                }
                printf("\n");
                break;
            }
            case 3: { // tim gia tri lon nhat 
                if (n > 0) {
                    int max = array[0];
                    for (int i = 1; i < n; i++) {
                        if (array[i] > max) {
                            max = array[i];
                        }
                    }
                    printf("Gia tri lon nhat trong mang la: %d\n", max);
                } else {
                    printf("Mang rong!\n");
                }
                break;
            }
            case 4: { // so nguyen 
                printf("Cac so nguyen to trong mang: ");
                for (int i = 0; i < n; i++) {
                    if ((array[i])) {
                        printf("%d ", array[i]);
                    }
                }
                printf("\n");
                break;
            }
            case 5: { // them phan tu mong muon 
                if (n < MAX) {
                    int value;
                    printf("Nhap gia tri can them: ");
                    scanf("%d", &value);
                    array[n++] = value;
                    printf("Da them %d vao mang.\n", value);
                } else {
                    printf("Mang da day!\n");
                }
                break;
            }
            case 6: { // Xóa phan tu ban thich 
                int index;
                printf("Nhap vi tri can xoa (0 - %d): ", n - 1);
                scanf("%d", &index);
                if (index >= 0 && index < n) {
                    for (int i = index; i < n - 1; i++) {
                        array[i] = array[i + 1];
                    }
                    n--;
                    printf("Da xoa phan tu tai vi tri %d.\n", index);
                } else {
                    printf("Vi tri khong hop le!\n");
                }
                break;
            }
            case 7: { // sap xep phan tu tang dan theo 1 trong 3 cach da hoc 
                for (int i = 0; i < n - 1; i++) {
                    for (int j = i + 1; j < n; j++) {
                        if (array[i] > array[j]) {
                            int temp = array[i];
                            array[i] = array[j];
                            array[j] = temp;
                        }
                    }
                }
                printf("Mang da duoc sap xep tang dan.\n");
                break;
            }
            case 8: { // tim kiem phan tu 
                int value, found = 0;
                printf("Nhap gia tri can tim: ");
                scanf("%d", &value);
                printf("Phan tu %d xuat hien tai vi tri: ", value);
                for (int i = 0; i < n; i++) {
                    if (array[i] == value) {
                        printf("%d ", i);
                        found = 1;
                    }
                }
                if (!found) {
                    printf("Khong tim thay!");
                }
                printf("\n");
                break;
            }
            case 9: { // Thoát
                printf("Thoat chuong trinh.\n");
                break;
            }
            default:
                printf("Lua chon khong hop le!\n");
        }
    } while (choice != 9);

    return 0;
} 
