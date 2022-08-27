
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
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
    int **temp = (int **)malloc(sizeof(int *) * row);
    for(int i= 0; i < row; ++i)
        temp[i] = (int *)malloc(sizeof(int) * column);

    int min = row * column;
    for(int i = 0; i < row; ++i)
    {
        for(int j = 0; j < column; ++j)
            temp[i][j] = arr[i][j];
    }

    for(int i = n[0] - 1; i < n[2] - 1; ++i)
    {
        temp[i][n[1] - 1] = arr[i + 1][n[1] - 1];
        if(temp[i][n[1] - 1] < min)
            min = temp[i][n[1] - 1];
    }
    for(int i = n[0]; i < n[2]; ++i)
    {
        temp[i][n[3] - 1] = arr[i - 1][n[3] - 1];
        if(temp[i][n[3] - 1] < min)
            min = temp[i][n[3] - 1];
    }    
    for(int j = n[1]; j < n[3]; ++j)
    {
        temp[n[0] - 1][j] = arr[n[0] - 1][j - 1];
        if(temp[n[0] - 1][j] < min)
            min = temp[n[0] - 1][j];
    }   
    for(int j = n[1] - 1; j < n[3] - 1; ++j)
    {
        temp[n[2] - 1][j] = arr[n[2] - 1][j + 1];
        if(temp[n[2] - 1][j] < min)
            min = temp[n[2] - 1][j];
    }    

    for(int i = n[0] - 1; i < n[2]; ++i)
    {
        for(int j = n[1] - 1; j < n[3]; ++j)
            arr[i][j] = temp[i][j];
    }
    free(temp);
    return min;
}