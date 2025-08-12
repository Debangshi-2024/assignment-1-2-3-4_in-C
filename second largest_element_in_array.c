#include <stdio.h>
#include <limits.h>

int main() {
    int n, arr[100], first, second;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    first = second = INT_MIN;
    for(int i = 0; i < n; i++) {
        if(arr[i] > first) {
            second = first;
            first = arr[i];
        } else if(arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if(second == INT_MIN)
        printf("No second largest element.\n");
    else
        printf("Second largest element: %d\n", second);

    return 0;
}

