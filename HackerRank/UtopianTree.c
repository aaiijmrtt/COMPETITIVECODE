#include<stdio.h>
int main() {
	int t,n,g,i;
	scanf("%d",&t);
	while(t--) {
		scanf("%d",&n);
		g=1;
		for(i=0;i<n;++i)
			if(i&0x1)
				g|=1;
			else
				g<<=1;
		printf("%d\n",g);
	}
	return 0;
}
