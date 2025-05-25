#include <stdio.h>
void insertionsort(int a[], int);
void insertionsort(int a[], int n)
{
        int t, j;
        for (int i = 1; i < n; i++) {  // Fixed loop condition
            t = a[i]; 
            j = i - 1;
            while (j >= 0 && a[j] > t) {
                a[j + 1] = a[j];
                j--;
            }
            a[j + 1] = t;  // Correct placement of insertion step
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
    insertionsort(a,n);
    // Print sorted array
    printf("Sorted elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}