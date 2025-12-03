#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	printf("%5d\n", 123456);
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("a = %d b = %d c = %d\n:", a, b, c);
//	return 0;
//}
//
//int main()
//{
//	int a = 7;
//	int b = 2;
//	float c = 2.0f;
//	printf("%d\n", a / b);
//	printf("%f\n", a / c);
//
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	printf("Name    Age    Gender\n");
//	printf("---------------------\n");
//	printf("Jack    18     man\n");
//	return 0;
//}
//
//
//
//int main()
//{
//	printf("Name\tAge\tGender\n");
//	printf("---------------------\n");
//	printf("Jack\t18\tman\n");
//	return 0;
//}
//
//int main()
//{
//	printf("I lost my cellphone!\n");
//	return 0;;
//}
//
//#include <stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 1;
//	scanf("%d%d", &b, &a);
//	printf("%d,%d\n", b / a, b % a);
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a >= 140)
//	{
//		printf("Genius");
//	}
//	else
//	{
//		printf("Not Genius");
//	}
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	if (a != b)
//	{
//		if (a > b)
//		{
//			printf("%d>%d", a, b);
//		}
//		else
//		{
//			printf("%d<%d", a, b);
//		}
//	}
//	else
//	{
//		printf("%d=%d", a, b);
//	}
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int a = 5;
//	int b = 1;
//	scanf("%d", &b);
//	if (b % a == 0)
//	{
//		printf("YES");
//	}
//	else
//	{
//		printf("NO");
//	}
//	return 0;
//}

////（二）循环题 2：打印 10 个数中的偶数
////输入一个数组，打印所有偶数。
////例：
////输入：1 2 3 4 5 6 7 8 9 10
////输出：2 4 6 8 10
//
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	printf("请输入十个整数：\n");
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	printf("这个数是偶数：");
//
//	for (int i = 0; i < 10; i++)
//	{
//		if (arr[i] % 2 == 0)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//
//	printf("\n这个数是奇数：");
//
//	for (int i = 0; i < 10; i++)
//	{
//		if (arr[i] % 2!= 0)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//
//	return 0;
//
//}

////（三）函数题 1：写一个函数求最小值
////int get_min(int arr[], int size)
////要求：
////返回数组最小的值。
//
//#include<stdio.h>
//
//int get_min(int arr[], int size)
//{
//	int min = arr[0];
//
//	for (int i = 0; i < size; i++)
//	{
//		if (arr[i] < min)
//		{
//			min = arr[0];
//		}
//	}
//	return min;
//}
//
//int main()
//{
//	int arr[10];
//	printf("请输入十个数：\n");
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int min = get_min(arr, 10);
//	printf("最小数为：%d\n", min);
//	return 0;
//}

////函数题 2：写一个函数求数组中某个数字的出现次数
////int count_x(int arr[], int size, int x)
////输入 x，统计 x 出现了几次。
//
//
//#include<stdio.h>
//int count_x(int arr[], int size, int x)
//{
//	int countx = 0;
//	for (int i = 0; i < size; i++)
//	{
//		if (x == arr[i])
//		{
//			countx = countx + 1;
//		}
//	}
//	return countx;
//}
//
//int main()
//{
//	int arr[10];
//	int x = 0;
//	printf("请输入想计算的重复数字：");
//	scanf("%d", &x);
//	printf("请输入十个整数：\n");
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int countx = count_x(arr, 10, x);
//	printf("%d出现的次数为：%d", x, countx);
//	return 0;
//}

////（五）结合题（循环 + 函数）
////写一个函数，让用户输入 10 个数，然后：
////
////求最大值
////
////
////求最小值
////
////
////求平均值
////三项全部输出。
////
////提示：
////int get_max(...)
////int get_min(...)float get_avg(...)
//
//#include<stdio.h>
//int getmax(int arr[], int size)
//{
//	int max = arr[0];
//	for (int i = 0; i < size; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	return max;
//}
//
//int getmin(int arr[], int size)
//{
//	int min = arr[0];
//	for (int i = 0; i < size; i++)
//	{
//		if (min > arr[i])
//		{
//			min = arr[i];
//		}
//	}
//	return min;
//}
//
//float getavg(int arr[], int size)
//{
//	int sum = 0;
//
//	for (int i = 0; i < size; i++)
//	{
//		sum += arr[i];
//	}
//
//	return (float)sum / size;
//}
//
// 
//int main()
//{
//	int arr[10];
//	printf("请输入十个整数：\n");
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int maxarr = getmax(arr, 10);
//	int minarr = getmin(arr, 10);
//	float avgarr = getavg(arr, 10);
//	printf("输入数组的最大值为：%d\n输入数组的最小值为：%d\n输入数组的平均值为：%.4f\n", maxarr, minarr, avgarr);
//	return 0;
//}