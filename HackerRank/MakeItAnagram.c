#include<stdio.h>
int main() {
	int i,a[26],d;
	char c;
	for(i=0;i<26;++i)
		a[i]=0;
	while(((c=getchar())!='\n')&&(c!=EOF))
		a[c-'a']++;
	while(((c=getchar())!='\n')&&(c!=EOF))
		a[c-'a']--;
	for(i=d=0;i<26;++i)
		if(a[i]>0)
			d+=a[i];
		else
			d-=a[i];
	printf("%d\n",d);
	return 0;
}
