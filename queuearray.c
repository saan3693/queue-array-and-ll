* Queue using Array with enqueue, dequeue, display, and more */
#include <stdio.h>
#include <stdlib.h>
#define size 5
int rear=-1;
int front=-1;
int queue[size];
int isfull()
{
	if(rear==size-1)
		return 1;
	else
		return 0;
}
int isempty()
{
	if(front==-1)
		return 1;
	else
		return 0;
}
void enqueue(int val)
{
	if(isfull())
	{
		printf("\nQueue Full");
	}
	else
	{
		if(front==-1)
		{
		front=0;
		}
		rear++;
		queue[rear]=val;
		printf("\n%d Enqueued",queue[rear]);
	}
}
void dequeue()
{
	if(isempty())
		printf("Queue Empty");
	else
	{
		printf("\n%d Dequeued",queue[front]);
		front++;
		if(front>rear)
		{	
			front=-1;
			rear=-1;
		}
	}
}
void display()
{
	int i,x;
	x=front;
	for(i=x;i<=rear;i++)
		printf("\n%d",queue[i]);
}
void main()
{
	int ch,entry;
	while(1)
	{
		printf("\n\n1. Enqueue\n2. Dequeue\n3. Display\n4. Empty or Full?\n5. Exit\n\nEnter Your Choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			{
				printf("\nEnter Value to Insert: ");
				scanf("%d",&entry);
				enqueue(entry);
				break;
			}
			case 2:
			{
				dequeue();
				break;
			}
			case 3:
			{
				display();
				break;
			}
			case 4:
			{
				if(isfull())
					printf("\nStack is Full");
				else if(isempty())
					printf("\nStack is Empty");
				else
					printf("\nStack is Neither Full nor Empty");
				break;
			}
			case 5:
			{
				printf("\nGoodbye\n");
				exit(0);
			}
			default:
			{
				printf("\nInvalid Choice");
			}
		}
	}
}
