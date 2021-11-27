#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    int i;
    printf("enter string : ");
    fgets(str, sizeof(str), stdin);

    for(i=0; i<strlen(str); i++)
    {
        if(str[i]>= 'a' && str[i]<= 'z')
            str[i] -= 32;

        else if(str[i]>='A' && str[i]<='Z')
            str[i] += 32;
    }

    printf("%s", str);

    return 0;
}