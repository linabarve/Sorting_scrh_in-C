 	 // Binary search..........
#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];

    
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int k;
    printf("Enter the number to find: ");
    scanf("%d", &k);

    int s = 0;    
    int e = n - 1;  

    int f = 0;  

    while (s <= e)
    {
        int m = (s + e) / 2;  

        if (a[m] == k)
        {
            f = f + 1;
            printf("Element %d is present at index %d.\n", k, m);
            break;
      
        } else if (a[m] < k)
        {
            s = m + 1;  
        } else 
        {
            e = m - 1;  
        }
    }

    if (!f)
    {
        printf("Element %d is not present in the array.\n", k);
    }

    return 0;
}


