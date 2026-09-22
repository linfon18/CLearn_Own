#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//2608300210
void printFiveNewLines()
{
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("\n");
	}
}

int main()
{
	int a, b, sumnum;
	a = 1;
	b = 5;
	long c;
	c = 214748364;
	sumnum = a + b;
	printf("SumNum=%d", sumnum);
	printf("\n");
	printf("%d+%d=%d", a, b, sumnum);
	printf("\n");
	printf("HelloWorld");
	int d; d = 0;
	printFiveNewLines();

	int h,f,x,y; //头总数h,总脚数f,鸡数量x,兔数量y
	h = 16; f = 40;
	y = (f - 2 * h) / 2; //30行于31行不可互换,否则会出现未赋值的y值
	x = h - y;
	printf("Chicken=%d,Rabbit=%d", x,y);
	printFiveNewLines();

	double r = 1.5, c2, s, v;
	double PI = 3.1415926;
	c2 = 2 * PI * r;//周长
	s = PI * r * r;//#include<math.h> pow(r,2);等效r平方
	v = (4.0 / 3.0) * PI * r * r * r;//三分之四如果直接写4/3默认INT类型,加上小数点自动转double类型
	printf("c=%f,s=%f,v=%f",c2,s,v);
	printFiveNewLines();
	//char ch1 = 'a';
	//char ch2 = '\n';
	printf("%c\n", 97);//ASCII 97
	printFiveNewLines();

	char xb, XB;
	scanf("%c",&XB);
	xb = 'a' - 'A' + XB;
	printf("%c\n",xb);
	printFiveNewLines();
	
	double P2, D, R, M;
	D = 324500; P2 = 3245; R = 0.008;
	M = (log10(P2) - log10(P2 - D * R)) / log10(1 + R);
	printf("Month=%f\n", M);
	printf("Total=%f\n",M*P2);
	
}

//2026.9.22学习 至P29