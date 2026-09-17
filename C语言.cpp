#include <stdio.h>
int main()
{
	int a;
	int b;
	int c;
	int x;
	int y;
	int z;
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)x=a;
	else x=b;
	if(x>c)y=x;
	else y=c;
	if(x>y)z=x;
	else z=y;
	printf("abc中最大的是%d",z);
	return 0;
	
	
}
