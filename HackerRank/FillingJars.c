#include<stdio.h>
int main() {
	int n,m,a,b,k,i;
	long long int c=0,t;
	scanf("%d%d",&n,&m);
	while(m--) {
		scanf("%d%d%d",&a,&b,&k);
		t=b-a+1;
		t*=k;
		c+=t;
	}
	c/=n;
	printf("%lld\n",c);
	return 0;
}
