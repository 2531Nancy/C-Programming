//write a program to allocate memory dynamically for n integers such that the memory is initialied to 0. Accept the data from the user and find the range of the data elements. 

#include<stdio.h>
#include<stdlib.h>
int main(){
	int *arr,size,min,max;
	printf("Enter number of elements to enter: ");
	scanf("%d",&size);
	arr=(int *)malloc(size * sizeof(int));
	if(arr==NULL)
		{printf("Failed to allocate memory: \n");
	}
	for(int i=0;i<size;i++)
	{	arr[i]=0;
	}
	printf("Enter elements : \n");	
	for(int i=0;i<size;i++)
	{
	scanf("%d",&arr[i]);
	
	}
	max=arr[0];
 min=arr[0];
for(int i=1;i<size;i++)
{
	if(max<arr[i])
	{max=arr[i];}
	if (min>arr[i])
		{min=arr[i];
		}
}
printf("max element is %d \n",max);
printf("min element is %d \n",min);
printf("Range is %d \n",max-min);
return 0;
}
