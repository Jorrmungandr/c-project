#include <stdio.h>
#include <math.h>

// int print_matrix(int matrix);

int main() {
  int l = 3, c = 3;
  int sub_l = l - 1, sub_c = c - 1;
  int r = 0, s = 0;
  int matrix[l][c];
  int sub_matrix[sub_l][sub_c];
  int x, y;

  double constant = 1, sum;
  double sub_det, cofactor;

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

  for (g = 0; g < l; g++) {
    for (h = 0; h < c; h++) {
      printf("\nmatrix[%d][%d]\n", g, h);
      for (i = 0; i < l; i++) {
        for (j = 0; j < c; j++) {
          if (i != g && j != h) {
            if (s <= sub_c) {
              sub_matrix[r][s] = matrix[i][j];
              s++;
            }
          }
        }
        if (i != g) {
          r++;
          s = 0;
        }
      }

      for (i = 0; i < sub_l; i++) {
        for (j = 0; j < sub_c; j++) {
          printf("[%d]", sub_matrix[i][j]);
        }
        printf("\n");
      }

      sum = g + h;

      sub_det = (sub_matrix[0][0] * sub_matrix[1][1]) - (sub_matrix[0][1] * sub_matrix[1][0]);
      cofactor = pow(-1, g + h) * sub_det;

      printf("\n%d\n%d\n", sub_det, pow(-1.00, 0.00));

      r = 0;
      s = 0;
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