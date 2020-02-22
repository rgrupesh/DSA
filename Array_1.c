#include <stdio.h>
#include <conio.h>

void read_mat1(int mat1[10][10],int row,int col)
{
	printf("Enter the values of first matrix:\n");
	int i,j;
	for (i=0;i<row;i++)
	{
		for (j=0;j<col;j++)
		{
			scanf("%d",&mat1[i][j]);
		}
	}
	
	
	
}
void read_mat2(int mat2[10][10],int row,int col)
{
	printf("Enter the values of second matrix:\n");
	int i,j;
	for (i=0;i<row;i++)
	{
		for (j=0;j<col;j++)
		{
			scanf("%d",&mat2[i][j]);
		}
	}

}
void addition_mat(int mat1[10][10], int mat2[10][10], int addition[10][10], int row, int col)
{
	
	int i,j;
	for (i=0;i<row;i++)
	{
		for (j=0;j<col;j++)
		{
			addition[i][j]=mat1[i][j] + mat2[i][j];
		}
	}

}
void transpose_mat(int addition[10][10],int transpose[10][10], int row, int col)
{
	
	int i,j;
	for (i=0;i<row;i++)
	{
		for (j=0;j<col;j++)
		{
			transpose[j][i]=addition[i][j];
		}
    }
    
}
void print_all(int mat1[10][10], int mat2[10][10], int addition[10][10], int transpose[10][10], int row, int col)
{
	int i,j;

printf("The values of first matrix are:\n");
	for (i=0;i<row;i++)
	{
		for (j=0;j<col;j++)
		{
			printf("%d \t",mat1[i][j]);
		}
		printf("\n");
	}
    printf("The values of second matrix are:\n");
	for (i=0;i<row;i++)
	{
		for (j=0;j<col;j++)
		{
			printf("%d \t",mat2[i][j]);
		}
		printf("\n");
	}
    printf("The addition of matrix1 and matrix2 is:\n");
	for (i=0;i<row;i++)
	{
		for (j=0;j<col;j++)
		{
			printf("%d \t", addition[i][j]);
	    }
	printf("\n");
    }
    printf("The transpose of matrix is:\n");
    for (i=0;i<col;i++)
	{
		for (j=0;j<row;j++)
		{
			printf("%d \t",transpose[i][j]);
	    }
	 printf("\n");
    }
}
	
	
    

int main()
{
	int mat1[10][10],mat2[10][10],addition[10][10],transpose[10][10];
	int row,col;
	printf("Enter the rows and column: \n");
	scanf("%d %d",&row, &col);
	read_mat1(mat1,row,col);
	read_mat2(mat2,row,col);
	addition_mat(mat1,mat2,addition,row,col);
	transpose_mat(addition, transpose,row,col);
	print_all(mat1,mat2,addition,transpose,row,col);
	
}

