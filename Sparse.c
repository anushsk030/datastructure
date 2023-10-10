#include <stdio.h>

void sparse(int row, int col, int arr[50][50]);

int main() {
    int i, j, row, col, arr[50][50];
    printf("Enter the number of rows and columns: ");
    scanf("%d%d", &row, &col);
    printf("Enter the elements:\n");
    
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    
    sparse(row, col, arr);
    
    return 0;
}

void sparse(int row, int col, int arr[50][50]) {
    struct sparse {
        int row, col, value;
    } b[100]; // Use a larger size for 'b' to accommodate more non-zero elements
    
    int i, j, k = 1, count = 0;
    
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            if (arr[i][j] != 0) {
                b[k].row = i;
                b[k].col = j;
                b[k].value = arr[i][j];
                k++;
                count++;
            }
        }
    }
    
    // Store the dimensions and count in the first element
    b[0].row = row;
    b[0].col = col;
    b[0].value = count;
    
    // Print the sparse matrix in tuple form
    printf("Sparse Matrix in Tuple Form:\n");
    for (i = 0; i <= count; i++) {
        printf("(%d, %d, %d)\n", b[i].row, b[i].col, b[i].value);
    }
}