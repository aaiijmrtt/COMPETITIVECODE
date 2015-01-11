#include<stdio.h>
#include<math.h>
int main() {
	int t,a,b;
	scanf("%d",&t);
	while(t--) {
		scanf("%d%d",&a,&b);
		printf("%d\n",(int)(floor(sqrt(b))-ceil(sqrt(a))+1));
	}
	return 0;
}
