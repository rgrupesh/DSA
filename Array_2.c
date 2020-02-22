#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int **A,**B,**C,r1,c1,r2,c2,i,j,k;
	printf("Enter the number of rows of first matrix:\n");
	scanf("%d",&r1);
	printf("Enter the number of columns of first matrix:\n");
	scanf("%d",&c1);
	printf("The number of columns of first matrix and the number of rows of second matrix must be equal for multiplication to be possible. So,\nNumber of rows of second column = %d.\nEnter the number of columns of second matrix.\n",c1);
	r2=c1;
	scanf("%d",&c2);
	printf("The order of the matrices to be multiplied are (%d*%d) and (%d*%d).\n",r1,c1,r2,c2);
	A=(int**)calloc(r1,sizeof(int*));
	for(i=0;i<r1;i++)
	{
		A[i]=(int*)calloc(c1,sizeof(int));
	}
	B=(int**)calloc(r2,sizeof(int*));
	for(i=0;i<r2;i++)
	{
		B[i]=(int*)calloc(c2,sizeof(int));
	}
	printf("Enter the data of the first matrix according to rows.\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	printf("Enter the data of the second matrix according to rows.\n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d",&B[i][j]);
		}
	}
	C=(int**)calloc(r1,sizeof(int*));
	for(i=0;i<r1;i++)
	{
		C[i]=(int*)calloc(c2,sizeof(int));
	}
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			C[i][j]=0;
		}
	}
	for (i=0;i<r1;++i)
	{
        for (j=0;j<c2;++j)
		{
            for (k=0;k<c1;++k)
			{
                C[i][j]+=A[i][k]*B[k][j];
            }
        }
    }
    printf("The required matrix is:\n");
    for(i=0;i<r1;i++)
    {
    	for(j=0;j<c2;j++)
    	{
    		printf("%d\t",C[i][j]);
		}
		printf("\n");
    }
    
	getch();
	return 0;
}
