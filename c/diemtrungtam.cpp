#include <stdio.h>
#include <stdlib.h>

void diem_trung_tam(int n){
    int freq[100005] = {};
    int a, b;
    for(int i = 1; i < n; ++i){
        scanf("%d%d", &a, &b);
        freq[a]++;
        freq[b]++;
    }
    for(int i = 1; i < n; i++){
        if (freq[i] == n-1) {
            printf("Yes");
            return;
        }
    }   
    printf("No");
}

int main() {
    int n;
    scanf("%d", &n);    
    diem_trung_tam(n);    
    return 0;
}

