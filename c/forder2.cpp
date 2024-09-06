#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int isPrime(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

void printMatrix(int** matrix, int m, int n) {
    printf("Matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void findMinMax(int** matrix, int m, int n, int* min, int* max) {
    *min = matrix[0][0];
    *max = matrix[0][0];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] < *min) {
                *min = matrix[i][j];
            }
            if (matrix[i][j] > *max) {
                *max = matrix[i][j];
            }
        }
    }
}

void sortZigzag(int** matrix, int m, int n) {
    int i, j, k = 0;
    int* temp = (int*)malloc(m * n * sizeof(int));
    for (i = 0; i < m + n - 1; i++) {
        if (i % 2 == 0) {
            for (j = 0; j < n; j++) {
                if (i - j >= 0 && i - j < m) {
                    temp[k++] = matrix[i - j][j];
                }
            }
        } else {
            for (j = n - 1; j >= 0; j--) {
                if (i - j >= 0 && i - j < m) {
                    temp[k++] = matrix[i - j][j];
                }
            }
        }
    }
    k = 0;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            matrix[i][j] = temp[k++];
        }
    }
    free(temp);
}

void addRow(int** matrix, int m, int n, int* v) {
    matrix[m] = v;
}

void insertRow(int** matrix, int m, int n, int* v, int k) {
    for (int i = m; i > k; i--) {
        matrix[i] = matrix[i - 1];
    }
    matrix[k] = v;
}

void deleteRow(int** matrix, int m, int n, int k) {
    for (int i = k; i < m - 1; i++) {
        matrix[i] = matrix[i + 1];
    }
    matrix[m - 1] = NULL;
}

void findMaxOnRowAndMinOnColumn(int** matrix, int m, int n, int v, int* row, int* col) {
    *row = -1;
    *col = -1;
    int maxOnRow = matrix[v][0];
    int minOnCol = matrix[0][v];
    for (int j = 1; j < n; j++) {
        if (matrix[v][j] > maxOnRow) {
            maxOnRow = matrix[v][j];
        }
    }
    for (int i = 0; i < m; i++) {
        if (matrix[i][v] < minOnCol) {
            minOnCol = matrix[i][v];
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == maxOnRow && matrix[i][j] == minOnCol) {
                *row = i;
                *col = j;
                return;
            }
        }
    }
}

void sumMatrix(int** matrix1, int** matrix2, int** result, int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

void multiplyMatrix(int** matrix1, int** matrix2, int** result, int m1, int n1, int m2, int n2) {
    if (n1 != m2) {
        printf("Cannot multiply matrices\n");
        return;
    }
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < n1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

int countPrimes(int** matrix, int m, int n) {
    int count = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (isPrime(matrix[i][j])) {
                count++;
            }
        }
    }
    return count;
}

int countPositiveInUpperTriangle(int** matrix, int m, int n) {
    int count = 0;
    for (int i = 0; i < m; i++) {
        for (int j = i + 1; j < n; j++) {
            if (matrix[i][j] > 0) {
                count++;
            }
        }
    }
    return count;
}

float averageColumn(float** matrix, int m, int n, int col) {
    float sum = 0;
    for (int i = 0; i < m; i++) {
        sum += matrix[i][col];
    }
    return sum / m;
}

int sumBorder(int** matrix, int m, int n) {
    int sum = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == m - 1 || j == 0 || j == n - 1) {
                sum += matrix[i][j];
            }
        }
    }
    return sum;
}

