#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//typedef struct
//{
//    char name[20];
//    int age;
//    char sex[10];
//    char tele[20];
//} Stu;
//
//void print(const Stu* ps)
//{
//    printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tele);
//}
//
//int main(void)
//{
//    Stu s = { "zhangsan", 20, "nan", "15596668862" };
//    print(&s);
//    return 0;
//}
//

////1️⃣ 判断奇偶
////写一个函数，传入一个整数 n，如果是偶数返回 1，否则返回 0。
////示例：
////输入 4 → 返回 1
////输入 7 → 返回 0
//
//#include <stdio.h>
//
//int a(int n)
//{
//	if (n % 2 == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
////也可以写成这样
//
////int a(int n)
////{
////	return n % 2 == 0;
////}
////
//
//int main()
//{
//	int n = 0;
//	printf("请输入一个整数：\n");
//	scanf("%d", &n);
//	int x = a(n);
//	printf("%d\n", x);
//	return 0;
//}

////2️⃣ 找出数组中的最大值
////给定一个 int 数组，长度固定为 10，找出最大值。
//
//#include <stdio.h>
//int main()
//{
//	int arr[10];
//	int max = 0;
//	printf("请输入十个整数：\n");
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//
//	max = arr[0];
//
//	for (int i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("最大数为：%d\n", max);
//	return 0;
//}

////3️⃣ 统计字符出现次数
////给定字符串 "hello world"
////统计字符 l 出现了多少次。
//
//#include <stdio.h>
//int main()
//{
//	char a[] = "hello world";
//	int x = 0;
//	for (int i = 0; i < 12; i++)
//	{
//		if (a[i] == 'l')
//		{
//			x = x + 1;
//		}
//	}
//	printf("l一共出现了%d次\n", x);
//	return 0;
//}
//
////也可以这样写：
//
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//    char a[] = "hello world";
//    int x = 0;
//    int len = strlen(a);
//
//    for (int i = 0; i < len; i++)
//    {
//        if (a[i] == 'l')
//        {
//            x = x + 1;
//        }
//    }
//    printf("l一共出现了%d次\n", x);
//    return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//    char a[] = "hello world";
//    int x = 0;
//
//    for (int i = 0; a[i] != '\0'; i++)
//    {
//        if (a[i] == 'l')
//        {
//            x++;
//        }
//    }
//
//    printf("l一共出现了%d次\n", x);
//    return 0;
//}
//

////4️⃣ 求 1~n 的和（用 for）
////输入 n，计算 1 + 2 + ... + n。
//
//#include<stdio.h>
//int a(int n)
//{
//	int he = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		he = he + i;
//	}
//	return he;
//}
//
////也可以这样写：
//int a(int n)
//{
//	return n * (n + 1) / 2;
//}
//
//
//int main()
//{
//	int n = 0;
//	int m = 0;
//	printf("请输入一个数字：\n");
//	scanf("%d", &n);
//	printf("从1加2加3...加到你输入的值为：%d\n", m = a(n));
//	return 0;
//}

////打印一个星号三角形
////输入高度 h，例如 4：
////*
////*****
////****
//
//#include <stdio.h>
//
//int main() {
//    int h, i, j;
//
//    printf("请输入三角形的高度: ");
//    scanf("%d", &h);
//
//    for (i = 1; i <= h; i++)
//    {
//
//        for (j = 1; j <= h - i; j++)
//        {
//            printf(" ");
//        }
//
//        for (j = 1; j <= 2 * i - 1; j++)
//        {
//            printf("*");
//        }
//
//        printf("\n");
//    }
//
//    return 0;
//}
//