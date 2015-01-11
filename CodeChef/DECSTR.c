#include <stdio.h>
int main()	{
	int t,k,i;
	char c[104]={'z','y','x','w','v','u','t','s','r','q','p','o','n','m','l','k','j','i','h','g','f','e','d','c','b','a','z','y','x','w','v','u','t','s','r','q','p','o','n','m','l','k','j','i','h','g','f','e','d','c','b','a','z','y','x','w','v','u','t','s','r','q','p','o','n','m','l','k','j','i','h','g','f','e','d','c','b','a','z','y','x','w','v','u','t','s','r','q','p','o','n','m','l','k','j','i','h','g','f','e','d','c','b','a'};
	scanf("%d",&t);
	while(t--)	{
		scanf("%d",&k);
		for(k=103-k-(k-1)/25;k<104;++k)
			printf("%c",c[k]);
		printf("\n");
	}
	return 0;
}