#include<stdio.h>
void main()
{
int check,limit,i,flag=0,count=0;
count+=2;
printf("Enter the No of elements:\n");
scanf("%d",&limit);
count++;
printf("enter the elements:\n");
int arr[limit];
for(i=0;i<limit;i++){
count++;
scanf("%d",&arr[i]);
count++;
}
printf("enter the digit to check:\n");
scanf("%d",&check);
count++;
for(i=0;i<limit;i++){
count++;
if(check==arr[i]){
count++;
flag=1;
count++;
printf("%d is present\n",check);
count++;
}
}
if(flag==0){
count++;
printf("%d is not present\n",check);
count++;
}
count+=2;
printf("time complexity is %d\nspace complexity is %d",count,20+(4*limit));
}

