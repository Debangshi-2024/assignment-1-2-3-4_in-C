#include <stdio.h>

int main() {
    int arr[100], freq[100], n, i, j, count;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1;
    }
    for(i = 0; i < n; i++) {
        count = 1;
        if(freq[i] != 0) {
            for(j = i + 1; j < n; j++) {
                if(arr[i] == arr[j]) {
                    count++;
                    freq[j] = 0;
                }
            }
            freq[i] = count;
        }
    }
    printf("Frequency of elements:\n");
    for(i = 0; i < n; i++) {
        if(freq[i] != 0)
            printf("%d occurs %d times\n", arr[i], freq[i]);
    }
    return 0;
}




