#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <string.h>
#include <ctime>

using namespace std;

//创建一个有常量成员函数的类
struct Stu
{
public:
	Stu()
	{
	}
	~Stu()
	{}

	void myPrintScore()const
	{
		cout << "score：" << m_score << endl;
	}

	void myScoreUp()
	{
		m_score++;
	}

private:
	int m_score = 0;
	
};

//非常量对象也可以调用常量方法（编译器直接报红线不能通过编译）
void test1()
{
	Stu stu1;
	stu1.myPrintScore();
}


//在常量成员函数中调用非常量方法
int main()
{
	test1();

	system("pause");
	return 0;
}