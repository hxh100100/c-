#pragma once
#include<iostream>
#include"point.h"
using namespace std;

class circle
{
public:
	void setr(int r);
	
	int getr();
	
	void setcenter(point center);
	
	point getcenter();
	
private:
	int m_R;
	point m_center;
};