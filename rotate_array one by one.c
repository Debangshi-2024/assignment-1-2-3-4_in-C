#include <stdio.h>

int main() {
    int arr[100], n, last;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    last = arr[n - 1];
    for(int i = n - 1; i > 0; i--)
        arr[i] = arr[i - 1];
    arr[0] = last;

    printf("After rotation: ");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}

