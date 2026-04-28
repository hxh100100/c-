//#include<iostream>
//#include<string>
//using namespace std;
//
//结构体在声明的时候是不占用内存的，当用结构体类型创建了变量后，才能向内存申请空间
// 
//struct student
//{
//	string name;
//	int age;
//	double score;
//}s3;
//
////strcut可以不写在创建结构体变量时，但定义时不可省略
////struct student s1
////struct student s2={}
////在定义结构体时顺便创建结构体变量
//int main()
//{
//	//1.
//	struct student s1;
//	s1.name = "张三";
//	s1.age = 18;
//	s1.score = 65;
//	cout << "姓名:" << s1.name << endl << "年龄:" << s1.age << endl << "分数:" << s1.score << endl;
//
//	//2.
//	struct student s2 = { "隶属", 15 , 65 };
//	cout << "姓名:" << s2.name << endl << "年龄:" << s2.age << endl << "分数:" << s2.score << endl;
//
//	//3.
//	s3 = { "空格", 15 , 65 };
//	cout << "姓名:" << s3.name << endl << "年龄:" << s3.age << endl << "分数:" << s3.score << endl;
//
//	//结构体数组
//	struct student stuarr[3] =
//	{
//		{"张三",18,65},
//		{ "隶属" ,15,65},
//		{ "空格", 15 , 65 }
//	};
//	//后期给结构体数组中的元素赋值
//	stuarr[2].name = "数目";
//	stuarr[2].age = 55;
//	stuarr[2].score = 60;
//
//	for (int i = 0; i < 3; i++)
//	{
//		cout << "姓名:" << stuarr[i].name << endl;
//		cout << "年龄:" << stuarr[i].age << endl;
//		cout << "分数:" << stuarr[i].score << endl;
//	}
//
//	student i= { "隶属", 15 , 65 };
//	student* p = &i;
//	cout << "姓名:" << p->name << endl << "年龄:" << p->age << endl << "分数:" << p->score << endl;
//
//
//	system("pause");
//	return 0;
//}