#include <stdio.h>
#include <time.h>
#include <stdlib.h>

char buff[64];

long long mian(short OBF3)
{
    OBF3 ^= 12;
    OBF3 += OBF3 - 1 * 12 << 9;
    char* OBF4 = "flag";
    return (OBF3 == 778);
}

int main(int argc, char **argv)
{
    FILE *f = fopen("flag.txt", "r");
    int OBF1 = 123123123;
    fgets(buff, 32, f);
    fclose(f);
    srand(time(NULL));
    char OBF2 = '\0';
    int r = rand();
    OBF1 = r*r + r;
    OBF2 = (OBF1 % 121);
    for(int i = 0; i < 32; i++)
    {
        if(OBF1 - OBF2 == 4563)
        {
            printf("%i ", OBF1);
            printf(OBF2);
        }
        printf("%i ", buff[i] ^ r);
        r += i;
        OBF1 /= 2;
        if(OBF1 * OBF2 / OBF1 - mian(OBF1) - 12 == 192834)
        {
            printf("%i ", OBF1);
            printf(OBF2);
        }
        OBF2++;
        if(OBF1 + OBF2 == 192834)
        {
            printf("%i ", OBF1);
            printf(OBF2);
        }
    }
}