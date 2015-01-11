#include<stdio.h>
int main() {
	int t,i,j,a[26];
	char s[10000],c;
	scanf("%d%*c",&t);
	while(t--) {
		for(i=0;(((c=getchar())!='\n')&&(c!=EOF));++i)
			s[i]=c;
		if(i&0x1) {
			printf("-1\n");
			continue;
		}
		for(j=0;j<26;++j)
			a[j]=0;
		for(j=0;j<i/2;++j)
			a[s[j]-'a']++;
		for(;j<i;++j)
			a[s[j]-'a']--;
		for(i=j=0;i<26;++i)
			j+=(a[i]>0)?a[i]:-a[i];
		printf("%d\n",j/2);
	}
	return 0;
}
