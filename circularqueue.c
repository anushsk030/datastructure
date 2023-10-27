#include<stdio.h>
int arr[50],front=-1,rear=-1,max;
void enqueue();
void dequeue();
void peek();
void display();
void main(){
    {
int choice;
printf("enter the maximum of queue\n");
scanf("%d",&max);
printf("enter the choice\t1.enqueue\t2.dequeue\t3.Display\t5.exit\n");
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
printf("enter the choice\t1.enque\t2.dequeue\t3.Display\t5.exit\n");
scanf("%d",&choice);
}
   }
}
void enqueue(){
int value;

if(front==-1&&rear==-1){
printf("enter the value to insert\n");
scanf("%d",&value);
rear=0;
front=0;
arr[rear]=value;

}
else if(front==(rear+1)%max){
printf("Overflow\n");
}
else{
printf("enter the value to insert\n");
scanf("%d",&value);
rear=(rear+1)%max;
arr[rear]=value;
}
}
void dequeue()
   {
     int item;
     if(front==-1&&rear==-1)
     {
     printf("Underflow\n");
     }
     else if(front==rear)
     {
     item=arr[front];
     front=-1;
     rear=-1;
     }
     else
      {
    item=arr[front];
    printf("%d removed\n",item);
    front=(front+1)%max;
      }
  }
void display() 
   {
     int i;
     if(front ==-1)
     printf("Empty Circular Queue, no elements to display\n");
     else 
        {
    printf("Elements of queue: ");
    for (i = front; i != rear; i = (i + 1) %max) 
     {
	printf("%d ", arr[i]);
     }
    printf("%d ", arr[i]);
    printf("\nfront position %d\n",front);
    printf("rear position %d",rear);
       }
  printf("\n");
 }










