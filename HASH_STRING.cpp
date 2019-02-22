#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
typedef struct word
{
	char s[50];
	int count;
	struct word *next;
}word;
struct hash{
	 word *head;
};
struct hash h[256];
void word_count(char a[],char flett)
{
	int d = flett-'0';
	int flag=0;
	word *temp=NULL;
	if(h[d].head==NULL)
	{
		temp=(word*)malloc(sizeof(word));
		strcpy(temp->s,a);
		temp->count=1;
		temp->next=NULL;
		h[d].head=temp;
	}
	else
	{
		word *ptr=NULL;
		ptr=h[d].head;
		while(ptr->next!=NULL)//so that we need to iterate again to insert at end if word not present in yhe list
		{
			if(strcmp(ptr->s,a)==0)
			{
				ptr->count+=1;
				flag=1;
			}
			ptr=ptr->next;
		}
		if(strcmp(ptr->s,a)==0)
		{
			ptr->count+=1;
			flag=1;
		}
		if(flag==0)
		{
			temp=(word*)malloc(sizeof(word));
			strcpy(temp->s,a);
			temp->count=1;
			temp->next=NULL;
			ptr->next=temp;
		}
	}
}
void print()
{
	for(int i=0;i<256;i++)
	{
		if(h[i].head!=NULL)
		{
			word *ptr=NULL;
			ptr=h[i].head;
			while(ptr!=NULL)
			{
				cout<<ptr->s<<" "<<ptr->count<<endl;
				ptr=ptr->next;
			}
		}
	}
}
int main()
{
	char str[]="My name is Arun no name is My Arun param veer param My Arun is";
	char wrd[50];
	int k=0;
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]!=' ')
		{
			wrd[k++]=str[i];
		}
		else
		{
			wrd[k]='\0';
			k=0;
			word_count(wrd,wrd[0]);
		}
	}
	wrd[k]='\0';
	k=0;
	word_count(wrd,wrd[0]);
	print();

}
