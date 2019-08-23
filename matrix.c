#include <stdio.h>

// int print_matrix(int matrix);

int main() {
  int l = 3, c = 3;
  int sub_l = l - 1, sub_c = c - 1;
  int r = 0, s = 0;
  int matrix[l][c];
  int sub_matrix[sub_l][sub_c];
  int x, y;

  int i, j;
  int g, h;

  for (i = 0; i < l; i++) {
    for (j = 0; j < c; j++) {
      printf("Enter value for matrix[%d][%d]", i, j);
      scanf("%d", &matrix[i][j]);
    }
  }
  
  for (i = 0; i < l; i++) {
    for (j = 0; j < c; j++) {
      printf("[%d]", matrix[i][j]);
    }
    printf("\n");
  }

  for (x = 0; x < l; x++) {
    for (y = 0; y < c; y++) {
      for (i = 0; i < l; i++) {
        for (j = 0; j < c; j++) {
          if (i != x && j != y) {
            if (s <= sub_c) {
              sub_matrix[r][s] = matrix[i][j];
              printf("[%d]", sub_matrix[r][s]);
              s++;
            }
          }
        }
        if (i != x && j != y) {
          r++;
          s = 0;
          printf("\n");
        }
      }
    }
  }
  return 0;
}

// int print_matrix(matrix) {
//   int i = 0, j = 0;

//   int line_n = sizeof(matrix) / sizeof(int), column_n;

//   for (i = 0; i < line_n; i++) {
//     column_n = sizeof(matrix[i]) / sizeof(int);
//     for (j = 0; j < column_n; j++) {
//       printf("[%d]", matrix[i][j]);
//     }
//     printf("\n");
//   }

//   return 0;
// }