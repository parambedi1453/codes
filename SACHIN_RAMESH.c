#include<stdio.h>
int main()
{
    char str[100];
    scanf("%[^\n]s",str);
    printf("%s\n",str);
    int i=0,inword=0,flag=0,p,k=0;
    while(str[i]!='\0')
    {
        if(str[i]==' ')
        {
            inword=0;
        }
        else
        {
            if(inword==0&&flag==0)
            {
             p=i;
             inword=1;
             flag=1;
            }
            else if(inword==0&&flag==1)
            {
             str[k++]=str[p];
             str[k++]='.';
             flag=0;
             i--;
            }
        }
        i++;
    }
    if(flag==1)
    {
        int j=p;
        while(str[j]!='\0'||str[j]==' ')
        {
        str[k++]=str[j];
        j++;
        }
        str[k]='\0';
    }
     printf("%s\n",str);
}
