#include<stdio.h>
int main() {
	int n,i,t;
	scanf("%d",&n);
	int a[100];
	for(i=0;i<100;++i)
		a[i]=0;
	for(i=0;i<n;++i) {
		scanf("%d",&t);
		a[t]++;
	}
	for(i=0;i<100;++i)
		while(a[i]--)
			printf("%d ",i);
	printf("\n");
	return 0;
}
