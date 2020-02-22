#include <conio.h>
#include <stdio.h>

int main()
{
	int i,j,temp,n,Arr[15];
	printf("Enter the no. of elements in array: \n");
	scanf("%d",&n);
	printf("Enter the elements in array:\n");
	for (i=0;i<n;i++)
	{
		scanf("%d",&Arr[i]);
	}
	for (i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++){
			if(Arr[j]>Arr[j+1]){
				temp=Arr[j];
				Arr[j]=Arr[j+1];
				Arr[j+1]=temp;
			}
		}
	}
	printf("Sorted array:\n");
	for (i=0;i<n;i++)
	{
		printf("%d  ",Arr[i]);
	}
	getch();
}

