#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main(void)
{
    int a[SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};
    int pass, i, hold;
    int swapped;    /* b) 記錄這一趟有沒有發生交換 */

    printf("Data items in original order\n");
    for (i = 0; i < SIZE; i++)
        printf("%4d", a[i]);

    for (pass = 1; pass < SIZE; pass++)
    {
        swapped = 0;

        /* a) 第 pass 趟後，最大的 pass 個數已就位，
              所以每一趟的比較次數遞減：9, 8, 7, ... */
        for (i = 0; i < SIZE - pass; i++)
        {
            if (a[i] > a[i + 1])
            {
                hold = a[i];
                a[i] = a[i + 1];
                a[i + 1] = hold;
                swapped = 1;
            }
        }

        /* b) 若這一趟完全沒有交換，表示已排序完成，提早結束 */
        if (!swapped)
            break;
    }

    printf("\n\nData items in ascending order\n");
    for (i = 0; i < SIZE; i++)
        printf("%4d", a[i]);
    printf("\n");

    system("pause");
    return 0;
}
