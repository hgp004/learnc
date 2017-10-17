// ConsoleApplication2.cpp : 定义控制台应用程序的入口点。
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
	ptFa->A = 10;//print是FriendA的友元函数，可以访问私有数据成员A
	//ptFb->B//print不是FriendB的友元函数，无法访问私有数据成员B
}
int _tmain(int argc, _TCHAR* argv[])
{
	
	int *p = new int[2];
	*p = 1;
	*(p + 1) = 2;
	int *pp = p+1;
	delete[] p;//delete p和delete[] 都会释放new int[2] 申请的所有内存空间，*pp的值被清空
	//MyArray ma0 = getMyArray();//getMyArray()返回一个局部变量的引用，函数外无法使用
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
	MyArray ma3 = myArray + ma2;//1.重载+操作符2.拷贝构造函数
	MyArray ma4(1);
	ma4 = myArray + ma2;//1.重载+操作符2.+的重载方法返回一个对象，会调用拷贝构造函数生成一个匿名对象3.重载=操作符;
	//function(1, 2, 3);
	dw cat("cat1");
	printf("%d", cat.age);
	cat.say();
	dw cat1(cat);//直接调用拷贝构造函数
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
	return tempCat;//调用拷贝构造函数，初始化一个匿名对象；
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