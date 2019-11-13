#include <stdio.h>

int A[10][10];
int B[10][10];
int C[10][10];
int m;

int main() {
  scanf("%d",&m);

  //scanning in array A
  for (int k = 0; k < m; k++){
    for (int i = 0; i < m; i++){
      scanf("%d",&A[k][i]);
    }
  }

  //scanning in array B
  for (int k =0; k< m; k++){
    for (int i = 0; i < m; i++){
      scanf("%d", &B[k][i]);

    }
  }

  //rows and columns of array C
  for (int p = 0; p<m; p++){ //A[p][..]
    for (int q = 0; q < m; q++){  //B[..][q]
      int temp = 0;
      //rows (A) and columns (B)
      for (int i = 0; i<m; i++){
         temp += (A[p][i] * B[i][q]);
      }
      C[p][q] = temp;
    }
  }

  for (int j = 0; j <m; j++){
    for (int k = 0; k <m ; k++){
      printf("%6d",C[j][k]);
    }
    printf("\n");
  }

}
