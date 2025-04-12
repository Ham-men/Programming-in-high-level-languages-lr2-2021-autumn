#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	FILE *wf1;
	FILE *wf2;
	setlocale(LC_ALL, "Rus");
	char str[50];
	char str2[100];
	char *estr1;
	int i=1,i2=0, k=0;
	
	wf2=fopen("test2.txt","w");	
	wf1=fopen("test.txt","r");
	
	estr1 = fgets (str,sizeof(str),wf1);
		str2[i2]='(';
			i2++;
			str2[i2]=i+'0';
			i2++;
			str2[i2]=')';
			i2++;
	printf("\n nachalo = %s",estr1);
	do {
		
		//printf("\n stroka  = %c",*estr1);
		if (*estr1==' ')
		{
			k=0;
			i++;
			*estr1++;
			str2[i2]='(';
			i2++;
			str2[i2]=i+'0';
			i2++;
			str2[i2]=')';
			i2++;
			
		}
			
		if (( k>1 ) && (k<5))	//с 3 по 5 символ
		{
			str2[i2]=*estr1;	
			i2++;
			printf("\n stroka  = %s",str2);
		}
		k++;
		*estr1++;
	//	printf("\n estr1 = %c",*estr1);
		if (*estr1=='.')
		{
			estr1 = fgets (str,sizeof(str),wf1);
			printf("\n file ===== %s",estr1);
			k=0;
			i++;
			if (i>9)
			i=0;
			str2[i2]='(';
			i2++;
			str2[i2]=i+'0';
			i2++;
			str2[i2]=')';
			i2++;
		}
		if (estr1==NULL)
			break;	
			
	
}
while(1);

str2[i2]=NULL;
i2--;
str2[i2]=NULL;
i2--;
str2[i2]=NULL;
i2--;
str2[i2]=NULL;


printf("\n result = %s", str2);
fputs(str2,wf2);

	fclose (wf1);
	fclose (wf2);
	
	return 0;
}

