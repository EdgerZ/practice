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
//		cout << "默认构造函数调用" << endl;
//	}
//	Person(int a) :m_a(a)
//	{
//		cout << "有参构造函数调用" << endl;
//	}
//
//	explicit Person(const Person& p)
//	{
//		cout << "拷贝构造函数调用" << endl;
//		m_a = p.m_a;
//	}
//
//	~Person()
//	{
//		cout << "析构函数调用" << endl;
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
////验证在栈区实例化对象的时候能否使用有参构造
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
////验证使用explicit函数能否限制拷贝构造的隐式类型转换
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