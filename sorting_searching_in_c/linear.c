		// Linear Search.........
#include <stdio.h>
int main()
{
	int n;
	printf("Enter the value:");
	scanf("%d",&n);
	int a[n];
	for(int i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
	}
	int k,f=0;
	printf("find the number:");
	scanf("%d",&k);
	for(int i = 0; i < n; i++)
	{
		if (a[i] == k)
		{
			f = f + 1;
		}
	}
		
	if(f)
	{
		printf("Element present in this array:%d",k);
	}
	else
	{
		printf("Element not present in this array:%d",k);
	}
	return 0;
}



