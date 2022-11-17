//reverse a string
#include<stdio.h>
#include<string.h>

int main()
{
	char  str1[]="a string";
	char *ptr=str1,*ptr1=str1;
	int i=0;
	for(i=0;i<(strlen(str1));i++)
	{
		ptr1++;
	}
	ptr1--;
	char temp;
	for(i=0;i<((strlen(str1))/2);i++)
	{
		temp=*(ptr1);
		*ptr1=*ptr;
		*ptr=temp;
		ptr1--;
		ptr++;
		//printf("%s",ptr);
	}
	printf("%s\n",str1);
	//printf("%s\n",str2);
}
