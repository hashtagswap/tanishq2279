#include<stdio.h>
void main()
{
int A[6][6],B[6][6],C[6][6],i,j,k;
printf("Enter elements for Matrix A:\n ");
for(i=0;i<6;i++)
    {
     for(j=0;j<2;j++)
        {
         scanf("%d",&A[i][j]);
        }
    }
printf("Enter elements for Matrix B:\n ");
for(i=0;i<6;i++)
    {
    for(j=0;j<6;j++)
        {
         scanf("%d",&B[i][j]);
        }
    }
for(i=0;i<6;i++)
    {
    for(j=0;j<6;j++)
        {
            C[i][j]=0;
            for(k=0;k<6;k++)
            {
                C[i][j] = (A[i][k]*B[k][j])+C[i][j];

            }
        }
    }
printf("Multiplication of 6 matrices:\n ");
for(i=0;i<2;i++)
    {
     for(j=0;j<6;j++)
          {
           printf("%d ",C[i][j]);
          }
     printf("\n");
    }
}
