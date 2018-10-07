//#include<stdio.h>
//#include<windows.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5, };
//	int to_find = 1;
//	int i = 0;
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++);
//	{
//		if (to_find == arr[i])
//		{
//			break;
//		}
//
//	}
//	if (i == 5)
//	{
//		printf("没有找到预期的元素\n");
//	}
//	else {
//		printf("找到了!,下标为%d\n", i);
//	}
//	system("pause");
//
//}
//在不创建临时变量的情况之下,交换两个变量的值
//其实本质上与方法2中加减的方法是一个道理,只不过是在计算机内部以二进制的方式进行运算
//注意:二进制异或的运算方式为,相同为0,不同为1;
//这种方法其实也是效率最高的一种
//关于输入的值得转化,可以通过系统自带的计算器进行转化
//#include<stdio.h>
//#include<windows.h>
//int main()
//{
//	int a = 30;
//	int b = 40;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("交换之后的数值为%d %d", a,b);
//	getchar();
//	return 0;
//}
//#include<stdio.h>
//#include<windows.h>
//int main()
//{
//	int a;
//	int b;
//	int c;
//	int t;
//	printf("请输入三个数字:\n");
//	scanf_s("%d%d%d", &a,&b,&c);
//	if (a < b)//创建一个随机变量,将较大的数的值放到a里面
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	if (a < c)//将最大的数放在a中
//	{
//		t = a;
//		a = c;
//		c = t;
//	}
//	if (b > c)
//	{
//		t = b;
//		b = c;
//		c = t;
//	}
//	printf("三个数按照从大到小的顺序排列为%d %d %d", a, b, c);
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<windows.h>
//int zhuti( int x,int y,int z )
//{
//	int t = 0;
//	if (x < y)
//	{
//		t = x;
//		x = y;
//		y = t;
//	}
//	if (x < z)
//	{
//		t = x;
//		x = z;
//		z = t;
//	}
//	if (y < z)
//	{
//		t = y;
//		y = z;
//		z = t;
//	}
//	printf("这三个数由大到小的排列顺序为%d %d %d", x, y, z);
//	return 0;
//}
//int main()
//{
//	int a;
//	int b;
//	int c;
//	printf("请输入三个数:");
//	scanf_s("%d %d %d", &a, &b, &c);
//	zhuti(a, b, c);//调用函数
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<windows.h>
//int main()
//{
//	int a;
//	int b;
//	int t;
//	printf("请输入两个数求它们的公约数:");
//	scanf_s("%d %d", &a, &b);
//	if (a < b)//将较大的数的值放入a中
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	while (a%b != 0)//反复取余,并把取余所得的值赋给较小的数
//	{
//		t = a % b;
//		a = b;
//		b = t;
//	}
//	printf("这两个数的最大公约数为%d\n", b);
//	system("pause");
//	return 0;
//}
//输入两个数求它们的最大公约数
//方法2
//通过辗转相减法来求两个数的最大公约数
//创建两个变量,将较大的数的值放入a中,将较小的数的值放入b中
//创建一个while循环,让a,b两个数进行辗转相减
//将相减得到的值赋给较小的数,直到a与b相减的结果为0,
//输出较小的数就为a,b的最大公约数
//#include<stdio.h>
//#include<windows.h>
//int main()
//{
//	int a;
//	int b;
//	int t;
//	printf("请输入两个数求它们的最大公约数:");
//	scanf_s("%d %d", &a, &b);
//	if (a < b)//当满足这个if条件时,交换两个数的顺序,将较大的数保存在a中
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	while (a - b != 0)
//	{
//		t=a-b;
//		a = b;
//		b = t;
//	}
//	printf("这两个数的最大公约数为:%d\n",b);
//	system("pause");
//	return 0;
//}
//输入两个数求它们的最大公约数
//方法三  穷举法
//创建两个变量,将较大的数的值保存在a中,将较小的数的值保存在b中
//创建一个for循环,创建一个临时变量t,将较小的数的值赋给t;用较大的数较小的数去取余t
//不满足时就t--,直到满足较小的数取余t与较大的数取余t的结果都为0时,跳出循环
//输出的数就为值t就为两个数的最大公约数
#include<stdio.h>
#include<windows.h>
int main()
{
	int a;
	int b;
	int t;
	printf("请输入两个数求它们的最大公约数:");
	scanf_s("%d %d", &a, &b);
	if (a < b)//将较大的数的值放在a中
	{
		t = a;
		a = b;
		b = t;
	}
	for (t = b; a%t || b % t; t--);
	printf("这两个数的最大公约数为:%d\n", t);
	system("pause");
	//return 0;
}

