//#include<iostream>
//#include<cmath>
//#include"point.h"
//#include"circle.h"
//using namespace std;

//点类
//class point
//{
//public:
//	void setxy(int x,int y)
//	{
//		m_X = x;
//		m_Y = y;
//	}
//	int getx()
//	{
//		return m_X;
//	}
//	int gety()
//	{
//		return m_Y;
//	}
//
//private:
//	int m_X;
//	int m_Y;
//};


////圆类
//class circle
//{
//public:
//	void setr(int r)
//	{
//		m_R = r;
//	}
//	int getr()
//	{
//		return m_R;
//	}
//	void setcenter(point center)
//	{
//		m_center = center;
//	}
//	point getcenter()
//	{
//		return m_center;
//	}
//
//private:
//	int m_R;
//	point m_center;
//};

//void isinyd(circle c,point p)
//{
//	int distance =
//		(c.getcenter().getx() - p.getx()) * (c.getcenter().getx() - p.getx()) +
//		(c.getcenter().gety() - p.gety()) * (c.getcenter().gety() - p.gety());
//
//	int rdistance = c.getr() * c.getr();
//
//	if (distance == rdistance)
//	{
//		cout << "点在圆上"<<endl;
//	}
//	else if (distance > rdistance)
//	{
//		cout << "点在圆外" << endl;
//	}
//	else
//	{
//		cout << "点在圆内" << endl;
//	}
//}

//int main()
//{
//	//点在圆上
//	circle c;
//	c.setr(10);
//	point center;
//	center.setxy(10, 0);
//	c.setcenter(center);
//
//	point p;
//	p.setxy(10, 10);
//
//	isinyd(c, p);
//
//	//点在圆外
//	circle c;
//	c.setr(10);
//	point center;
//	center.setxy(10, 0);
//	c.setcenter(center);
//
//	point p;
//	p.setxy(10, 20);
//
//	isinyd(c, p);
//
//	//点在圆内
//	circle c;
//	c.setr(10);
//	point center;
//	center.setxy(10, 0);
//	c.setcenter(center);
//
//	point p;
//	p.setxy(10, 0);
//
//	isinyd(c, p);
//
//	system("pause");
//	return 0;
//}