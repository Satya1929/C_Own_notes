#include <stdio.h>

void getStudentHeights(int heights[], int n) {
    printf("Enter the heights of the students:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &heights[i]);
    }
}

void sortStudentHeights(int heights[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (heights[j] > heights[j + 1]) {
                int temp = heights[j];
                heights[j] = heights[j + 1];
                heights[j + 1] = temp;
            }
        }
    }
}

void displaySortedHeights(int heights[], int n) {
    printf("Sorted heights in ascending order:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", heights[i]);
    }
}

int main() {
    int k;
    printf("Enter the number of students: ");
    scanf("%d", &k);
    
    int heights[k];
    getStudentHeights(heights, k);
    
    sortStudentHeights(heights, k);
    
    displaySortedHeights(heights, k);
    
    return 0;
}
