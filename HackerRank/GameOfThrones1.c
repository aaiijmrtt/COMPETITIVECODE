#include<stdio.h>
int main() {
	int a[26],i;
	char c;
	for(i=0;i<26;++i)
		a[i]=0;
	while(((c=getchar())!='\n')&&(c!=EOF))
		a[c-'a']++;
	for(i=c=0;i<26;++i)
		if(a[i]&0x1)
			c++;
	if(c>1)
		printf("NO\n");
	else
		printf("YES\n");
	return 0;
}
