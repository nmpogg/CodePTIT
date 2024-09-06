#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#define int long long
#define re(a) scanf("%lld", &a)
#define wr(a) printf("%lld", a)
#define endl puts("");
main()
{
	char s[100];
	gets(s);
	
	for(int i = 0; i < strlen(s); i ++)
	s[i] = tolower(s[i]);
	
	char dic[50][20];
	char *p = strtok(s," ");
	int n = 0;
	while(p != NULL)
	{
		strcpy(dic[n++],p);
		p = strtok(NULL," ");
	}
	
	for(int i = 0; i < n; i ++)
	{
		int check = 1;
		for(int j = 0; j < i; j ++)
			if(strcmp(dic[i],dic[j]) == 0) 
				check = 0;
		if(!check) continue;
		printf("%s ", dic[i]);
		int dem = 0;
		for(int j = 0; j < n; j ++)
			if(strcmp(dic[i],dic[j]) == 0) 
				dem++;
		printf("%d\n", dem);		
	}
}