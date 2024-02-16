#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

double frand(void);
double getAvg(int row, int col, double arr[][col]);

int main(void){
    srand(time(NULL));
    int row = (rand() % 6) + 1;
    int col = (rand() % 6) + 1;


    double array[row][col];

    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            array[i][j] = frand();
            printf("%  .2lf", array[i][j]);
        }
        printf("\n");
    }

    double avg;
    avg = getAvg(row, col, array);

    printf("The average of all entries in the matrix is %.2lf.\n", avg);

    return 0;
}

double frand(void){
    return ((double) rand() / RAND_MAX) * (pow(10,2));
}

double getAvg(int row, int col, double arr[][col]){
    double sum = 0;
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            sum += arr[i][j];
        }
    }
    return sum / (row * col);
}

