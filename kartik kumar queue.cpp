#include<stdio.h>
#include<stdlib.h>

#define max 10  //Maximum number of elements that can be stored

int queue[max];
int rear=-1,front=-1;

void enqueue()
{
	int data;
if (rear==max-1) //result will be shown overflow
{
printf("Queue overflown");
}
else
{

	printf("\nEnter element to Enqueue:"); //Number of elements to Enqueue
	scanf("%d",&data);
	
	rear=rear+1;
	queue[rear]=data;
	if (front==-1)
	{
		front=0;
	}

}

}
void dequeue ()
{

if((front==-1 )|| (front==rear+1))
{
printf("Queue Empty");  //result will be shown Queue is empty
}
else
{
	queue[front]=0;
	front=front+1;
}
}
void display()
{

int i;

if(front==-1 || front>rear)
{
	printf("\nqueue is empty");
}
else
{
printf("queue is ....\n");
for(i=front;i<=rear;i++)
printf("%d\t",queue[i]);
}
} 

int main()
{
	int n;
	
	while(1)
	{
		printf("\n\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit");
		printf("\n\nenter your choice from 1 to 4\n");       //you will get 4 options for Enqueue,Dequeue,Display and Exit
		scanf("%d",&n);
		
		switch(n)
		{
			case 1: enqueue();
					break;
			case 2: dequeue();
					break;
			case 3: display();
					break;
			case 4: exit(0);
			
			default: printf("\nWrong Choice!!");    //result will be shown wrong Choice
	}

}
}

