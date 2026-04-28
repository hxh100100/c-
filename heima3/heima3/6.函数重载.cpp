//#include<iostream>
//using namespace std;
//
////函数重载
////函数名相同，提高复用率
//
////条件
////1.同一个作用域下
////2.函数名称相同
////3.函数参数类型不同，或个数不同，或顺序不同
//void func()
//{
//	cout << "func的调用" << endl;
//}
//
//void func(int a)
//{
//	cout << "func(int a)的调用" << endl;
//}
//
////函数的返回值不可以作为函数重载条件
//
//void fruc(int& a)
//{
//	cout << "fruc(int& a)" << endl;
//}
//
//void fruc(const int& a)
//{
//	cout << "fruc(const int& a)" << endl;
//}
//
////函数重载+默认函数
////会出现二义性，尽量避免
//void fiuyg(int a)
//{
//	cout << "fiuyg(int a)" << endl;
//}
//
//void fiuyg(int a,int b=10)
//{
//	cout << "fiuyg(int a)" << endl;
//}
//
//
//int main()
//{
//	func();
//	func(10);
//
//	int a = 10;
//	fruc(a);
//	fruc(10);
//
//
//	system("pause");
//	return 0;
//}