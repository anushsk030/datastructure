#include<stdio.h>
int a[50],max_size,top=-1,choice;
void push();
void pop();
void peek();
void display();
void main()
{
printf("enter the maximum stack\n");
scanf("%d",&max_size);
printf("enter the choice\t1.Push\t2.Pop\t3.Peek\t4.Display\t5.exit\n");
scanf("%d",&choice);
while(choice!=5){

switch(choice){
case 1:{

push();
break;
}
case 2:
{
pop();
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
default :{
printf("invalid choice");
break;

}
}
printf("enter the choice\t1.Push\t2.Pop\t3.Peek\t4.Display\t5.exit\n");
scanf("%d",&choice);
}
}
void push(){
int value;
if(top>=(max_size-1)){
printf("Stack is Overflow\n");
}
else{
printf("enter the value to push to stack\n");
scanf("%d",&value);
top=top+1;
a[top]=value;

}
}
void pop(){
int item;
if(top==-1){
printf("underflow\n");
}
else{
item=a[top];
top=top-1;
printf("top value poped\n");
}
}
void peek()
{
if(top==-1)
printf("the stack is empty\n");
else
{
printf("the upper most value of stack=%d",a[top]);
printf("\n");
}
}
void display(){
int i;
if(top==-1)
printf("the stack is empty\n");
else
{
printf("the stack:");
for(i=top;i>=0;i--)
{
printf("%d\t",a[i]);
}
printf("\n");
}
}



































