#include<stdio.h>
int main() {
	long long int n,m;
	int t,d[10],i,s;
	scanf("%d",&t);
	while(t--) {
		scanf("%lld",&n);
		for(i=0;i<9;++i)
			d[i]=0;
		for(m=n;m;m/=10)
			d[m%10]++;
		for(i=2,s=d[1];i<10;++i)
			if(n%i==0)
				s+=d[i];
		printf("%d\n",s);
	}
	return 0;
}
