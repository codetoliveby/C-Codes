#include<stdio.h>
#include<stdlib.h>
int main()
{
	int decNumber,*arr,counter=0,loop=0,rem=0,copy1,copy2;
	printf("\nEnter a Decimal Number:");
	scanf("%d",&decNumber);
	copy1=decNumber;
	copy2=decNumber;
	while(copy1 != 0)
	{
		counter++;
		copy1/=2;
	}
	arr=(int *)calloc(counter,sizeof(int));
	for(loop=0;loop<counter;loop++)
	{
		rem=copy2%2;
		arr[loop]=rem;
		copy2/=2;
	}
	printf("\nThe Binary representation of %d is: ",decNumber);
	for(loop=counter-1;loop>=0;loop--)
	{
		printf("%d",arr[loop]);
	}
	
	return 0;
}
