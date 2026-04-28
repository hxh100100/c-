//#include<iostream>
//#include<string>
//using namespace std;
//
////成员属性设置为私有:
////1.可以自己控制读取权限
////2.对于权限，可以检测数据的有效性
//
//class person
//{
//private:
//	string name;
//
//	int age=18;
//
//	string idol;
//
//public:
//	string getname()
//	{
//		return name;
//	}
//	void setname(string n_name)
//	{
//		/*cout << "请输入姓名：";
//		cin >> name;
//		cout << endl;
//		cout << "请输入年龄：";
//		cin >> age;
//		cout << endl;
//		cout << "请输入idol：";
//		cin >> idol;
//		cout << endl;*/
//		name =n_name;
//	}
//	//2.对于权限，可以检测数据的有效性
//	void setage(int kage)
//	{
//		if (kage < 0 || kage>150)
//		{
//			cout << "输入有误，请重新赋值" << endl;
//			return;
//		}
//		age = kage;
//	}
//	int getage()
//	{
//		return age;
//	}
//};
//
//int main()
//{
//	person p1;
//	p1.setname("张三");
//	p1.setage(160);
//	cout << p1.getname() << endl;
//	cout << p1.getage() << endl;
//
//	system("pause");
//	return 0;
//}