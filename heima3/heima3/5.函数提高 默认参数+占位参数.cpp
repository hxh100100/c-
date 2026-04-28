//#include<iostream>
//using namespace std;
//
//int funca(int a,int b=20,int c=30)
//{
//	return a + b + c;
//}
//
////如果某个位置已经有了默认参数，那么从这个位置往后，从左到右都必须有默认值
////int funca2(int a, int b = 20, int c)
////{
////	return a + b + c;
////}错误
//
////如果函数声明中有默认参数
////函数实现就不能有默认参数
//int func2(int a = 10, int b = 20);
//
////占位参数
//void furc(int a, int)
//{
//	cout << "cnwjkcn" << endl;
//}
//
////占位参数+默认参数
//void furc1(int a, int =10)
//{
//	cout << "cnwjkcn" << endl;
//}
//
//int main()
//{
//	cout << funca(10,30,20) << endl;
//
//	furc(10, 10);
//	furc1(10);
//
//	system("pause");
//	return 0;
//}
//
//int func2(int a, int b)
//{
//	return 0;
//}