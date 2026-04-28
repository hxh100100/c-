#include<iostream>
using namespace std;

int main()
{
	/*int arr1[2][3];
	arr1[0][0] = 1;
	arr1[0][1] = 2;
	arr1[0][2] = 3;
	arr1[1][0] = 4;
	arr1[1][1] = 5;
	arr1[1][2] = 6;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr1[i][j] << " ";
		}
		cout << endl;
	}*/

	int arr2[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr2[i][j] << " ";
		}
		cout << endl;
	}

	/*int arr3[2][3] = { 1,2,3,4,5,6 };
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr3[i][j] << " ";
		}
		cout << endl;
	}

	int arr4[][3] = { 1,2,3,4,5,6 };*/

	cout << "二维数组的储存大小:" << sizeof(arr2) << endl;
	cout << "二维数组第一行内存空间为：" << sizeof(arr2[0]) << endl;
	cout << "二维数组第一个元素占用的内存大小为：" << sizeof(arr2[0][0]) << endl;
	cout << "该数组的行数为：" << sizeof(arr2) / sizeof(arr2[0])<<endl;
	cout << "该数组的列数为：" << sizeof(arr2[0]) / sizeof(arr2[0][0]) << endl;

	cout << "该数组的首地址为：" << (int)arr2 << endl;
	cout << "该数组第一行首地址为：" << (int)arr2[0] << endl;
	cout << "该数组第二行首地址为：" << (int)arr2[1] << endl;

	cout << "该数组第一个元素首地址为：" << (int)arr2[0][0] << endl;


	int score[3][3] =
	{
		{100,100,100},
		{90,50,100},
		{60,70,80}
	};

	
	string names[3] = { "小霞", "小和" ,"小年" };

	int arr[3];
	for (int i = 0; i < 3; i++)
	{
		int sum = 0;
		for (int j = 0; j < 3; j++)
		{
			sum += score[i][j];
		}
		arr[i] = sum;
	}

	for (int i = 0; i < 3; i++)
	{
		cout << names[i] <<"的总成绩为:" << arr[i] << endl;
	}
	
	system("pause");
	return 0;
}