// ConsoleApplication2.cpp : �������̨Ӧ�ó������ڵ㡣
//
#include "stdafx.h"
#include "dw.h"
#include "dq.h"
#include "FriendA.h"
#include "MyArray.h"
#include <iostream>
using namespace std;

void function(int, int, int);
dw GetNewCat(char *);
MyArray& getMyArray();
MyArray getMyArray1();
//int operator+(const int a, const MyArray &ma);
int dw::age = 10;
void print(FriendA *ptFa, FriendB *ptFb, int a)
{
	ptFa->A = 10;//print��FriendA����Ԫ���������Է���˽�����ݳ�ԱA
	//ptFb->B//print����FriendB����Ԫ�������޷�����˽�����ݳ�ԱB
}
int _tmain(int argc, _TCHAR* argv[])
{
	
	int *p = new int[2];
	*p = 1;
	*(p + 1) = 2;
	int *pp = p+1;
	delete[] p;//delete p��delete[] �����ͷ�new int[2] ����������ڴ�ռ䣬*pp��ֵ�����
	//MyArray ma0 = getMyArray();//getMyArray()����һ���ֲ����������ã��������޷�ʹ��
	MyArray myArray(4);
	cout << 1 + myArray << "\n";
	cout << myArray.Length()<<"\n";
	myArray.SetData(0, 00);
	myArray.SetData(1, 11);
	myArray.SetData(2, 22);
	myArray.SetData(3, 33);
	cout << myArray.GetData(0) << "\n";
	cout << myArray.GetData(1) << "\n";
	cout << myArray.GetData(2) << "\n";
	cout << myArray.GetData(3) << "\n";
	MyArray ma2(2);
	ma2.SetData(0, 9);
	ma2.SetData(1, 8);
	MyArray ma3 = myArray + ma2;//1.����+������2.�������캯��
	MyArray ma4(1);
	ma4 = myArray + ma2;//1.����+������2.+�����ط�������һ�����󣬻���ÿ������캯������һ����������3.����=������;
	//function(1, 2, 3);
	dw cat("cat1");
	printf("%d", cat.age);
	cat.say();
	dw cat1(cat);//ֱ�ӵ��ÿ������캯��
	GetNewCat("cat2");
	dw cat2 = GetNewCat("cat2");
	cat2.say();
	dq dq;
	dq.have();
	return 0;
}
void function(int a, int b, int = 0)
{

}
struct MyStruct
{
	char name[10];
};
dw GetNewCat(char *type)
{
	dw tempCat("tempCat");
	return tempCat;//���ÿ������캯������ʼ��һ����������
}
MyArray& getMyArray()
{
	MyArray ma(2);
	ma.SetData(0, 1);
	ma.SetData(1, 2);
	return ma;
}
MyArray getMyArray1()
{
	MyArray ma(2);
	ma.SetData(0, 1);
	ma.SetData(1, 2);
	return ma;
}
int operator+(const int a, const MyArray &ma)
{
	int result = 0;
	result = a + ma.mLength;
	return result;
}