// #include<stdio.h>

// struct Time {
//     int hour;
//     int minute;
// };

// struct Time timeDiff(struct Time t1, struct Time t2){
//     int m1 = t1.hour * 60 + t1.minute;
//     int m2 = t2.hour * 60 + t2.minute;

//     int diff = m2 - m1;
//     if (diff < 0) diff += 24 * 60;   // wrap around midnight

//     struct Time result;
//     result.hour = diff / 60;
//     result.minute = diff % 60;

//     return result;
// }

// int main(){
//     struct Time t1, t2, diff;

//     printf("Enter first time (HH MM): ");
//     scanf("%d %d", &t1.hour, &t1.minute);

//     printf("Enter second time (HH MM): ");
//     scanf("%d %d", &t2.hour, &t2.minute);

//     diff = timeDiff(t1, t2);

//     printf("Difference: %02d:%02d\n", diff.hour, diff.minute);

//     return 0;
// }


#include<stdio.h>

struct Time {
    int hour;
    int minute;
};

int main(){
    struct Time t1, t2, diff;

    printf("Enter first time (HH MM): ");
    scanf("%d %d", &t1.hour, &t1.minute);

    printf("Enter second time (HH MM): ");
    scanf("%d %d", &t2.hour, &t2.minute);

    int m1 = t1.hour * 60 + t1.minute;
    int m2 = t2.hour * 60 + t2.minute;

    int diffMin = m2 - m1;
    if (diffMin < 0){ 
        diffMin = diffMin + (24 * 60);   // wrap around midnight
    }

    diff.hour = diffMin / 60;
    diff.minute = diffMin % 60;

    printf("Difference: %02d:%02d\n", diff.hour, diff.minute);

    return 0;
}