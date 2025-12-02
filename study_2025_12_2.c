#define _CRT_SECURE_NO_WARNINGS
////⑥ 写一个函数，输入数组 10 个元素，求数组的最大值
////要求：
////
////使用 int arr[10]
////
////
////用 for 循环
//
//#include<stdio.h>
//int get_max(int arr[] , int size)
//{
//	int max = arr[0];
//	for (int i = 1; i < size; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	return max;
//}
//
//
//int main()
//{
//	int arr[10];
//	printf("请输入10个整数：\n");
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	int max = get_max(arr, 10);
//
//	printf("数组的最大值为：%d\n", max);
//
//	return 0;
//}

////（一）循环题 1：求 1～100 的和
////
////要求：
////用 for 循环打印 1 到 100 的和。
//
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//
//	for (int i = 1; i <= 100; i++)
//	{
//		a = a + i;
//		printf("每次累加a被赋予的值为：%d\n", a);
//	}
//
//	printf("1到100累加为：%d\n", a);
//
//	return 0;
//}

////（二）循环题 2：打印 10 个数中的偶数
////输入一个数组，打印所有偶数。
////例：
////输入：1 2 3 4 5 6 7 8 9 10
////输出：2 4 6 8 10

//#include<stdio.h>
//int main()
//{
//    int arr[10] = { 0 };
//
//    printf("请输入十个整数：\n");
//
//    for (int i = 0; i < 10; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//
//    for (int i = 0; i < 10; i++)
//    {
//        printf("数组中有；%d\n", arr[i]);
//    }
//    
//    return 0;
//}

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
//	printf("这个数是奇数：");
//
//	for (int i = 0; i < 10; i++)
//	{
//		if (arr[i] % 2 != 0)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//	return 0;
//}