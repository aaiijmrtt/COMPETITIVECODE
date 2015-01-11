#include<stdio.h>
int main() {
	int n,i,j;
	char a[26],b[26],c;
	scanf("%d%*c",&n);
	for(i=0;i<26;++i)
		a[i]=0;
	for(i=0;i<n;++i) {
		for(j=0;j<26;++j)
			b[j]=0;
		while(((c=getchar())!='\n')&&(c!=EOF))
			b[c-'a']++;
		for(j=0;j<26;++j)
			if(b[j]>0)
				a[j]++;
	}
	for(i=j=0;i<26;++i)
		if(a[i]==n)
			j++;
	printf("%d\n",j);
	return 0;
}
