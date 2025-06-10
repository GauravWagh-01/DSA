#include <stdio.h>

int main(){
    int a[3][3]={{1,2,3},
                 {4,5,6},
                 {7,8,9}};

    for (int i = 0; i < 3; i++)//row value
    {
        int rowAdd=0, colAdd = 0;
        for (int j = 0; j < 3; j++)
        {
            rowAdd = rowAdd + a[i][j];
            colAdd = colAdd + a[j][i];
        }
        printf("%d ", rowAdd);
        printf("%d ", colAdd);
        printf("\n");
        }

}

