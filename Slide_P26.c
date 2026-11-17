#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    char array[5];
    printf("    array = %p\n&array[0] = %p\n   &array = %p\n",
        (void *)array,(void *)&array[0],(void *)&array);

    system("pause");
    return 0;
}