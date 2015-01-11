#include<stdio.h>
int main() {
	int t,n,c,m,w,s;
	scanf("%d",&t);
	while(t--) {
		scanf("%d%d%d",&n,&c,&m);
		s=n/c;
		for(w=s;w>=m;w=w/m+w%m)
			s+=w/m;
		printf("%d\n",s);
	}
	return 0;
}
