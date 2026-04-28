//#include<iostream>
//using namespace std;

////如果要返回多个值
////可以使用引传递
////引用传递
//int test01(int a,int &b)
//{
//	a *= 2;
//	b += 2;
//	return a;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 10;
//	a = test01(a, b);
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//
//	return 0;
//}

////不能返回局部变量的引用
//int& test02()
//{
//	int a = 20;//局部变量存放在四区的栈区，如果返回则保留一次后删除
//	return a;
//}
//
//int& test03()		//int& test03()使得接受返回值的对象为引用
//{
//	static int a = 20;//静态变量存放于全局区，全局区的数据在程序结束后系统释放
//	return a;
//}
//
//int main()
//{
//	//引用必须初始化
//	//引用初始化后，就不可以改变
//	int a = 20;
//	int c = 50;
//	//int& b = a;
//	//b = c;//赋值操作
//	cout << a << endl;
//	cout << c << endl;
//
//	test01(a, c);
//	cout << a << endl;
//	cout << c << endl;
//
//	int& res01 = test03();
//	cout << "res01= " << res01 << endl;
//	cout << "res01= " << res01 << endl;
//
//	test03() = 100;//如果函数的返回值为引用，这个函数调用可以作为左值
//	cout << "res01= " << res01 << endl;
//	cout << "res01= " << res01 << endl;
//
//	system("pause");
//	return 0;
//}