int main() {
    int m, n;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &m, &n);

    // allocate memory for matrix
    int** matrix = (int**)malloc(m * sizeof(int*));
    for (int i = 0; i < m; i++) {
        matrix[i] = (int*)malloc(n * sizeof(int));
    }

    // fill matrix with random numbers between 1 and 100
    srand(time(NULL));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = rand() % 100 + 1;
        }
    }

    // print matrix
    printMatrix(matrix, m, n);
    printf("\n");

    // find min and max
    int min, max;
    findMinMax(matrix, m, n, &min, &max);
    printf("Min: %d\n", min);
    printf("Max: %d\n", max);
    printf("\n");

    // sort zigzag
    sortZigzag(matrix, m, n);
    printMatrix(matrix, m, n);
    printf("\n");

    // add a row at the end
    int* v = (int*)malloc(n * sizeof(int));
    for (int j = 0; j < n; j++) {
        v[j] = rand() % 100 + 1;
    }
    addRow(matrix, m, n, v);
    m++;
    printMatrix(matrix, m, n);
    printf("\n");

    // insert a row at k
    int* u = (int*)malloc(n * sizeof(int));
    for (int j = 0; j < n; j++) {
        u[j] = rand() % 100 + 1;
    }
    int k;
    printf("Enter the index of the row to insert: ");
    scanf("%d", &k);
    insertRow(matrix, m, n, u, k);
    m++;
    printMatrix(matrix, m, n);
    printf("\n");

    // delete a row at k
    printf("Enter the index of the row to delete: ");
    scanf("%d", &k);
    deleteRow(matrix, m, n, k);
    m--;
    printMatrix(matrix, m, n);
    printf("\n");

    // find max on row and min on column
    int row, col, vMaxOnRowAndMinOnColumn;
    printf("Enter the index of the value to search: ");
    scanf("%d", &v);
    findMaxOnRowAndMinOnColumn(matrix, m, n, v, &row, &col);
    if (row == -1 && col == -1) {
        printf("No such value found\n");
    } else {
        printf("Value: %d, Row: %d, Column: %d\n", matrix[row][col], row + 1, col + 1);
    }
    printf("\n");

    // sum and multiply matrices
    int** matrix2 = (int**)malloc(m * sizeof(int*));
    for (int i = 0; i < m; i++) {
        matrix2[i] = (int*)malloc(n * sizeof(int));
        for (int j = 0; j < n; j++) {
            matrix2[i][j] = rand() % 100 + 1;
        }
    }
    int** sum = (int**)malloc(m * sizeof(int*));
    int** product = (int**)malloc(m * sizeof(int*));
    for (int i = 0; i < m; i++) {
        sum[i] = (int*)malloc(n * sizeof(int));
        product[i] = (int*)malloc(n * sizeof(int));
    }
    sumMatrix(matrix, matrix2, sum, m, n);
    multiplyMatrix(matrix, matrix2, product, m, n, m, n);
    printf("Matrix 1:\n");
    printMatrix(matrix, m, n);
    printf("Matrix 2:\n");
    printMatrix(matrix2, m, n);
    printf("Sum:\n");
    printMatrix(sum, m, n);
    printf("Product:\n");
    printMatrix(product, m, n);
    printf("\n");

    // count primes
    int count = countPrimes(matrix, m, n);
    printf("Number of primes: %d\n", count);
    printf("\n");

    // count positive in upper triangle
    count = countPositiveInUpperTriangle(matrix, m, n);
    printf("Number of positive values in upper triangle: %d\n", count);
    printf("\n");

    // average column
    float** matrixFloat = (float**)malloc(m * sizeof(float*));
    for (int i = 0; i < m; i++) {
        matrixFloat[i] = (float*)malloc(n * sizeof(float));
        for (int j = 0; j < n; j++) {
            matrixFloat[i][j] = (float)matrix[i][j];
        }
    }
    int cola;
    printf("Enter the index of the column to find the average: ");
    scanf("%d", &col);
    float average = averageColumn(matrixFloat, m, n, cola - 1);
    printf("Average of column %d: %.2f\n", cola, average);
    printf("\n");

    // sum border
    int sumBorderValue = sumBorder(matrix, m, n);
    printf("Sum of values on the border: %d\n", sumBorderValue);

    // free memory
    for (int i = 0; i < m; i++) {
        free(matrix[i]);
        free(matrix2[i]);
        free(sum[i]);
        free(product[i]);
        free(matrixFloat[i]);
    }
    free(matrix);
    free(matrix2);
    free(sum);
    free(product);
    free(matrixFloat);

    return 0;
}

