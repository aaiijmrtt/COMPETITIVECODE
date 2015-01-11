#include<stdio.h>
#include<stdlib.h>
int main() {
	int t,n,m,i;
	scanf("%d",&t);
	while(t--) {
		scanf("%d",&n);
		int a[n];
		scanf("%d",&a[0]);
		for(i=1;i<n;++i) {
			scanf("%d",&a[i]);
			a[i]+=a[i-1];
		}
		if(n==1) {
			printf("YES\n");
			continue;
		}
		m=a[n-1];
		for(i=1;i<n-1;++i)
			if(abs(a[n-1]-a[i]-a[i-1])<m)
				m=abs(a[n-1]-a[i]-a[i-1]);
		if(m)
			printf("NO\n");
		else
			printf("YES\n");
	}
	return 0;
}
