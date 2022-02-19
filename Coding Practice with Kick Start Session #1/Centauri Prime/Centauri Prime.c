#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char rulerName[7];
char vowels[] = {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};

void GetRuler(char K[])
{

    int length;
    length = strlen(K);

    if(K[length-1]=='y'||K[length-1]=='Y')
    {
        strcpy(rulerName, "nobody");
    }

    else
    {
        strcpy(rulerName, "Bob");
    }

    if(K[length-1]!='y'&& K[length-1]!='Y')
    {
        for(int y=0; y<11; ++y)
        {
            if(K[length-1] == vowels[y])
            {
                strcpy(rulerName, "Alice");
            }
        }
    }

}

int main()
{
    int T;
    char K[101];
    scanf("%d", &T);

    for(int x=1; x<=T; ++x)
    {
        scanf("%s", K);
        GetRuler(K);
        printf("Case #%d: %s is ruled by %s.\n", x, K, rulerName);
    }
}
