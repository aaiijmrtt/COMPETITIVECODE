#include<stdio.h>
int main() {
	int t,i,j,r;
	char s[10000],c;
	scanf("%d%*c",&t);
	while(t--) {
		for(i=0;(((c=getchar())!='\n')&&(c!=EOF));++i)
			s[i]=c;
		for(r=j=0;j<i/2;++j)
			r+=(s[i-1-j]<s[j])?(s[j]-s[i-1-j]):(s[i-1-j]-s[j]);
		printf("%d\n",r);
	}
	return 0;
}
