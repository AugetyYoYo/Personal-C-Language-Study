#define _CRT_SECURE_NO_WARNINGS
////① 输入两个整数，输出它们的和、差、积、商（整型）
////要求：使用 scanf、printf。
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入两个整数，以完成他们和差积商的运算：\n");
//	scanf("%d %d",&a,&b);
//	printf("和：%d\n",a+b);
//	printf("差：%d\n", a - b);
//	printf("积：%d\n",a*b);
//	printf("商：%d\n", a / b);
//	return 0;
//}

////② 输入一个摄氏度 C，计算并输出华氏度 F
////公式：F = C * 9 / 5 + 32
////要求：使用 float
//#include<stdio.h>
//int main()
//{
//	float c = 0;
//	printf("请输入摄氏度：\n");
//	scanf("%f", &c);
//	float f = 0;
//	f = c * 9 / 5 + 32;
//	printf("华氏度为：%.2f\n", f);
//	return 0;
//}

////③ 输入圆的半径 r，计算圆的面积和周长
////要求：
////
////面积：PI* r* r
////
////
////周长：2* PI* r
////
////
////使用 #define PI 3.14159
////
////
////使用 % .2f 保留两位小数
//#include<stdio.h>
//#define PI 3.14159
//int main()
//{
//	float r = 0;
//	printf("请输入圆的半径：\n");
//	scanf("%f", &r);
//	float s = PI * r * r;
//	float l = PI * r * 2;
//	printf("该圆的面积为：%.2f\n该圆的周长为：%.2f\n", s, l);
//	return 0;
//}

////④ 输入三个课程成绩，求平均分（保留两位小数）
////要求：用 float
// 
//#include<stdio.h>
//int main()
//{
//	float a = 0;
//	float b = 0;
//	float c = 0;
//	printf("请依次输入三门课程成绩（用空格分隔）：\n");
//	scanf("%f %f %f", &a, &b, &c);
//	float d = a + b + c;
//	float e = d / 3;
//	printf("平均成绩为：%.2f\n", e);
//	return 0;
//}

////⑤ 写一个函数 add(a, b)，返回两个整数的和
////要求：
////
////写函数声明
////
////
////写函数定义
////
////
////在 main 里调用
////
////示例：
////int add(int a, int b) {
////    return a + b;
////}
//
//#include<stdio.h>
//int add(int a, int b) {
//	return a + b;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入两个数：\n");
//	scanf("%d %d", &a, &b);
//	printf("他们的和为：%d\n", add(a,b));
//	return 0;
//}
