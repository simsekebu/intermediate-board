#include <stdio.h>
#include <stdlib.h>
void sirala( int *dizi, int lenght)
{
    
    int i, j, t;
    for (i = 0; i < lenght; i++) {

        for (j = i + 1; j < lenght; j++) {

            if (*(dizi + j) < *(dizi + i)) {

                t = *(dizi + i);                                                                                                                                                                                                                                                    
                *(dizi + i) = *(dizi + j);
                *(dizi + j) = t;
            }
        }
    }
}
int main(void)
{
    int i;
    int ebu[] = { 1,12,54,36,84, 100, 255, 8239472, 0, 3, 2, 64, 23,45};
    for (i = 0; i < sizeof(ebu)/sizeof(ebu[0]); i++)
        printf("%d ", *(ebu + i));
    sirala(ebu, sizeof(ebu)/sizeof(ebu[0]));
    printf("\n");
    for (i = 0; i < sizeof(ebu)/sizeof(ebu[0]); i++)
        printf("%d ", *(ebu + i));
            printf("\n");

    return 0;
}
