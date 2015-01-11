#include<stdio.h>
int main() {
	int n,i;
	scanf("%d",&n);
	long long int a[n],s,ws,m;
	for(i=s=ws=0;i<n;++i) {
		scanf("%lld",&a[i]);
		s+=a[i];
		ws+=(i+1)*a[i];
	}
	for(i=0,m=ws;i<n;++i) {
		ws=ws-s+n*a[i];
		if(ws>m)
			m=ws;
	}
	printf("%lld\n",m);
	return 0;
}
