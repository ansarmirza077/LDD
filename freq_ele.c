//frequency of element 
#include<stdio.h>

int main()
{
int arr[]={1,2,3,4,5,2,2,3,4,5};
int i=0,j=0,count=1;
int b[10],flag=0;
for(i=0;i<10;i++)
{
count=1;
for(j=i+1;j<10;j++)
{
if(arr[i]==arr[j])
{
count++;
flag++;
}
}
 b[i]=count;
}
printf("%d",flag);
for(i=0;i<10;i++)
printf("%d\t",arr[i]);
printf("\n");
for(i=0;i<flag;i++)
printf(" %d\t",b[i]);
}

