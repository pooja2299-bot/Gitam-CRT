#include<stdio.h>
int main()
{
	char name[30];
	char sname[20];
	printf("Enter your name");
	scanf("%s",&name);
	printf("Enter your surname");
	scanf("%s",&sname);
	printf("Your name is %s\n",name);
	printf("Your surname is %s\n",sname);
	
	printf("Your name is %s\t",name);
	printf("Your Surname is %s\n",sname);
	
	printf("Your name is %s\b",name);
	printf("Your surname is %s\n",sname);
	
	printf("Your name is %s\r",name);
	printf("Your surname is %s\n",sname);
	
}
