#include <stdio.h>
void selectionsort(int a[], int);
void selectionsort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++) {
        int m = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[m])
                m = j;
        }
        if (m != i) { 
            int t = a[m];
            a[m] = a[i];
            a[i] = t;
        }
    }
    }


int main() {
    int n, t = 0;
    printf("Enter the size of the array :");
    scanf("%d",&n);
    int a[n];

    // Input elements
    printf("Enter %d elements: ",n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    selectionsort(a,n);
    // Print sorted array
    printf("Sorted elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}