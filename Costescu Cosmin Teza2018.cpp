#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()

{
	char a[256];
	for(int i=0;i<26;i++)
		a[i]='A'+i;

	puts("Sirul de caractere contine:");
	printf("\"%s\"",a);
	a[26]='1';
	a[27]='2';
	a[28]=0;
	printf("\n\"%s\"",a);

	printf("\nNumarul de caractere este %d",strlen(a));

	a[10]=0; //sau NULL
	printf("\n\"%s\"",a+1);
	printf("\n\"%s\"",a+6);

	printf("\nNumarul de caractere este %d",strlen(a));
	char *p;
	p=a;
	printf("\n%s",p);
	printf("\n%p",p);
	printf("\n%p",a);
	printf("\n%p",&p[0]);
	printf("\n%p",&a[0]);

	printf("\n%s",++p); //p++; printf("\n%s",p);
	printf("\n%s",p++);

	printf("\n%p",p);
	printf("\n%p",&a[2]);

	printf("\n%c",p[0]); //va afisa elementul 'C'
	printf("\n%c",p[-2]); //va afisa elementul 'A'

	printf("\n%d",p-a);

	getch();
}
