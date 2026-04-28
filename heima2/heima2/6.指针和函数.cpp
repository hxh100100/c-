//#include<iostream>
//using namespace std;
//
//void swap(int a,int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//	cout << "swap01 a=" << a << endl;
//	cout << "swap01 b=" << b << endl;
//}
//
//void swap02(int * p1, int * p2)
//{
//	int temp = *p1;
//	*p1 = *p2;
//	*p2 = temp;
//
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	swap(a, b);
//
//	cout << "swap" << endl;
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//
//	swap02(&a, &b);
//	//void swap()的a,b虽然与main中的a,b相同但地址不同
//	//void swap02直接进行地址上的更换
//	cout << "swap02" << endl;
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//
//	system("pause");
//	return 0;
//
//}