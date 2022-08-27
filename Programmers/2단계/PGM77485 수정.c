#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int rotate_min(int **arr, int row, int column, int n[]);


int* solution(int rows, int columns, int **queries, size_t queries_row_len, size_t queries_col_len) {
    int* answer = (int*)malloc(sizeof(int) * queries_row_len);
    
    int **matrix = (int **)malloc(sizeof(int *) * rows);
    for(int i= 0; i < rows; ++i)
        matrix[i] = (int *)malloc(sizeof(int) * columns);
    
    for(int i = 0; i < rows; ++i)
    {
        for(int j = 0; j < columns; ++j)
        {
            matrix[i][j] = i * columns + j + 1;
        }
    }
    for(int i = 0; i < queries_row_len; ++i)
        answer[i] = rotate_min(matrix, rows, columns, queries[i]);
    
    free(matrix);
    return answer;
}

int rotate_min(int **arr, int row, int column, int n[])
{
    int tempnext, tempback;
    int min = row * column;

    tempback = arr[n[0] - 1][n[1] - 1];
    for(int j = n[1]; j < n[3]; ++j)
    {
        tempnext = arr[n[0] - 1][j];
        arr[n[0] - 1][j] = tempback;
        tempback = tempnext;
        if(arr[n[0] - 1][j] < min)
            min = arr[n[0] - 1][j];        
    }   
    for(int i = n[0]; i < n[2]; ++i)
    {
        tempnext = arr[i][n[3] - 1];
        arr[i][n[3] - 1] = tempback;
        tempback = tempnext;
        if(arr[i][n[3] - 1] < min)
            min = arr[i][n[3] - 1];
    }
    for(int j = n[3] - 1; j > n[1] - 1; --j)
    {
        tempnext = arr[n[2] - 1][j - 1];
        arr[n[2] - 1][j - 1] = tempback;
        tempback = tempnext;
        if(arr[n[2] - 1][j - 1] < min)
            min = arr[n[2] - 1][j - 1];
    }   
    for(int i = n[2] - 1; i > n[0] - 1; --i)
    {
        tempnext = arr[i - 1][n[1] - 1];
        arr[i - 1][n[1] - 1] = tempback;
        tempback = tempnext;
        if(arr[i - 1][n[1] - 1] < min)
            min = arr[i - 1][n[1] - 1];
    }
    
    return min;
}