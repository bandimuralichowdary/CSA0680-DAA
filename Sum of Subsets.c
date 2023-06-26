#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 10

void print_subset(int subset[], int size) {
    printf("{ ");
    for (int i = 0; i < size; i++) {
        printf("%d ", subset[i]);
    }
    printf("}\n");
}

void backtrack(int set[], int subset[], int set_size, int subset_size, int sum, int target_sum, int index) {
    if (sum == target_sum) {
        print_subset(subset, subset_size);
        return;
    }
    if (sum > target_sum || index >= set_size) {
        return;
    }
    subset[subset_size] = set[index];
    backtrack(set, subset, set_size, subset_size + 1, sum + set[index], target_sum, index + 1);
    backtrack(set, subset, set_size, subset_size, sum, target_sum, index + 1);
}

int main() {
    int set[MAX_SIZE];
    int set_size, target_sum;

    printf("Enter the size of the set (<= %d): ", MAX_SIZE);
    scanf("%d", &set_size);

    printf("Enter the set elements:\n");
    for (int i = 0; i < set_size; i++) {
        scanf("%d", &set[i]);
    }

    printf("Enter the target sum: ");
    scanf("%d", &target_sum);

    int subset[MAX_SIZE];
    backtrack(set, subset, set_size, 0, 0, target_sum, 0);

    return 0;
}
