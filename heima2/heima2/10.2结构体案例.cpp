#include<iostream>
#include<string>
using namespace std;

struct hero
{
	string name;
	int age;
	string sex;
};

void bottle(hero h[], int len)
{
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (h[j].age > h[j + 1].age)
			{
				hero temp = h[j + 1];
				h[j + 1] = h[j];
				h[j] = temp;
			}
		}
	}
}

void printh(hero h[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "姓名：" << h[i].name << " " << "年龄：" << h[i].age << " " << "性别：" << h[i].sex << endl;
	}
}

int main()
{
	hero h[5] = 
	{
		{"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"貂蝉",19,"女"}
	};
	
	int len = sizeof(h) / sizeof(h[0]);

	for (int i = 0; i < len; i++)
	{
		cout << "姓名：" << h[i].name << " " << "年龄：" << h[i].age << " " << "性别：" << h[i].sex << endl;
	}

	cout << endl;

	bottle(h, len);
	printh(h, len);


	system("pause");
	return 0;
}