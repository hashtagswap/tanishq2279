#include<stdio.h>
#include<conio.h>
void main()
{
int a[4][4],b[4][4],c[4][4],i,j;
printf("Enter elements for Matrix A: \n");
for(i=0;i<4;i++)
    {
     for(j=0;j<4;j++)
        {
         scanf("%d",&A[i][j]);
        }
     }
printf("Enter elements for Matrix B:  \n");
for(i=0;i<2;i++)
      {
       for(j=0;j<4;j++)
        {
         scanf("%d",&B[i][j]);
        }
    }
printf("Addition of 4 Matrices= \n");
for(i=0;i<4;i++)
    {
     for(j=0;j<4;j++)
        {
            C[i][j] = B[i][j] + A[i][j];
        }
    }
for(i=0;i<4;i++)
    {
     for(j=0;j<4;j++)
            {
             printf("%d ",C[i][j]);
            }
    printf("\n");     
    }
getch();
}
