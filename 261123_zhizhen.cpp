#include <stdio.h>
int main()
{
	int  num = 20;   /* 实际变量的声明 */
	int* ip;        /* 指针变量的声明 *///带*的是指针变量，声明时要加上*，表示这是一个指针变量，ip是一个指针变量，它可以存储一个整型变量的地址。
	ip = &num;  /* 在指针变量中存储 num 的地址 */

	printf("num 变量的地址: %p\n", &num);//%p表示看地址
	/* 在指针变量中存储的地址 */
	printf("ip 变量存储的地址: %p\n", ip);

	/* 使用指针访问值 */
	printf("*ip 变量的值: %d\n", *ip);//带了*的ip表示访问指针变量ip所指向的地址的值，也就是num的值。

	//C指针https://www.runoob.com/cprogramming/c-pointers.html
	//int* ip;    /* 一个整型的指针 */
	//double* dp;    /* 一个 double 型的指针 */
	//float* fp;    /* 一个浮点型的指针 */
	//char* ch;    /* 一个字符型的指针 */ 
	//printf("");
}