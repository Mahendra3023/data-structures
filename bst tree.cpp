#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *left;*right;
}
*root=null,*newnode;
struct node *create(struct node*,int val)
{
	if(root==null)
	{
		newnode=(struct node*)malloc(sizeof(structnode));
		newnode->data=val;
		newnode->left=null;
		newnode->right=null;
		return(newnode);
	}
	else if (val<root->data)
	root->left=create(root->left,val);
	else if(val>root->right)
	root->right=create(root->right,val);
	return (root);
}
int main()
{
	int choice;
	do{
		printf("Main Menu \n");
		printf("\n 1.create\n2.display\n3.exit\n");
		printf("enter your choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			create();
			break;
			case 2:
			display();
			break;
			case 3:
			exit(0);
			break;
			default:
				printf("enter the elements from 1 to 3");
			
			
		}
	}while(choice>0&&choice<=3);
	
}
