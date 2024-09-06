#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_SIZE 100

void input_array(int arr[], int *n) {
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", n);
    for (int i = 0; i < *n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}

void generate_random_array(int arr[], int n) {
    srand(time(0)); 
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 101 - 50; 
    }
}

void print_array(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Hàm t?m ph?n t? l?n nh?t c?a m?ng
int find_max(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// Hàm t?m ph?n t? nh? nh?t c?a m?ng
int find_min(int arr[], int n) {
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

// Hàm t?m ph?n t? âm ð?u tiên t?n cùng b?ng 6
int find_negative_six(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0 && abs(arr[i]) % 10 == 6) {
            return arr[i];
        }
    }
    return -1;
}

// Hàm t?m v? trí ph?n t? dýõng nh? nh?t c?a m?ng
int find_min_positive_index(int arr[], int n) {
    int min_pos = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0 && (min_pos == -1 || arr[i] < arr[min_pos])) {
            min_pos = i;
        }
    }
    return min_pos;
}

// Hàm tính t?ng c?a m?ng
int sum_array(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

// Hàm tính trung b?nh c?ng c?a m?ng
float average_array(int arr[], int n) {
    return (float) sum_array(arr, n) / n;
}

// Hàm ki?m tra xem ph?n t? x có trong m?ng hay không?
int search_x(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}

// Hàm s?p x?p m?ng theo th? t? tãng d?n
void sort_array_asc(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                // Hoán ð?i giá tr? c?a 2 ph?n t?
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// Hàm s?p x?p m?ng theo th? t? gi?m d?n
void sort_array_desc(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                // Hoán ð?i giá tr? c?a 2 ph?n t?
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// Hàm ð?o ngý?c m?ng
void reverse_array(int arr[], int n) {
    for (int i = 0; i < n / 2; i++) {
        // Hoán ð?i giá tr? c?a 2 ph?n t?
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}

// Hàm thêm ph?n t? x vào v? trí k trong m?ng
void insert_element(int arr[], int *n, int x, int k) {
    // D?i các ph?n t? t? k ð?n n-1 sang ph?i ð? t?o ch? cho x
    for (int i = *n - 1; i >= k; i--) {
        arr[i+1] = arr[i];
    }
    // Thêm x vào v? trí k
    arr[k] = x;
    (*n)++;
}

// Hàm xóa ph?n t? ? v? trí k trong m?ng
void delete_element(int arr[], int *n, int k) {
    // D?i các ph?n t? t? k+1 ð?n n-1 sang trái ð? l?p ð?y v? trí c?n xóa
    for (int i = k+1; i < *n; i++) {
        arr[i-1] = arr[i];
    }
    (*n)--;
}

// Hàm ð?m s? ph?n t? dýõng và tính t?ng các ph?n t? dýõng c?a m?ng
void count_positive_and_sum(int arr[], int n, int *count, int *sum) {
    *count = 0;
    *sum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            (*count)++;
            (*sum) += arr[i];
        }
    }
}

// Hàm ki?m tra xem m?ng có ð?i x?ng hay không?
int is_symmetric(int arr[], int n) {
    for (int i = 0; i < n/2; i++) {
        if (arr[i] != arr[n-i-1]) {
            return 0; // M?ng không ð?i x?ng
        }
    }
    return 1; // M?ng ð?i x?ng
}

// Hàm ki?m tra m?ng có s?p th? t? tãng hay không?
int is_sorted_ascending(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        if (arr[i] > arr[i+1]) {
            return 0; // M?ng không s?p th? t? tãng
        }
    }
    return 1; // M?ng s?p th? t? tãng
}

int main() {
    int arr[MAX_SIZE], n, x, k, choice;
    do {
        printf("\nMENU\n");
        printf("1. Nhap mang\n");
        printf("2. Khoi tao mang ngau nhien\n");
        printf("3. Xuat mang\n");
        printf("4. Tim phan tu lon nhat, nho nhat\n");
        printf("5. Tim va in ra phan tu am dau tien tan cung bang 6\n");
        printf("6. Tim va in ra vi tri phan tu duong nho nhat\n");
        printf("7. Tinh tong cac phan tu cua mang\n");
        printf("8. Tinh trung binh cong cua mang\n");
        printf("9. Tim kiem mot phan tu x cho truoc\n");
        printf("10. Sap xep mang theo thu tu tang dan, giam dan\n");
        printf("11. Xuat day dao nguoc cua day ban dau\n");
        printf("12. Them mot phan tu x vao vi tri k trong mang\n");
        printf("13. Xoa mot phan tu tai vi tri k trong mang\n");
        printf("14. Dem so phan tu duong va tinh tong cacphan tu duong cua mang\n");
        printf("15. Kiem tra mang co doi xung hay khong?\n");
        printf("16. Kiem tra mang co sap thu tu tang hay khong?\n");
        printf("0. Thoat chuong trinh\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                input_array(arr, &n);
                break;
            case 2:
                printf("Nhap so phan tu cua mang: ");
                scanf("%d", &n);
                generate_random_array(arr, n);
                printf("Mang da khoi tao ngau nhien:\n");
                print_array(arr, n);
                break;
            case 3:
                printf("Mang hien tai:\n");
                print_array(arr, n);
                break;
            case 4:
                printf("Phan tu lon nhat trong mang la %d\n", find_max(arr, n));
                printf("Phan tu nho nhat trong mang la %d\n", find_min(arr, n));
                break;
            case 5:
                if (find_negative_six(arr, n) == -1) {
                    printf("Khong ton tai phan tu am nao tan cung bang 6 trong mang.\n");
                } else {
                    printf("Phan tu am dau tien tan cung bang 6 la %d\n", find_negative_six(arr, n));
                }
                break;
            case 6:
                if (find_min_positive_index(arr, n) == -1) {
                    printf("Khong ton tai phan tu duong nao trong mang.\n");
                } else {
                    printf("Vi tri phan tu duong nho nhat trong mang la %d\n", find_min_positive_index(arr, n));
                }
                break;
            case 7:
                printf("Tong cac phan tu cua mang la %d\n", sum_array(arr, n));
                break;
            case 8:
                printf("Trung binh cong cua cac phan tu trong mang la %.2f\n", average_array(arr, n));
                break;
            case 9:
                printf("Nhap phan tu can tim kiem: ");
                scanf("%d", &x);
                if (search_x(arr, n, x) == -1) {
                    printf("Khong ton tai phan tu %d trong mang.\n", x);
                } else {
                    printf("Phan tu %d co trong mang tai vi tri %d\n", x, search_x(arr, n, x));
                }
                break;
            case 10:
                printf("Ban muon sap xep mang theo thu tu tang dan hay giam dan?\n");
                printf("1. Sap xep theo thu tu tang dan\n");
                printf("2. Sap xep theo thu tu giam dan\n");
                printf("Nhap lua chon cua ban: ");
                scanf("%d", &choice);
                if (choice == 1) {
                    sort_array_asc(arr, n);
                    printf("Mang sau khi sap xep tang dan:\n");
                } else {
                    sort_array_desc(arr, n);
                    printf("Mang sau khi sap xep giam dan:\n");
                }
                print_array(arr, n);
                break;
            case 11:
                reverse_array(arr, n);
                printf("Day dao nguoc cua day ban dau:\n");
                print_array(arr, n);
                break;
            case 12:
                printf("Nhap phan tu can them: ");
                scanf("%d", &x);
                printf("Nhap vi tri can them vao: ");
                scanf("%d", &k);
                if (k < 0 || k > n) {
                    printf("Vi tri can them khong hop le.\n");
                } else {
                    insert_element(arr, &n, x, k);
                    printf("Mang sau khi them phan tu %d vao vi tri %d:\n", x, k);
                    print_array(arr, n);
                }
                break;
            case 13:
                printf("Nhap vi tri phan tu can xoa: ");
                scanf("%d", &k);
                if (k < 0 || k >= n) {
                    printf("Vi tri can xoa khong hop le.\n");
                } else {
                    delete_element(arr, &n, k);
                    printf("Mang sau khi xoa phan tu tai vi tri %d:\n", k);
                    print_array(arr, n);
                }
                break;
            case 14:
                int count_pos, sum_pos;
                                count_positive_and_sum(arr, n, &count_pos, &sum_pos);
                printf("So phan tu duong trong mang la %d\n", count_pos);
                printf("Tong cac phan tu duong trong mang la %d\n", sum_pos);
                break;
            case 15:
                if (is_symmetric(arr, n)) {
                    printf("Mang doi xung.\n");
                } else {
                    printf("Mang khong doi xung.\n");
                }
                break;
            case 16:
                if (is_sorted_ascending(arr, n)) {
                    printf("Mang da sap xep tang dan.\n");
                } else {
                    printf("Mang chua sap xep hoac khong sap xep tang dan.\n");
                }
                break;
            case 0:
                printf("Tam biet!\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long nhap lai.\n");
        }
    } while (choice != 0);

    return 0;
}


