#include<stdio.h>
void p(char c,int n) {
	while(n--)
		putchar(c);
}
int main() {
	int t,n,i;
	scanf("%d",&t);
	while(t--) {
		scanf("%d",&n);
		for(i=n;i>=0;i-=5)
			if(i%3==0)
				break;
		if(i>=0) {
			p('5',i);
			p('3',n-i);
			printf("\n");
		}
		else
			printf("%d\n",-1);
	}
	return 0;
}
