#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <string.h>
#include <ctime>

using namespace std;

//����һ���г�����Ա��������
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
		cout << "score��" << m_score << endl;
	}

	void myScoreUp()
	{
		m_score++;
	}

private:
	int m_score = 0;
	
};

//�ǳ�������Ҳ���Ե��ó���������������ֱ�ӱ����߲���ͨ�����룩
void test1()
{
	Stu stu1;
	stu1.myPrintScore();
}


//�ڳ�����Ա�����е��÷ǳ�������
int main()
{
	test1();

	system("pause");
	return 0;
}