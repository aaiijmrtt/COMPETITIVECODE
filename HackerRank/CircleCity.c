#include<stdio.h>
#include<math.h>
int main() {
	int t,r,k,i;
	double s,sq;
	scanf("%d",&t);
	while(t--) {
		scanf("%d%d",&r,&k);
		for(i=0,s=sqrt(r);i<s;++i) {
			sq=sqrt(r-i*i);
			if(floor(sq)==sq)
				k-=4;
		}
		if(k>=0)
			printf("possible\n");
		else
			printf("impossible\n");
	}
	return 0;
}
