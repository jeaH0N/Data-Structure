#include <stdio.h>
//3���� �迭 
int main(void) {
   int score[2][3][3];
   int total[2][3] = {};
   int Ave[2][3] = {};
   int i;
   int j;
   int z;
   for (i = 0; i < 2; i++)
   {
      for (j = 0; j < 3; j++)
      {
         printf("%d�� %d�л��� ����, ����, ���� :\n", i + 1, j + 1);
         for (z = 0; z < 3; z++) {
         scanf("%d", &score[i][j][z]);
         }
      }
   }


   for (i = 0; i < 2; i++) {
      for (j = 0; j < 3; j++)
      {
         for (z = 0; z < 3; z++) {
            total[i][j] = score[i][j][z] + total[i][j]; 
            }
    Ave[i][j] = total[i][j] / 3;
   printf("%d�� %d�л��� ���� ���� ���� ����%d,���%d\n", i + 1, j + 1, total[i][j], Ave[i][j]);
      }
   }
   
   
   return 0;
}

/*int main(void) {
   int score[2][3][3];
   int total[2][3] = { 0, };
   int Ave[2][3] = { 0, };
   int i;
   int j;
   int z;

   for (i = 0; i < 2; i++)
   {
      for (j = 0; j < 3; j++)
      {
         printf("%d�� %d�л��� ����, ����, ���� :\n", i + 1, j + 1);
         for (z = 0; z < 3; z++) {
         scanf("%d", &score[i][j][z]);
         }
      }
   }

    printf("========================================\n");
   for (i = 0; i < 2; i++) 
   {
      for (j = 0; j < 3; j++)
      {
         for (z = 0; z < 3; z++) 
         {
            total[i][j] = score[i][j][z] + total[i][j];
            Ave[i][j] = total[i][j] / 3; 
            }
           printf("%d�� %d�л��� ���� ���� ���� ����%d,���%d\n", i + 1, j + 1, total[i][j], Ave[i][j]);
      }
      printf("\n");
   }
    printf("========================================\n");

   return 0;
}*/

