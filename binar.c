#include<stdio.h>
void main()
{

    int limit,i,j,temp,check,right,left=0,middle,flag=0,count=0;
    count+=3;
    printf("Enter the limit:\n");
    scanf("%d",&limit);
    count++;
    int a[limit];
    printf("Enter the elements:\n");
    for(i=0;i<limit;i++){
        count++;
     scanf("%d",&a[i]);
        count++;
    }
    
    for(i=0;i<limit-1;i++)
    {
        count++;
        for(j=0;j<limit-1-i;j++)
        {
            count++;
            if(a[j]>a[j+1])
            {
                count++;
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                count+=3;
            }
        }
    }
    printf("The sorted array is :\n");
    for(i=0;i<limit;i++){
        count++;
    printf("%d\t\n",a[i]);
        count++;
    }
   printf("Enter the element to be searched:\n");
    scanf("%d",&check);
    count++;

    right=limit-1;
    count++;
    while(left<=right)
    {
        count++;
        middle=(left+right)/2;
        count++;
        if(check<a[middle])
        {
            count++;
            right=middle-1;
            count++;
        }
        else if (check>a[middle]){
            count++;
            left=middle+1;
            count++;
        }
        else
        {
            printf("The element is present\n");
            flag=1;
            count++;
            break;
        }
    }
        if(flag==0)
            {
                count++;
                printf("not present\n");
            }
            count+=2;
printf("Time complexity %d\n Space Complexity%d",count,(40+(4*limit)));
}
	

