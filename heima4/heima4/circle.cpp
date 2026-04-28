#include "circle.h"

void circle::setr(int r)
{
	m_R = r;
}
int circle::getr()
{
	return m_R;
}
void circle::setcenter(point center)
{
	m_center = center;
}
point circle::getcenter()
{
	return m_center;
}

