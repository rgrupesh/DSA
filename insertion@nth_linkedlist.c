#include <stdio.h>
#include <stdlib.h>
void Insert(int, int);
void print();

struct Node{
	int data;
	struct Node* next;
};
struct Node* head;


int main()
{
    head=NULL;
    Insert(3,1);
    Insert(2,2);
    Insert(4,2);
    Insert(5,3);
    print();
}

void Insert(int data, int n)
{
	struct Node* temp1=(struct Node*)malloc(sizeof(struct Node));
	int i;
	temp1->data=data;
	temp1->next=NULL;
	if(n==1)
	{
		temp1->next=head;
		temp1=head;
		return;
	}
	struct Node* temp2=head;
	for(i=0;i<=n-2;i++)
	{
		temp2=temp2->next;
	}
	temp1->next=temp2->next;
	temp2->next=temp1;
	
	
}
void print()
{
	struct Node* temp=head;
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
	
}

