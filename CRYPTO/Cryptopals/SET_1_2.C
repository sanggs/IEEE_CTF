#include<stdio.h>
#include<string.h>
main()
{
	char s1[50],s2[50],s3[50];
	int i;
	printf("Enter the string1\n");
	scanf("%s",s1);
	printf("Enter the string2\n");
	scanf("%s",s2);
	if(strlen(s1)==strlen(s2))
	{
		for(i=0;s1[i]!='\0';i++)
		{
			s3[i]=s1[i]^s2[i];
		}
		s3[i]='\0';
		printf("%s",s3);
	}
	else
		printf("\nStrings of unequal length\n");
	return(0);
}

    Status API Training Shop Blog About Help 

