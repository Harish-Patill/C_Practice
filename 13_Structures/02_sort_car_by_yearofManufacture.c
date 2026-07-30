#include<stdio.h>
#include<string.h>

int compareYOM(const void *a, const void *b){
    return ((struct Car*)a)->yom - ((struct Car*)b)->yom;
}

struct Car {
    char model[50];
    int yom;      // Year of Manufacture
    float price;
};

int main(){
    int n;
    printf("How many cars? ");
    scanf("%d", &n);

    struct Car cars[n];

    for(int i=0; i<n; i++){
        printf("\nEnter details for car %d:\n", i+1);

        printf("Model: ");
        scanf(" %[^\n]", cars[i].model);

        printf("Year of Manufacture: ");
        scanf("%d", &cars[i].yom);

        printf("Price: ");
        scanf("%f", &cars[i].price);
    }


    // we can use the q-sort method
    qsort(cars, n, sizeof(struct Car), compareYOM);

    // Bubble sort by YOM (ascending — oldest first)
    // for(int i=0; i<n-1; i++){
    //     for(int j=0; j<n-1-i; j++){
    //         if(cars[j].yom > cars[j+1].yom){
    //             struct Car temp = cars[j];
    //             cars[j] = cars[j+1];
    //             cars[j+1] = temp;
    //         }
    //     }
    // }

    printf("\n--- Cars sorted by YOM (oldest to newest) ---\n");
    for(int i=0; i<n; i++){
        printf("%s | YOM: %d | Price: %.2f\n",cars[i].model, cars[i].yom, cars[i].price);
    }

    return 0;
}