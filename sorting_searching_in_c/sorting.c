		// bubble sort.........


#include <stdio.h>

int main() {
    int i, j, temp;
    int a[5] = {9, 6, 3, 8, 2};

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5 - i - 1; j++) {
            if (a[j] > a[j+1]) {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    for (j = 0; j < 5; j++) {
        printf("%d ", a[j]);
    }

    return 0;
}


		// insertion sort........
#include<stdio.h>

int main() {
    int i, j, temp;
    int a[5] = {9, 3, 4, 6, 7};
    for (i = 1; i < 5; i++) {
        temp = a[i];
        j = i;
        while (j > 0 && a[j - 1] > temp) {
            a[j] = a[j - 1];
            j--;
        }
        a[j] = temp;
    }
    for (j = 0; j < 5; j++) {
        printf("%d ", a[j]);
    }
    return 0;
}


		//  selection sort...
	
	
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

