#include<stdio.h>
int main() {
	int v,n,a,i;
	scanf("%d%d%d",&v,&n,&a);
	for(i=0;a!=v;++i)
		scanf("%d",&a);
	printf("%d\n",i);
	return 0;
}
