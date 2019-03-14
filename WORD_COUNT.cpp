#include<stdio.h>
int main()
{
    char str[1000];
    scanf("%[^\n]s",str);
    puts(str);
    int i=0,inword=0,cnt=0;
    while(str[i]!='\0')
    {
        if(str[i]==' ')
        {
            inword=0;
        }
        else
        {
            if(inword==0)
            {
             cnt++;
             inword=1;
            }
        }
        i++;
    }
    printf("%d",cnt);
}
