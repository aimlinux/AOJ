#include <stdio.h>

int main(void) {

    int r, c;
    scanf("%d %d", &r, &c);
    if (r >= 100) {
        r = 99;
    }
    if (c >= 100) {
        c = 99;
    }


    int table[100 + 1][100 + 1];

    int row = r;
    int arr[100][100];
    int row_sum = 0;

    int column = c;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            scanf("%d ", &arr[i][j]);
        }
        printf("\n");
    }

    
    printf("スキャンおわり(^ <///> ^)\n");

    int sum[100];
    

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            printf("%d ", arr[i][j]);
            sum[i] += arr[i][j];
        }
        printf("%d", sum[i]);
        printf("\n");
    }

    printf("やっと終わった  ( ^ /></ ^ )");


//     for (int i = 0; i < row; i++) {
//         printf("%d ", arr[i][j]);
//     }
//     printf("%d\n", row_sum);

//     for (int j = 0; j < column; j++) {
//         printf("%d ", arr[i][j]);
//     }
//     printf("%d\n", column_sum);


    return 0;
    
}