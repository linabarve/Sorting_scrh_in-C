		//  selection sort........
	
#include <stdio.h>

int main() {
    int i, j, temp, min;
    int a[5] = {4, 9, 2, 6, 3};

    for (i = 0; i < 5; i++) {
        min = a[i];
        int minIndex = i;

        for (j = i + 1; j < 5; j++) {
            if (a[j] < min) {
                min = a[j];
                minIndex = j;
            }
        }

        if (minIndex != i) {
            temp = a[i];
            a[i] = a[minIndex];
            a[minIndex] = temp;
        }
    }

    for (j = 0; j < 5; j++) {
        printf("%d ", a[j]);
    }

    return 0;
}
