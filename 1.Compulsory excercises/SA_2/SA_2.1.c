#include <stdio.h>
#define FOR(i, s, e) for (int i = s; i < e; i++)
int main()
{
    int nol, nor = 0;
    int region[100];
    FOR(i, 0, 100)
    region[i] = 0;
    printf("Number of letters: ");
    scanf("%d", &nol);
    int postal[nol];
    FOR(i, 0, nol)
    {
        scanf("%d", &postal[i]);
        postal[i] /= 1000;
        region[postal[i]]++;
    }
    FOR(i, 0, 100)
    {
        if (region[i] != 0)
        {
            printf("Region %d: %d letter(s) \n", i, region[i]);
            nor++;
        }
    }
    printf("Number of regions: %d \n", nor);
    return 0;
}