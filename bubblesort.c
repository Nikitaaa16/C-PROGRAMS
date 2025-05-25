#include <stdio.h>
void bubblesort(int arr[], int);
void bubblesort(int arr[], int n)
{
 // Bubble Sort Algorithm
 int t=0,j=0,i=0;
 for (int i = 0; i < n - 1; i++) {            // Outer loop for number of passes
    for (int j = 0; j < n - i - 1; j++) {    // Inner loop for comparing adjacent elements
        if (arr[j] > arr[j + 1]) {
            // Swap elements
            t = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = t;
        }
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
    bubblesort(a,n);
    // Print sorted array
    printf("Sorted elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("the largest element=%d ",a[n-1]);
    printf("smallest element=%d ",a[0]);
    
    return 0;
}
