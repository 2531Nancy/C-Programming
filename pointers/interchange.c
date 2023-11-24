//write a program that initialize two array of pointers. Thwn by using pointer interchange the elements of the array.

#include<stdio.h>
#include<stdlib.h>
void swap(int *ptr1,int *ptr2,int n)
{
	
	for(int i=0;i<n;i++){
	int temp=*(ptr1+i);
	*(ptr1+i)=*(ptr2+i);
	*(ptr2+i)=temp;}
}
void accept(int *ptr,int size){
for(int i=0;i<size;i++)
{
	scanf("%d",ptr+i);
	
}
}
void display(int *ptr,int size){

for(int i=0;i<size;i++)
{
	printf("%d",ptr[i]);
}
}

int main(){
	int size;
	printf("Enter size of two array : ");
	scanf("%d",&size);

	printf("Enter element of fisrt array : \n");
	int *arr1,*arr2;
	arr1=(int *)malloc(size * sizeof(int));
	arr2=(int *)malloc(size * sizeof(int));

	accept(arr1,size);
	printf("Enter element of second  array :  \n");
	accept(arr2,size);
	printf("\n Fisrt Array ");
	display(arr1,size);

	printf("\n");
	printf("\n Second Array ");
	display(arr2,size);
	printf("\n");
	swap(arr1,arr2,size);
	printf("first array :\n");
	display(arr1,size);
	printf("\n");
	printf("second array :\n");
	display(arr2,size);

return 0;
}