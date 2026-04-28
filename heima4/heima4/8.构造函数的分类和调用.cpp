#include<iostream>
using namespace std;

//按参数分为：有参构造和无参构造
//按类型分为：普通构造和拷贝构造

//调用方式：括号法，显示法，隐式转换法

class person
{
public:
	//构造函数
	person()
	{
		cout << "person类的无参构造函数的调用" << endl;
	}
	person(int x)
	{
		age = x;
		cout << "person类的有参构造函数的调用" << endl;
	}

	//拷贝构造函数
	person(const person &p)//给新的类复制输入的已有类属性，const与&防止改变已有类
	{
		age = p.age;
		cout << "person类的拷贝构造函数的调用" << endl;
	}

	~person()
	{
		cout << "person析构函数的调用" << endl;
	}
private:
	int age;
};

void test01()
{
	//1.括号法
	//person p1;//(默认构造函数的调用)
	//person p2(10);//(有参构造函数的调用)
	//person p3(p2);//(拷贝构造函数)

	//注意事项：
	//调用默认构造函数时，不要加()
	//不然编译器会认为时函数的声明

	//2.显示法
	//person p1;
	//person p2 = person(10);
	//person p3 = person(p2);

	//person(10)//匿名对象

	//注意事项：
	//不要利用拷贝构造函数初始化匿名对象，编译器会认为person p3==person(p3)

	//3.隐式转换法
	person p1;
	person p2 = 10;
	person p3 = p2;
}

int main()
{
	test01();


	return 0;
}