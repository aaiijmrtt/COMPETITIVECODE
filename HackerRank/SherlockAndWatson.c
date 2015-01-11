#include<stdio.h>
int main() {
	int n,k,q,x,i;
	scanf("%d%d%d",&n,&k,&q);
	int a[n];
	for(i=0;i<n;++i)
		scanf("%d",&a[i]);
	for(i=0,k%=n;i<q;++i) {
		scanf("%d",&x);
		printf("%d\n",a[(x-k+n)%n]);
	}
	return 0;
}
