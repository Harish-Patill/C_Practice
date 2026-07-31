// #include <stdio.h>

// // from to aux
// // from aux to
// // aux to from
// void towerOfHanoi(int num, char from, char to, char aux) {
//     if (num == 0) return;   // base case: nothing to move

//     towerOfHanoi(num - 1, from, aux, to);       // move num-1 discs: from → aux (using as helper)
//     printf("Move disc %d from %c to %c\n", num, from, to);  // move the biggest disc
//     towerOfHanoi(num - 1, aux, to, from);       // move num-1 discs: aux → to (taking from the helper)
// }

// int main() {
//     int num;
//     printf("Enter number of discs: ");
//     scanf("%d", &num);

//     towerOfHanoi(num, 'A', 'C', 'B');   // A = source, C = destination, B = auxiliary

//     return 0;
// }

#include <stdio.h>

int hanoiMoves(int n) {
    if (n == 0) return 0;              // base case: 0 discs = 0 moves
    return 2 * hanoiMoves(n - 1) + 1;   // move n-1 discs twice, plus 1 for the big disc
}

int main() {
    int n;
    printf("Enter number of discs: ");
    scanf("%d", &n);

    printf("Total moves: %d\n", hanoiMoves(n));

    return 0;
}
