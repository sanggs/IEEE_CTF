#include<stdio.h>
#include<string.h>
char tohex(int s);
int replace(char s);
int main()
{
	char p[100],key[100],ctxt[100],a;
	int i=0,k=0;
	gets(p);
	a=getchar();
	gets(key);
	k=strlen(key);
	for(i=0;p[i]!='\0';i++)
	{
		ctxt[i]=tohex(replace(p[i])^replace(key[i%k]));
	}
	printf("%s",ctxt);
	return(0);
}
int replace(char pq)
{
	if(pq<='F'&&pq>='A')
	{
		switch(pq)
		{
			case 'a':return 10;
			case 'b':return 11;
			case 'c':return 12;
			case 'd':return 13;
			case 'e':return 14;
			case 'f':return 15;
		}
	}
	else if(pq>='0'&&pq<='9')
		return((int)pq-48);
}
char tohex(int s)
{
	if(st<10)
		return(char)(48+s);
	else
		return(char)(87+s);
}
