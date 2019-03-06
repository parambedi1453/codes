#include<stdio.h>
#include<string.h>
int main()
{
    char str[500];
    printf("Enter any string=\n");
    scanf("%[^\n]d",str);
    printf("%s\n",str);
      /*int d;
      d = strlen(str);
    printf("%d\n",d);*/
    int i=0,k=0,f=0,inword=0;
    while(str[i]!='\0')
    {
        if(str[i]==' ')
        {
            if(f==1)
            {
            str[k++]=' ';
            f=0;
            }
            inword=0;
        }
        else
        {
             if(inword==0)
             {
                str[k++]=str[i];
                f=1;
                inword=1;
             }
             else if(f==1)
             {
              str[k++]=str[i];
             }
        }
        i++;
    }
    str[k]='\0';
    printf("%s\n",str);
    /*d = strlen(str);
    printf("%d",d);*/
}
