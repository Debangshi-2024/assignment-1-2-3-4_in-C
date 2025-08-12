#include <stdio.h>

int main() {
    int arr[100], n, j = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(int i = 0; i < n; i++)
        if(arr[i] != 0)
            arr[j++] = arr[i];

    while(j < n)
        arr[j++] = 0;

    printf("After moving zeros to end: ");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
