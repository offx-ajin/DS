#include <stdio.h>

int main() 
{
  int r1,r2, c1,c2, t1,t2;
  int row[100], col[100], toe[100];  
  int row1[100], col1[100], toe1[100]; 

    printf("Enter number of rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter number of non-zero elements: ");
    scanf("%d", &t1);

    printf("Enter row, column and value for each non-zero element:\n");
    for (int i = 0; i<t1; i++)
    {
        scanf("%d %d %d", &row[i], &col[i], &toe[i]);
    }

    printf("\n matrix 1:\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            int val = 0;
            for (int k = 0; k < t1; k++) 
            {
                if (row[k] == i && col[k] == j)
                {
                    val = toe[k];
                    break;
                }
            }
            printf("%d ", val);
        }
        printf("\n");
    }
    
    printf("Enter number of rows and columns of 2nd matrix: ");
    scanf("%d %d", &r2, &c2);

    printf("Enter number of non-zero elements: ");
    scanf("%d", &t2);

    printf("Enter row, column and value for each non-zero element:\n");
    for (int i = 0; i<t2; i++) 
    {
        scanf("%d %d %d", &row1[i], &col1[i], &toe1[i]);
    }

    printf("\n matrix 2:\n");
    for (int i = 0; i < r2; i++) 
    {
        for (int j = 0; j < c2; j++) 
        {
            int val1 = 0;
            for (int k = 0; k < t2; k++) 
            {
                if (row1[k] == i && col1[k] == j)
                {
                    val1 = toe1[k];
                    break;
                }
            }
            printf("%d ", val1);
        }
    }

  printf("\nThe resultant Matrix ");
  
}

