#include <stdio.h>
#include <string.h>

typedef struct point
{
    char name[50];
    char country[50];
    int popu;
}City;

void remover(char str[])
{
    int len=strlen(str);
    str[len-1]=0;
}

void ClearBuffer()
{
    while(getchar()!='\n');
}

int main()
{
    int i;

    City city[3];

    for(i=0; i<3; i++)
    {
        fputs("name : ", stdout);
        fgets(city[i].name, sizeof(city[i].name), stdin);
        remover(city[i].name);

        fputs("country : ", stdout);
        fgets(city[i].country, sizeof(city[i].country), stdin);
        remover(city[i].country);

        fputs("population : ", stdout);
        scanf("%d", &city[i].popu);

        ClearBuffer();
    }

    printf("Printing the three cities : \n");

    for(i=0; i<3; i++)
    {
        printf("%d. %s in %s with a population of %d people\n", i, city[i].name, city[i].country, city[i].popu);
    }

    return 0;
}