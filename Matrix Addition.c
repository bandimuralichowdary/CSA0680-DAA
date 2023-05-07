#include <stdio.h>

int main() {
    int rows, cols;
    int count=0;
    printf("Enter the number of rows: ");
    count++;
    scanf("%d", &rows);
    count++;
    printf("Enter the number of columns: ");
    count++;
    scanf("%d", &cols);
    count++;

    int matrix1[rows][cols], matrix2[rows][cols], result[rows][cols];

    printf("\nEnter the elements of the first matrix:\n");
    count++;
    count++;
    for(int i = 0; i < rows; i++) {
    	count++;
    	count++;
    	count++;
        for(int j = 0; j < cols; j++) {
        	count++;
        	count++;
            printf("Enter element [%d][%d]: ", i+1, j+1);
            count++;
            scanf("%d", &matrix1[i][j]);
            count++;
        }
        count++;
    }
    count++;

    printf("\nEnter the elements of the second matrix:\n");
    count++;
    count++;
    for(int i = 0; i < rows; i++) {
    	count++;
    	count++;
    	count++;
        for(int j = 0; j < cols; j++) {
        	count++;
        	count++;
            printf("Enter element [%d][%d]: ", i+1, j+1);
            count++;
            scanf("%d", &matrix2[i][j]);
            count++;
        }
        count++;
    }
    count++;
    
count++;
    for(int i = 0; i < rows; i++) {
    	count++;
    	count++;
    	count++;
        for(int j = 0; j < cols; j++) {
        	count++;
        	count++;
            result[i][j] = matrix1[i][j] + matrix2[i][j];
            count++;
        }
        count++;
    }
    count++;

    printf("\nThe sum of the two matrices is:\n");
    count++;
    count++;
    for(int i = 0; i < rows; i++) {
    	count++;
    	count++;
    	count++;
        for(int j = 0; j < cols; j++) {
        	count++;
        	count++;
            printf("%d\t", result[i][j]);
            count++;
        }
        count++;
        printf("\n");
        count++;
    }
    count++;
    
    printf("Time complexity is %d\n",count);
    return 0;
}
