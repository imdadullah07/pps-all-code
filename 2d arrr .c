#include <stdio.h>
int main() {
    int m, n;
    // Prompt for dimensions
    printf("Enter number of rows (m) and columns (n): ");
    if (scanf("%d %d", &m, &n) != 2 || m <= 0 || n <= 0) {
        printf("Invalid input. Rows and columns must be positive integers.\n");
        return 1;
    }
    // Declare 2D array dynamically for flexibility
    int arr[m][n];
    int sum = 0;
    // Input elements
    printf("Enter %d elements for the %d x %d matrix:\n", m * n, m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i, j);
            if (scanf("%d", &arr[i][j]) != 1) {
                printf("Invalid input. Please enter integers only.\n");
                return 1;
            }
            sum += arr[i][j]; // Add to sum
        }
    }
// Display matrix
    printf("\nMatrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%4d", arr[i][j]); // formatted spacing
        }
        printf("\n");
    }
    // Display sum of all elements
    printf("\nSum of all elements: %d\n", sum);
    return 0;
}
