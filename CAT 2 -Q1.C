/*Coleen Nicolette Kanyanya
PA106/G/28764/25
A two D array to display*/
//An array consisting of a collection of elements ,each identified by atleast one array index,or key.It stores a fixed size sequential of elements of the same data type

#include <stdio.h>

int main() {
    int scores[4][2] = {
        {65, 92},
        {35, 70},
        {84, 72},
        {59, 67}
    };

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", scores[i][j]);
        }
        printf("\n");
    }

    return 0;
}

