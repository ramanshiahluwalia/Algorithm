#include <stdio.h>

int main()
{
	int x=0;
	int arr[]={40,72,89,40,10,24};
	int key =40;
	int i;
	int index;
	for(i=0; i<=5;i++)
	{
		if(key==arr[i])
		
		{
			x=1;
			index=i;
		}
		
	}
	if(x=1)
	{
		printf("element is found at %d",index+1);
	}
	else {
		printf("Element not found");
	}
	return 0;
}
