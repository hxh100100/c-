//#include<iostream>
//using namespace std;
//
//void funs(int &ref)
//{
//	ref = 100;//ref是引用，转变为*ref=20;
//}
//
//int main()
//{
//	int a = 20;
//
//	int& ref = a;
//	//自动转换为 int* const ref = &a;
//	//指针常量指向不可变（引用初始化后不可改变的原因）
//	ref = 0;
//
//	cout << "a= " << a << endl;
//	cout << "ref= " << ref << endl;
//
//	system("pause");
//	return 0;
//}