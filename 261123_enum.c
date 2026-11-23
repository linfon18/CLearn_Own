#include <stdio.h>
//内容ENum枚举
//后面优先学习正紧C,CPP顺便一起学
int main()
{
	enum DAY
	{
		MON = 1, TUE, WED, THU, FRI, SAT, SUN //这里不再额外加;//WED是3
	};
	enum season { spring, summer = 3, autumn, winter };//spring=0,summer=3,autumn=4,winter=5
	//枚举是可以同时定义枚举变量
	//使用
	enum DAY day;
	day = WED;
	printf("%d", day);//此时的day，根据前面得扮靓day对应DAY,DAY再对应枚举ENUM WEB = 3
	printf("\n");
	//遍历所有
	for (day = MON; day <= SUN; day++) //cpp用不了day++,cpp老老实实多用个i++
	{
		printf("枚举元素%d\n ", day);
	}
	printf("\n");
	return 0;
}

//第一个枚举成员的默认值为整型的 0，后续枚举成员的值在前一个成员上加 1。我们在这个实例中把第一个枚举成员的值定义为 1，第二个就为 2，以此类推。
//3、省略枚举名称，直接定义枚举变量
//
//enum
//{
//	MON = 1, TUE, WED, THU, FRI, SAT, SUN
//} day;