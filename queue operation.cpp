#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

int Que[SIZE], F=-1,R=-1;

void enqueue()
{
	int ele;
 	printf("enter the elements");
 	scanf("%d",&ele);
 	if(R==SIZE-1)
 		printf("\nThe Queue is full");
 	else
	 {
 		if (F==-1 && R==-1)
 			F=R=0;
 		else
 			R=R+1;
 		Que[R]=ele;
 	}
 	
}

void dequeue()
{
	int ele;
 
 if(F== -1&& R==-1)
 	printf("The Queue is empty");
 else
 { 
    ele=Que[F];
    if(F==R)
    	F=R=-1;
    else
    	F=F+1;
    printf("the deleted element is = %d",ele);
 }
	
}


void display()
{
	int i;
 
 	if(F==-1 && R==-1 )
	printf("\nQueue is empty");
	else
	    for(i=F;i<=R;i++)
	    printf("%d \t",Que[i]);
 }

int main()
{
	int choice;
	do{
		printf("\nMain Menu \n");
		printf("\n 1.Enqueue\n2.Dequeue\n3.Display\n4.exit\n");
		printf("enter your choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:	enqueue();break;
			case 2: dequeue();break;
			case 3: display();break;
			case 4: exit(0); break;
			default:
				printf("enter the elements from 1 to 4");
	}
	}while(choice>0&&choice<=4);
	
}
