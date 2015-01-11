#include<stdio.h>
#include<math.h>
int main() {
	int i,j,n,s;
	char e[81],c;
	for(i=0;(((c=getchar())!='\n')&&(c!=EOF));++i)
		e[i]=c;
	n=i;
	s=ceil(sqrt(n));
	for(i=0;i<s;++i) {
		for(j=0;i+j*s<n;++j)
			putchar(e[i+j*s]);
		putchar(' ');
	}
	putchar('\n');
	return 0;
}
