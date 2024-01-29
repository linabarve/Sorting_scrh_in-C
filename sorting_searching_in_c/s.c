
			// sorting............
#include<stdio.h>
int main() 
{
    int n;
    printf("Enter the value of n = ");
    scanf("%d", &n);
    char arr[n];

    for (int i = 0; i < n; i++) {
        char a;
        printf("Enter the value of a = ");
        scanf(" %c", &a);
        arr[i] = a;
    }

    for (int i = 0; i < n - 1; i++) 
    {
        int min = i;

        for (int j = i + 1; j < n; j++) 
        {
            if (arr[j] < arr[min])
             {
                min = j;
            }
        }

        char temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    printf("Sorted characters:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("%c ", arr[i]);
    }

    return 0;
}
