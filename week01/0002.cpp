#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);

	int r = 0;

	for( int i = 1 ; i <= a ; i++ )
	{
		if( a % i == 0 )
		{
			r++;
		}
	}

	printf("%d\n",r);
}
