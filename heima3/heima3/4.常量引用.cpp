//#include<iostream>
//using namespace std;
//
////用const修饰，来防止函数体内的误操作
//void showerr(const int & val)
//{
//	cout << "val= " << val << endl;
//}
//
//int main()
//{
//	//常量引用
//	//用来修饰形参，防止误操作
//	int a = 10;
//	const int& ref = 10;
//	//加上const后，编译器将代码修改为
//	//int temp=10;
//	//const int& ref=temp;
//	//并且不能修改值
//
//	showerr(a);
//	cout << "a= " << a << endl;
//
//	system("pause");
//	return 0;
//
//}