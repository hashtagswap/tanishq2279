#include<stdio.h>
void main()
{
int A[8],B[8],C[12];
int i,j,same=0;
printf("Enter set A \n");
for(i=0;i<8;i++)
    {
     scanf("%d",&a[i]);
    }
printf("Enter set B \t \n");
for(i=0;i<8;i++)
    {
     scanf("%d",&b[i]);
    }
for(i=0;i<8;i++)
    {
     c[i]=a[i];
    }
for(i=0,j=8;i<8,j<12;i++,j++)
    {
     c[j]=b[i];
    }
printf("Union of set A and B is : ");
for(i=0;i<12;i++)
    {
    same=0;
    for(j=0;j<i;j++)
        {
        if(c[j]==c[i])
            {
             same=1;
             break;
            }
        }
    if(same==0)
        {
         printf("%d ",c[i]);
        }
    }
}

