//#include<iostream>
//#include<string>
//using namespace std;
//
//struct student
//{
//	string name;
//	int age;
//	int score;
//};
//
//struct teacher
//{
//	int id;
//	string name;
//	int age;
//	struct student stu;//储存更多的数据就用结构体数组stu[3]
//};
//
////1.值传递
//void printacc1(teacher t)
//{
//	cout << "姓名:  " << t.name << endl << "年龄:  " << t.age << endl << "id:  " << t.id << endl;
//	cout << "姓名:" << t.stu.name << endl << "年龄:" << t.stu.age << endl << "分数:" << t.stu.score << endl;
//}
//
//void printacc2(teacher* p)
//{
//	p->age = 100;
//	cout << "姓名:  " << p->name << endl << "年龄:  " << p->age << endl << "id:  " << p->id << endl;
//	cout << "姓名:" << p->stu.name << endl << "年龄:" << p->stu.age << endl << "分数:" << p->stu.score << endl;
//}
//
//int main()
//{
//	teacher t;
//	t.name = "健康";
//	t.age = 18;
//	t.id = 55698;
//	t.stu.age = 18;
//	t.stu.name = "落花";
//	t.stu.score = 86;
//	/*cout << "姓名:  " << t.name << endl << "年龄:  " << t.age << endl << "id:  " << t.id << endl;
//	cout << "姓名:" << t.stu.name << endl << "年龄:" << t.stu.age << endl << "分数:" << t.stu.score << endl;*/
//
//	printacc1(t);
//	printacc2(&t);
//
//	system("pause");
//	return 0;
//}