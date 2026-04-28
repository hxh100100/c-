//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	//1.const修饰指针---常量指针
//	//2.const修饰常量---指针常量
//	//3.const即修饰指针，又修饰常量
//
//	//1.常量指针     const int *
//	//特点：
//	//指针指向的内存可以修改，但指针指向的值不可以改
//	const int * p1 = &a;
//	//*p = 20;  xxx      const * p1
//	p1 = &b;
//
//	//2.指针常量     const p2
//	//特点：
//	//指针指向的内存不可以改，但指向的值可以改
//	int * p2 = &a;
//	//p2=&b      xxx     const p2
//	*p2 = 60;
//
//	//3.
//	const int* const p3 = &a;
//
//
//	system("pause");
//	return 0;
//}