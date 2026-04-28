//#include<iostream>
//using namespace std;
//
//class cude
//{
//public:
//	void setL(int L)
//	{
//		m_L = L;
//	}
//	int getL()
//	{
//		return m_L;
//	}
//
//	void setW(int W)
//	{
//		m_W = W;
//	}
//	int getW()
//	{
//		return m_W;
//	}
//
//	void setH(int H)
//	{
//		m_H = H;
//	}
//	int getH()
//	{
//		return m_H;
//	}
//
//	int caclum()
//	{
//		return 2 * m_H * m_L + 2 * m_H * m_W + 2 * m_W * m_L;
//	}
//
//	int caclut()
//	{
//		return m_H * m_W * m_L;
//	}
//
//	bool isdf(cude s2)
//	{
//		if (m_H == s2.getH() && m_L == s2.getL() && m_W == s2.getW())
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//
//private:
//	int m_L;
//	int m_W;
//	int m_H;
//
//};
//
////利用全局函数判断 两个立方体是否相等
//bool isdf(cude s1, cude s2)
//{
//	if (s1.getH() == s2.getH() && s1.getL() == s2.getL() && s1.getW() == s2.getW())
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
//
//int main()
//{
//	cude s1;
//	cude s2;
//	s1.setH(10);
//	s1.setL(10);
//	s1.setW(10);
//	cout << "s1的面积：" << s1.caclum() << endl;
//	cout << "s1的体积：" << s1.caclut() << endl;
//
//	s2.setH(10);
//	s2.setL(10);
//	s2.setW(10);
//
//	if (isdf(s1, s2))
//	{
//		cout << "s1==s2" << endl;
//	}
//	else
//	{
//		cout << "s1!=s2" << endl;
//	}
//
//	return 0;
//}