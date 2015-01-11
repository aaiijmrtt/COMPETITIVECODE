#include<stdio.h>
int main() {
	int t,k;
	long long c;
	scanf("%d",&t);
	while(t--) {
		scanf("%d",&k);
		c=k/2;
		c*=k-k/2;
		printf("%lld\n",c);
	}
	return 0;
}
