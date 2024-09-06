#include <stdio.h>

int main(){
    int n, bit;
    scanf("%d", &n);
    printf("So nhi phan tuong ung la: ");
    while(n != 0){
        bit = n % 2;        
        printf("%d", bit);
        n /= 2;
    }
    printf("\n");
    return 0;
}
