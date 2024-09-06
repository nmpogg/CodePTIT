#include <stdio.h>

int isPrime(int number){
    if(number < 2)
        return 0;
    for(int i = 2; i * i <= number; i++){
        if(number % i == 0)
            return 0;
    }
    return 1;
}

int main(){
    int n;
    scanf("%d", &n);

    int matrix[n][n];

    for(int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    int maxPrimesRow = -1;
    int maxPrimesCount = 0;

    for(int i = 0; i < n; i++) {
        int primesCount = 0;
        for(int j = 0; j < n; j++) {
            if(isPrime(matrix[i][j]))
                primesCount++;
        }
        if(primesCount > maxPrimesCount) {
            maxPrimesCount = primesCount;
            maxPrimesRow = i;
        }
    }

    if(maxPrimesRow == -1) {
    } else{
        printf("%d\n", maxPrimesRow + 1);
        for(int j = 0; j < n; j++) {
            if(isPrime(matrix[maxPrimesRow][j]))
                printf("%d ", matrix[maxPrimesRow][j]);
        }
        printf("\n");
    }

    return 0;
}

