//#include<iostream>
//#include<string>
//#include<Ctime>
//using namespace std;
//
//struct student
//{
//	string name;
//	int score;
//};
//
//struct teacher
//{
//	string name;
//	student s[5];
//};
//
//void fuzhi(struct teacher t[], int len)
//{
//	string tname = "ABCDE";
//	for (int i = 0; i < len; i++)
//	{
//		t[i].name = "teacher_";
//		t[i].name += tname[i];
//		for (int j = 0; j < 5; j++)
//		{
//			t[i].s[j].name="student_";
//			t[i].s[j].name += tname[j];
//			int random = rand() % 61+40;   //0+40~(59+1)+40
//			t[i].s[j].score=random;
//		}
//	}
//
//}
//
//void printtea(teacher t[],int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << "老师的姓名：" << t[i].name << endl;
//		cout << "老师辅导的学生信息如下：" << endl;
//		for (int j = 0; j < 5; j++)
//		{
//			cout << "\t学生的姓名：" << t[i].s[j].name << "  " << "学生的成绩：" << t[i].s[j].score << endl;
//		}
//		cout << endl;
//	}
//}
//
//int main()
//{	
//	srand((unsigned int)time(NULL));
//	teacher t[3];
//	int len = sizeof(t) / sizeof(t[0]);
//	fuzhi(t, len);
//	/*teacher t1;
//	teacher t2;
//	teacher t3;*/
//
//	printtea(t, len);
//
//	system("pause");
//	return 0;
//}