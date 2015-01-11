#include <stdio.h>
int main()	{
	int x;
	float y;
	scanf("%d",&x);
	scanf("%f",&y);
	if((x%5==0)&&(y-0.5>=x))
		printf("%.2f",(y-x-0.5));
	else
		printf("%.2f",y);
	return 0;
}