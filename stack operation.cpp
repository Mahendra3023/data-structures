#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int stack[SIZE], top=-1;

void push()
{
	int ele;
 printf("enter the elements");
 scanf("%d",&ele);
 if(top==SIZE-1)
 printf("The stack is full");
 else
 {
 	top=top+1;
 	stack[top]=ele;
 }
 	
}

void pop()
{
	int ele;
 
 if(top== -1)
 printf("The stack is empty");
 else
 { 
    ele=stack[top];
    top=top-1;
 	printf("the deleted element is = %d",ele);
 }
	
}
void peek()
{ 
  int ele;
    
	if(top==-1 )
	printf("empty");
	else 
	printf("The peek element = %d",stack[top]);
	
}
void display()
{
	int i;
 
 	if(top==-1 )
	printf("empty");
	else
	    for(i=top;i>=0;i--)
	    printf("%d \n",stack[i]);
 
 	
}

int main()
{
	int choice;
	do{
		printf("Main Menu \n");
		printf("\n 1.push\n2.pop\n3.peek\n4.display\n5.exit\n");
		printf("enter your choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			push();
			break;
			case 2:
			pop();
			break;
			case 3:
			peek();
			break;
			case 4:
			display();
			break;
			case 5:
			exit(0);
			break;
			default:
				printf("enter the elements from 1 to 5");
			
			
		}
	}while(choice>0&&choice<=5);
	
}
