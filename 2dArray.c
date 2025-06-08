#include <stdio.h>
void main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // printing array
    printf("2D Array\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("\n-------------------------\n");

    // Addition of All
    int add1;
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 1; j++)
        {
            add1 = arr[i][j] + arr[i][j + 1] + arr[i][j + 2];
        }
    }
    printf("Addition of All: -%d\n", add1);

    printf("\n-------------------------\n");

    // Addition of ROWS
    int add2[3];
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
        add2[i] = sum;
    }
    printf("Addition of ROWS: -\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Row %d: - %d\n", i + 1, add2[i]);
    }

    printf("\n-------------------------\n");

    // Addition of COLUMBS
    int add3[3];
    for (int i = 0; i < 3; i++)
    {
        sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += arr[j][i];
        }
        add3[i] = sum;
    }
    printf("Addition of COLS: -\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Cols %d: - %d\n", i + 1, add3[i]);
    }

    printf("\n-------------------------\n");

    // Min Max
    int min = 0, max = 0;
    min = arr[2][2];
    max = arr[2][2];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            if (min > arr[i][j])
            {
                min = arr[i][j];
            }
            if (max < arr[i][j])
            {
                max = arr[i][j];
            }
        }
    }
    printf("Minimum and Maximum: -\nMin: - %d \nMax: - %d\n", min, max);

    printf("\n-------------------------\n");

    // LEFT Diagonal elements
    int arr1[3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // if ((i == 0 && j == 0) | (i == 1 && j == 1) | (i == 2 && j == 2))
            if ((i - j) == 0)
            {
                arr1[i] = arr[i][j];
            }
        }
    }
    printf("\nLeft Diagonal Elements: -\n");
    for (int i = 0; i < 3; i++)
    {
        for (int z = 0; z < (0 + i) * 2; z++)
        {
            printf(" ");
        }
        printf("%d\n", arr1[i]);
    }

    printf("\n-------------------------\n");

    // Right Diagonal elements
    int arr2[3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // if ((i == 0 && j == 2) | (i == 1 && j == 1) | (i == 2 && j == 0))
            if ((i + j) == 2)
            {
                arr2[i] = arr[i][j];
            }
        }
    }

    printf("\nRight Diagonal Elements: -\n");
    for (int i = 0; i < 3; i++)
    {
        for (int z = 0; z < (2 - i) * 2; z++)
        {
            printf(" ");
        }
        printf("%d\n", arr2[i]);
    }

    printf("\n-------------------------\n");

    // L Elements in 2D Array
    printf("L Elements: -\n\n");
    printf("%d\n%d\n%d %d %d\n", arr[0][0], arr[1][0], arr[2][0], arr[2][1], arr[2][2]);

    printf("\n-------------------------\n");

    // N Elements 2D Array
    printf("N Elements: -\n\n");
    printf("%d   %d\n%d %d %d\n%d   %d\n", arr[0][0], arr[0][2], arr[1][0], arr[1][1], arr[1][2], arr[2][0], arr[2][2]);

    printf("\n-------------------------\n");
}
