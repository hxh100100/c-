//#include<iostream>
//#include<string>
//using namespace std;
//
////public     公共权限：类内可以访问 类外可以访问
////protected	 保护权限：类内可以访问 类外不可以访问 儿子也可以访问父亲中的保护内容
////private	 私有权限：类内可以访问 类外不可以访问 
//
//class person
//{
//public:
//	string name;
//
//protected:
//	string car;
//
//private:
//	int password;
//
//public:
//	void func()
//	{
//		name = "库珀";
//		car = "CT";
//		password = 123456;
//	}
//	void show()
//	{
//		cout << "name:" << name << endl;
//		cout << "car:" << car << endl;
//		cout << "password:" << password << endl;
//	}
//};
//
//int main()
//{
//	person p1;
//	p1.func();
//	p1.show();
//
//	system("pause");
//	return 0;
//}