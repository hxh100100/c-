//#include<iostream>
//#include<string>
//using namespace std;
//
//void showmenu()
//{
//	cout << "-----------------------------------" << endl;
//	cout << "--------  1. 添加联系人  ----------" << endl;
//	cout << "--------  2. 显示联系人  ----------" << endl;
//	cout << "--------  3. 删除联系人  ----------" << endl;
//	cout << "--------  4. 查找联系人  ----------" << endl;
//	cout << "--------  5. 修改联系人  ----------" << endl;
//	cout << "--------  6. 清空联系人  ----------" << endl;
//	cout << "--------  0. 退出通讯录  ----------" << endl;
//	cout << "-----------------------------------" << endl;
//}
//
////联系人结构体
//struct people
//{
//	string name;
//	int sex;
//	int age;
//	long int phone;
//	string adress;
//};
//
////通讯录结构体
//struct adrbook
//{
//	people aer[100];
//	long int count;
//};
//
////1.添加联系人
//void addpeople(adrbook *p)
//{
//	if (p->count >= 100)
//	{
//		cout << "通讯录人数已满" << endl;
//		return;
//	}
//	else
//	{
//		string name;
//		cout << "请输入姓名：" << endl;
//		cin >> name;
//		p->aer[p->count].name = name;
//
//		int sex;
//		cout << "请输入性别" << endl;
//		cout << "男：1 ， 女：0" << endl;
//		while (true)
//		{
//			cin >> sex;
//			if (sex == 1 || sex == 0)
//			{
//				p->aer[p->count].sex = sex;
//				break;
//			}
//			cout << "输入有误，请重新输入" << endl;
//		}
//
//		int age;
//		cout << "请输入年龄：" << endl;
//		cin >> age;
//		p->aer[p->count].age = age;
//
//		long int phone;
//		cout << "请输入电话号码：" << endl;
//		cin >> phone;
//		p->aer[p->count].phone = phone;
//
//		string adress;
//		cout << "请输入地址：" << endl;
//		cin >> adress;
//		p->aer[p->count].adress = adress;
//
//		cout << "添加成功" << endl;
//
//		system("pause");//请按任意键继续
//		system("cls");//清屏
//	}
//}
//
////2.显示联系人
//void printple(adrbook * a)
//{
//	if (a->count==0)
//	{
//		cout << "当前通讯录为空" << endl;
//		system("pause");
//		system("cls");
//	}
//	else
//	{
//		string sex;
//		for (int i = 0; i < a->count; i++)
//		{
//			//if (a->aer[i].sex == 0)
//			//{
//			//	sex = "男";
//			//}
//			//else if(a->aer[i].sex == 1)
//			//{
//			//	sex = "女";
//			//}
//			cout << "姓名：" << a->aer[i].name << '\t' << "年龄：" << a->aer[i].age << '\t' << "性别：" << (a->aer[i].sex == 1 ? "男":"女") << '\t' << "电话号码：" << a->aer[i].phone << '\t' << "地址：" << a->aer[i].adress << endl;
//		}
//		system("pause");
//		system("cls");
//	}
//}
//
////检测是否存在输入的联系人
//int checkple(adrbook* p,string name)
//{
//	for (int i = 0; i < p->count; i++)
//	{
//		if (p->aer[i].name == name)
//		{
//			return i;
//		}
//	}
//	return -1;
//}
//
////3.删除联系人
//void cutdown(adrbook * p)
//{
//	string name;
//	cout << "请输入想要删除的联系人姓名：" << endl;
//	cin >> name;
//
//	int a = checkple(p, name);
//	if (a!=-1)
//	{
//		for (int i = a; i < p->count; i++)
//		{
//			p->aer[i] = p->aer[i + 1];
//		}
//		p->count--;
//		cout << "删除成功" << endl;
//		system("pause");
//		system("cls");
//	}
//	else
//	{
//		cout << "查无此人" << endl;
//		cout << endl;
//		system("pause");
//		system("cls");
//	}
//}
//
////4.查找联系人
//void lookfor(adrbook *p)
//{
//	string name;
//	cout << "请输入想要查找的联系人姓名：" << endl;
//	cin >> name;
//
//	int a=checkple(p, name);
//
//	if (a != -1)
//	{
//		cout << "姓名：" << p->aer[a].name << endl << "年龄：" << p->aer[a].age << endl << "性别：" << (p->aer[a].sex == 1 ? "男" : "女") << endl << "电话号码：" << p->aer[a].phone << endl << "地址：" << p->aer[a].adress << endl;
//		cout << endl;
//		system("pause");
//		system("cls");
//	}
//	else
//	{
//		cout << "查无此人" << endl;
//		cout << endl;
//		system("pause");
//		system("cls");
//	}
//}
//
////5.修改联系人
//void changeple(adrbook* p)
//{
//	string name;
//	cout << "请输入想要修改的联系人姓名：" << endl;
//	cin >> name;
//
//	int a= checkple(p, name);
//
//	if (a != -1)
//	{
//		string name;
//		cout << "请重新输入姓名：" << endl;
//		cin >> name;
//		p->aer[a].name = name;
//
//		int sex;
//		cout << "请重新输入性别：" << endl;
//		while (true)
//		{
//			cout << "男：1 ， 女：0" << endl;
//			cin >> sex;
//			if (sex == 1 || sex == 0)
//			{
//				p->aer[a].sex = sex;
//				break;
//			}
//			cout << "输入有误，请重新输入" << endl;
//		}
//
//		int age;
//		cout << "请重新输入年龄：" << endl;
//		cin >> age;
//		p->aer[a].age = age;
//
//		long int phone;
//		cout << "请重新输入电话号码：" << endl;
//		cin >> phone;
//		p->aer[a].phone = phone;
//
//		string adress;
//		cout << "请重新输入地址：" << endl;
//		cin >> adress;
//		p->aer[a].adress = adress;
//
//		cout << endl;
//		system("pause");
//		system("cls");
//	}
//	else
//	{
//		cout << "查无此人" << endl;
//		cout << endl;
//		system("pause");
//		system("cls");
//	}
//}
//
////6.清除所有联系人
//void cleanall(adrbook* p)
//{
//	p->count = 0;
//	cout << "通讯录已清空" << endl;
//	cout << endl;
//
//	system("pause");
//	system("cls");
//}
//
//
//int main()
//{
//	adrbook adb;
//	adb.count = 0;
//
//	int select;
//
//	while (true)
//	{
//		showmenu();
//
//		cin >> select;
//
//		switch (select)
//		{
//		case 1:
//			addpeople(&adb);
//			adb.count++;
//			break;
//		case 2:
//			printple(&adb);
//			break;
//		case 3:
//			cutdown(&adb);
//			system("pause");
//			system("cls");
//			break;
//		case 4:
//			lookfor(&adb);
//			break;
//		case 5:
//			changeple(&adb);
//			break;
//		case 6:
//			cleanall(&adb);
//			break;
//		case 0:
//			cout << "欢迎下次使用" << endl;
//			system("pause");
//			return 0;
//			break;
//		}
//	}
//}