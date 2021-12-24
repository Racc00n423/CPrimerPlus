#include <stdio.h>

int
main(void)
{
    char c1[20], c2[20], c3[20];
    int num;
    
    num = scanf("%s%s%s", c1, c2, c3);
    printf("%d\n", num);

    return 0;
}
