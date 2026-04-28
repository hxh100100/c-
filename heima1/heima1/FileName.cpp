//#include<iostream>
//using namespace std;
//#include<ctime>
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int a = rand() % 100 + 1;
//	int b;
//	cout << "这是一个猜数字的小游戏"<<endl;
//	int c = 1;
//	cout << "您一共有10次机会" << endl;
//	cout << "请猜测一个数字：";
//	cin >> b;
//
//	while (c < 11)
//	{
//		if (b != a)
//		{
//			if (b > a)
//			{
//				cout << "猜大了" << endl;
//				cout << endl;
//				if (c == 10)
//				{
//					break;
//				}
//				else
//				{
//					cout << "还有" << 10 - c << "次机会" << endl;
//					cout << "请再猜一次:";
//					cin >> b;
//					c++;
//				}
//			}
//			else
//			{
//				cout << "猜小了" << endl;
//				cout << endl;
//				if (c == 10)
//				{
//					break;
//				}
//				else
//				{
//					cout << "还有" << 10 - c << "次机会" << endl;
//					cout << "请再猜一次:";
//					cin >> b;
//					c++;
//				}
//			}
//		}
//		else
//		{
//			cout << "猜对了" << endl;
//			break;
//		}
//	}
//	if (b != a)
//	{
//		if (c == 10)
//		{
//			cout << "很遗憾，机会用完了！答案是：" << a << endl;
//		}
//	}
//	system("pause");
//	return 0;
//}