#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
	int data;
	struct node*next;
}*head=NULL,*p,*t,*newnode;

void create()
{
	int i,x,n;
	printf("enter the value of n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	printf("enter the values:\n");
	scanf("%d",&x);
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=x;
	newnode->next=NULL;
	if(head==NULL)
	{
		head=newnode;
		p=newnode;
	}
	else
	{
		for(p=head;p->next!=NULL;p=p->next);
		p->next=newnode;
		p=newnode;
	}
}
void display()
{
	if(head==NULL)
	 printf("single linked list is empty");
	else
	 for(p=head;p!=NULL;p=p->next)
	 printf("%d->",p->data);
}
void insert_at_begin()
{
	int x;
	printf("enter the value:");
	scanf("%d",&x);
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=x;
	newnode->next=NULL;
	p=head;
	head=newnode;
	newnode->next=p;
	p=newnode;
	
}
void insert_at_end()
{
	int x;
	printf("enter the value:");
	scanf("%d",&x);
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=x;
	newnode->next=NULL;
	for(p=head;p->next!=NULL;p=p->next);
	p->next=newnode;
	p=newnode;
}
void insert_at_anyposition()
{
	int x,i,pos;
	printf("enter the value:");
	scanf("%d",&x);
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=x;
	newnode->next=NULL;
	for(p=head,i=1;i<pos;p=p->next,i++)
	t=p;
	t->next=newnode;
	newnode->next=p;
	p=newnode;
}
void delete_at_begining()
{
	int x;
    p=head;
    head=p->next;
    x=p->data;
    free (p);
    printf("the deleted element is %d",x);

}

int main()
{
	int choice;
	do{
		printf("Main Menu \n");
		printf("\n 1.create\n2.display\n3.insert_at_begin\n4insert_at_end\n5.insert_at_anyposiyion\n6.delete_at_begining\n7.exit\n");
		printf("enter your choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:create();break;
			case 2:display();break;
			case 3:insert_at_begin();break;
			case 4:insert_at_end();break;
			case 5:insert_at_anyposition();break;
			case 6:delete_at_begining();break;
			case 7:exit(0);break;
			default:
				printf("enter the elements from 1 to 5");
		}
	}while(choice>0&&choice<=5 );
}
