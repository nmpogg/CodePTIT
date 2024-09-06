#include <stdio.h>

int main(){
    int t, n;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        int a[100]; // s? d?ng m?ng tinh v?i kích thu?c t?i da là 100
        for(int i = 0; i < n; i++){
            scanf("%d", &a[i]);
        }
        for(int i = 0; i < n; i++){
            if(a[i] % 2 == 0){
                printf("%d ", a[i]);
            }
        }
        printf("\n");
    }
    return 0;
}

