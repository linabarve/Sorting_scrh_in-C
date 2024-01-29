#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	
	for(int i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
	}
	
	int k;
	printf("find location:");
	scanf("%d",&k);
	
	if(k < 0 || k > n)
	{
		printf("%d",n);
	}
	else
	{
		int p;
		printf("insert number:");
		scanf("%d",&p);
		
		for(int i = n; i > k; i--)
		{
			a[i] = a[i-1];
		}
		a[k] = p;
		n++;
	
	
		for(int i = 0; i < n; i++)
		{
			printf("%d\n",a[i]);
		}
	}
	return 0;
}
		
	
