#include<stdio.h>
int main()
{
   int i = 1;
   char c;
    while( (c = getchar())> '@' )
    {
        i *= (c=='T'||c=='D'||c=='L'||c=='F')?2:1;
    }
        printf("%d\n",i);
}

