#pragma once //防止头文件重复包含
#include<iostream>
using namespace std;
//记得加分号

class point
{
public:
	void setxy(int x, int y);
	
	int getx();
	
	int gety();
	

private:
	int m_X;
	int m_Y;
};