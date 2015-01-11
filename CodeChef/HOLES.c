#include <stdio.h>
int main()	{
	int t,h[26]={1,2,0,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0},i,n;
	char s[100];
	scanf("%d",&t);
	while(t--)	{
		scanf("%s",&s);
		for(i=n=0;s[i]!='\0';++i)
			n+=h[(int)s[i]-65];
		printf("%d\n",n);
	}
	return 0;
}