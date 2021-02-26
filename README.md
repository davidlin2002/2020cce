# 2020cce

## 第一題 找零錢
```c

#include <stdio.h>
int main()
{
	int a,b ,c ,d;
	scanf("%d",&a);
	b=a/50;
	c=a%50/5;
	d=a%50%5/1;
	printf("%d=50*%d+5*%d+1*%d\n",a,b,c,d);
}
```

## 第二題 因數個數

```c
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
```
## 第三題 找倍數
```c
#include <stdio.h>
int main()
{
	int n=10,r=0,a[10];
	for(int i=1;i<=n;i++){
	scanf("%d",&a[10]);
	if(a[10]%3==0) r++;
	}
	printf("%d\n",r);
}
```
## 第四題 整數轉為等級
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n> 90||n==90)printf("A\n");
	else if(n<90&&n>=80)printf("B\n");
	else if(n<80&&n>=60)printf("C\n");
	else  printf("F\n");
}
```
	
## 第五題 分式化簡
```c
#include <stdio.h>
int main()
{
    int a,b,temp;
    scanf("%d%d",&a,&b);
    if (a>b)
    {
        for(int i=1;i<=b;i++){
            if(a%i==0 &&b%i==0)
            {
                temp=i;
            }
        }
    }
    if (b>a)
    {
        for(int i=1;i<=a;i++){
            if(a%i==0 &&b%i==0)
            {
                temp=i;
            }
        }
    }
    a=a/temp;
    b=b/temp;

    printf("%d\n%d",a ,b);

}
```

