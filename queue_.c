#include<stdio.h>
int a[50],front=0,rear=-1,max;
void enqueue();
void dequeue();
void peek();
void display();
void main()
{
int choice;
printf("enter the maximum of queue\n");
scanf("%d",&max);
printf("enter the choice\t1.enqueue\t2.dequeue\t3.Peek\t4.Display\t5.exit\n");
scanf("%d",&choice);
while(choice!=5){
switch(choice)
{
case 1:
{
enqueue();
break;
}
case 2:
{
dequeue();
break;
}
case 3:
{
peek();
break;
}
case 4:
{
display();
break;
}
case 5:
{
break;
}
default :
{
printf("invalid choice\n");
}
}
printf("enter the choice\t1.enque\t2.dequeue\t3.Peek\t4.Display\t5.exit\n");
scanf("%d",&choice);
}
}
void enqueue()
{
int val;
if(rear>=max-1)
printf("overflow\n");
else
{
rear++;
printf("enter the value to be added\n");
scanf("%d",&val);
a[rear]=val;
}
}
void dequeue()
{
int item;
if(rear<front)
printf("underflow\n");
else
{
item=a[front];
printf("the value %d is deleted\n",a[front]);
front++;
}
}
void peek()
{
if(rear<front)
printf("the queue is empty\n");
else
{
printf("the peek value of queue=%d",a[front]);
printf("\n");
}
}
void display()
{
int i;
if(front>rear)
printf("the queue is empty\n");
else
{
printf("the queue is :");
for(i=front;i<=rear;i++)
{
printf("%d\t",a[i]);
}
printf("\n");
}
}
