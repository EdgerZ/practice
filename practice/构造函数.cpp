//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <cstring>
//#include <string.h>
//#include <cmath>
//#include <ctime>
//
//using namespace std;
//
//class Person
//{
//public:
//	Person()
//	{
//		cout << "Ĭ�Ϲ��캯������" << endl;
//	}
//	Person(int a) :m_a(a)
//	{
//		cout << "�вι��캯������" << endl;
//	}
//
//	explicit Person(const Person& p)
//	{
//		cout << "�������캯������" << endl;
//		m_a = p.m_a;
//	}
//
//	~Person()
//	{
//		cout << "������������" << endl;
//	}
//	int getM_a()
//	{
//		return m_a;
//	}
//	void setM_a(int a)
//	{
//		m_a = a;
//	}
//private:
//	int m_a = 0;
//};
//
////��֤��ջ��ʵ���������ʱ���ܷ�ʹ���вι���
//void test1()
//{
//	Person p[10] = { Person(10),Person(20) };
//	for (int i = 0; i < 10; i++)
//	{
//		cout << p[i].getM_a() << endl;
//	}
//	return;
//}
//
////��֤ʹ��explicit�����ܷ����ƿ����������ʽ����ת��
//void test2()
//{
//	Person p1;
//	p1.setM_a(1);
//	Person p2 = p1;
//}
//
//int main()
//{
//	test1();
//	test2();
//
//	system("pause");
//	return 0;
//}