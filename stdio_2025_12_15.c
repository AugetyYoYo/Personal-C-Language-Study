#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
////写一个代码打印1 - 100之间所有3的倍数的数字
//
//int main()
//{
//	for (int i = 0; i < 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//
////写代码将三个整数数按从大到小输出。
////
////例如：
////
////输入：2 3 1
//
////输出：3 2 1
//int main()
//{
//	int a, b, c;
//	printf("请输入三个数：\n");
//	scanf("%d %d %d", &a, &b, &c);
//	if (a >= b && a >= c)
//	{
//		if (b >= c)
//		{
//			printf("%d %d %d\n", a, b, c);
//		}
//		else
//		{
//			printf("%d %d %d\n", a, c, b);
//		}
//	}
//	else if (b >= a && b >= c)
//	{
//		if (a >= c)
//		{
//			printf("%d %d %d\n", b, a, c);
//		}
//		else
//		{
//			printf("%d %d %d\n", b, c, a);
//		}
//	}
//	else
//	{
//		if (a >= b)
//		{
//			printf("%d %d %d\n", c, a, b);
//		}
//		else
//		{
//			printf("%d %d %d\n", c, b, a);
//		}
//	}
//	
//}
//描述
//KiKi想知道，已经给出的三条边
//a
//a、
//b
//b、
//c
//c 能否构成一个非退化三角形，如果能构成，判断三角形的类型（等边三角形、等腰三角形或普通三角形）。
//
//【名词解释】
//非退化三角形：三条边长均大于
//0
//0 且任意两边之和均大于第三边的三角形。
//输入描述：
//在一行上输入三个整数a, b, c(0 < a, b, c < 10)，表示三角形的三条边。
//	输出描述：
//	在一行上输出一个字符串，表示三角形的类型，具体地：
//	∙
//
//	∙如果三角形是等边三角形，则输出
//	Equilateral
//
//	triangle!
//	Equilateral triangle!；
//	∙
//
//	∙如果三角形是等腰三角形，则输出
//	Isosceles
//
//	triangle!
//	Isosceles triangle!；
//	∙
//
//	∙如果三角形是普通三角形，则输出
//	Ordinary
//
//	triangle!
//	Ordinary triangle!；
//	∙
//
//	∙如果不能构成非退化三角形，则输出
//	Not
//
//	a
//
//	triangle!
//	Not a triangle!。

//int main()
//{
//	int a, b, c;
//	printf("在一行上输入三个整数 a, b, c(0 < a, b, c < 10)，表示三角形的三条边：\n");
//	scanf("%d %d %d", &a, &b, &c);
//	if (a <= 0 || b <= 0 || c <= 0 || a > 10 || b > 10 || c > 10)
//	{
//		printf("请按规定输入！\n");
//		return 0;
//	}
//	else if (a == b && b == c)
//	{
//		printf("Equilateral triangle!\n");
//		return 0;
//	}
//	else if ((a == b && b != c) || (a == c && b != a) || (b == c && a != b))
//	{
//		printf("Isosceles triangle!\n");
//		return 0;
//	}
//	else if (a != b && a != c && b != c && ((a + b > c) && (a + c > b) && (b + c > a)))
//	{
//		printf("Ordinary triangle!\n");
//	}
//	else
//	{
//		printf("Not a triangle!\n");
//	}
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//    int a, b, c;
//    scanf("%d %d %d", &a, &b, &c);
//
//    if (a + b <= c || a + c <= b || b + c <= a)
//    {
//        printf("Not a triangle!\n");
//    }
//    else if (a == b && b == c)
//    {
//        printf("Equilateral triangle!\n");
//    }
//    else if (a == b || a == c || b == c)
//    {
//        printf("Isosceles triangle!\n");
//    }
//    else
//    {
//        printf("Ordinary triangle!\n");
//    }
//
//    return 0;
//}
////在屏幕上输出9*9乘法口诀表
//int main()
//{
//	printf("9*9乘法口诀表：\n");
//	for (int i = 1; i <= 9; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d ", j, i, j * i);
//		}
//		printf("\n");
//	}
//	return 0;
//}
////求10 个整数中最大值
//int main()
//{
//	int arr[10] = { 0 };
//	int max = arr[0];
//	printf("请输入十个数：\n");
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int j = 0; j < 10; j++)
//	{
//		if (arr[j] >= max)
//		{
//			max = arr[j];
//		}
//	}
//	printf("最大值为：%d\n", max);
//	return 0;
//}