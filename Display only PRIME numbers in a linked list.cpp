// Display PRIME Numbers in a linked list

#include<stdio.h>
#include<stdlib.h>

struct Node
	{
		int data;
		struct Node *next;
	}*head=NULL;
	
int create()
	{
		int n;  	//No. of Nodes
		printf("Enter the number of Nodes : ");
		scanf("%d",&n);
		printf("\n");
		struct Node *temp,*tail;
		for(int i=0;i<n;i++)	//Creating n number of nodes
			{
				temp=(struct Node *)malloc(sizeof(struct Node));
				printf("Enter data for Node %d :",i+1);
				scanf("%d",&temp->data);
				temp->next=NULL;
				if(head==NULL)
					{
						head=temp;
						tail=temp;
					}
				else
					{
						tail->next=temp;
						tail=temp;
					}
					
			}
			temp->next=NULL;
			
	}
	
void print_prime(struct Node *p)
		{
			int flag=0;
			while(p!=NULL)
				{
					if(p->data==2)
						{
							printf("%d\t", p->data);
							p=p->next;
							continue;
						}
					for(int i=2;i<p->data;i++)
						{
							if(p->data % i != 0 )
								flag=1;
							else{
									flag=0;
									break;
								}
						}
						if(flag==1)
							{
								printf("%d\t",p->data);
							}
						p=p->next;
				}
		}
void display(struct Node *p)	//DISPLAYING LINKED LIST
	{
		while(p!=NULL)
			{
				printf("%d ",p->data);
				p=p->next;
			}
			printf("\n\n");
	}

int main()
	{
		create();
		printf("You Entered : ");
		display(head);
		printf("Prime Numbers in this Linked List are : ");
		print_prime(head);
		
	}
