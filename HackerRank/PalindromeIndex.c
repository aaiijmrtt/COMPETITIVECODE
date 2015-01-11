#include<stdio.h>
int main() {
	int t,i,j,k,l;
	char c,s[100005];
	scanf("%d%*c",&t);
	while(t--) {
		for(i=0;(((c=getchar())!='\n')&&(c!=EOF));++i)
			s[i]=c;
		for(j=0,--i;j<i;++j,--i)
			if(s[j]!=s[i])
				break;
		if(j<i) {
			for(k=i,l=j+1;l<k;++l,--k)
				if(s[k]!=s[l])
					break;
			if(l<k)
				printf("%d\n",i);
			else
				printf("%d\n",j);
		}
		else
			printf("%d\n",-1);
	}
	return 0;
}
