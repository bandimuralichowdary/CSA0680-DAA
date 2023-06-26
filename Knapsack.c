#include<stdio.h>

struct item{
    int weight, value;
};

void swap(struct item *a, struct item *b){
    struct item temp = *a;
    *a = *b;
    *b = temp;
}

void sort(struct item items[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            double ratio1 = (double)items[j].value / items[j].weight;
            double ratio2 = (double)items[j+1].value / items[j+1].weight;
            if(ratio1 < ratio2){
                swap(&items[j], &items[j+1]);
            }
        }
    }
}

void knapsack(struct item items[], int n, int W){
    sort(items, n);
    int weight = 0;
    double profit = 0.0;
    for(int i=0; i<n; i++){
        if(weight + items[i].weight <= W){
            weight += items[i].weight;
            profit += items[i].value;
        }
        else{
            int remaining_weight = W - weight;
            double fraction = (double)remaining_weight / items[i].weight;
            weight += remaining_weight;
            profit += fraction * items[i].value;
            break;
        }
    }
    printf("Maximum profit: %.2lf\n", profit);
}

int main(){
    int n, W;
    printf("Enter the number of items: ");
    scanf("%d", &n);
    struct item items[n];
    for(int i=0; i<n; i++){
        printf("Enter the weight and value of item %d: ", i+1);
        scanf("%d %d", &items[i].weight, &items[i].value);
    }
    printf("Enter the maximum capacity of the knapsack: ");
    scanf("%d", &W);
    knapsack(items, n, W);
    return 0;
}
