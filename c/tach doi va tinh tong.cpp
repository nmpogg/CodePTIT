#include <stdio.h>
#include <string.h>

void calculate_sum(char* num) {
    char first_half[201];
    char second_half[201];
    char result[201];
    
    while (strlen(num) > 1) {
        int half_len = strlen(num) / 2;
        strncpy(first_half, num, half_len);
        first_half[half_len] = '\0';
        strcpy(second_half, num + half_len);
        
        int carry = 0;
        int i = half_len - 1;
        int j = strlen(num) - half_len - 1;
        int k = strlen(num) - 1;
        
        while (i >= 0) {
            int sum = (first_half[i] - '0') + (second_half[j] - '0') + carry;
            result[k] = (sum % 10) + '0';
            carry = sum / 10;
            i--;
            j--;
            k--;
        }
        
        while (j >= 0) {
            int sum = (second_half[j] - '0') + carry;
            result[k] = (sum % 10) + '0';
            carry = sum / 10;
            j--;
            k--;
        }
        
        if (carry > 0) {
            result[k] = carry + '0';
            k--;
        }
        
        result[strlen(num)] = '\0';
        
        printf("%s\n", result + k + 1);
        
        strcpy(num, result + k + 1);
    }
}

int main() {
    char num[201];
    scanf("%s", num);
    
    calculate_sum(num);
    
    return 0;
}

