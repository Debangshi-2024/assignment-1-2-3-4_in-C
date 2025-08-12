#include <stdio.h>

int main() {
    int arr[100], n, sorted = 1;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(int i = 1; i < n; i++) {
        if(arr[i] < arr[i-1]) {
            sorted = 0;
            break;
        }
    }

    if(sorted)
        printf("Sorted\n");
    else
        printf("Not sorted\n");

    return 0;
}


