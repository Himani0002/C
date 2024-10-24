#include <stdio.h>

int main() {
    int n;
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Squared elements:\n");
    for (int i = 0; i < n; i++) {
        int square = arr[i] * arr[i];
        printf("%d ", square);
    }
    
    return 0;
}
