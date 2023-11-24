#include<stdio.h>
#include<stdlib.h>
void count(int *arr,int size, int *odd,int *even){
*odd=0;
*even=0;
for(int i=0;i<size;i++){

	if(*(arr+i)%2==0)
		(*even)++;	
	else
		(*odd)++;
	}	
}
int main(){
int *arr,size,odd=0,even=0;
printf("Enter size of two array: ");
scanf("%d",&size);
printf("Enter element of fisrt array : \n");
int *arr1,*arr2;
arr1=(int *)malloc(size * sizeof(int));
arr2=(int *)malloc(size * sizeof(int));
for(int i=0;i<size;i++)
{
	scanf("%d",arr1+i);
}
printf("first array : \n");
for(int i=0;i<size;i++)
{
	printf("%d",*(arr1+i));
}
printf("\n");
count(arr1,size,&odd,&even);
printf("%d",odd);
printf("%d",even);

}
