#include<stdio.h>
void remove_spaces(char str[])
{
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
}
void insert(char str[])
{
        int i=0,inword=0,wcount=0,ccount=0,l;
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
             wcount++;
             inword=1;
            }
            ccount++;
         }
         i++;
    }
    i=i-1;
    printf("%d %d\n",wcount,ccount);
    l=(wcount-1)*4+ccount;
    printf("%d",l);
    str[l]='\0';
    l--;
    int in =0;
    while(l>=0)
    {
      if(str[i]!=' '&& in==0)
      {
        str[l--]=str[i--];
      }
      else if(str[i]==' ')
      {
        in =1;
        i--;
      }
      else if(str[i]!=' '&& in ==1)
      {
       str[l--]='0';
       str[l--]='2';
       str[l--]='X';
       str[l--]='0';
       in=0;
      }
    }
}
int main()
{
        char str[500];
        printf("Enter String = \n");
        scanf("%[^\n]s",str);
        remove_spaces(str);
        insert(str);
    printf("\n%s\n",str);
}
