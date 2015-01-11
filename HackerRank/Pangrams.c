#include<stdio.h>
int main() {
	int i,p[26];
	char c;
	for(i=0;i<26;++i)
		p[i]=0;
	while(((c=getchar())!='\n')&&(c!=EOF))
		if((c>='A')&&(c<='Z'))
			p[c-'A']++;
		else if((c>='a')&&(c<='z'))
			p[c-'a']++;
	for(i=0;i<26;++i)
		if(!p[i])
			break;
	if(i<26)
		printf("not pangram\n");
	else
		printf("pangram\n");
	return 0;
}
