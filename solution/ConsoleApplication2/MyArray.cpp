#include "stdafx.h"
#include "MyArray.h"


MyArray::MyArray(int len)
{
	mLength = len;
	mSpace = new int[len];
}
MyArray::MyArray(const MyArray &obj)
{
	this->mLength = obj.mLength;
	this->mSpace = new int[obj.mLength];
	for (int i = 0; i < obj.mLength; i++)
	{
		*(mSpace + i) = *(obj.mSpace + i);
	}
}
void MyArray::SetData(int index, int value)
{
	if (index > mLength - 1)
	{
		return;
	}
	*(mSpace + index) = value;
}
int MyArray::GetData(int index)const
{
	if (index > mLength - 1)
	{
		return 0;
	}
	return *(mSpace+index);
}
int MyArray::Length()const
{
	return mLength;
}
MyArray MyArray::operator+(const MyArray &obj)
{
	int len = this->mLength + obj.mLength;
	MyArray result(len);
	for (int i = 0; i < this->mLength; i++)
	{
		result.SetData(i, this->GetData(i));
	}
	for (int i = 0; i < obj.mLength; i++)
	{
		int iIndex = this->mLength + i;
		int iValue = obj.GetData(i);
		result.SetData(iIndex,iValue);
	}
	return result;//返回前调用拷贝构造函数，生成一个匿名对象，然后result对象析构
}

void MyArray::operator=(const MyArray &objR)//MyArray MyArray::operator=(const MyArray &objR)//重载成带返回值的是否可行？
{
	//释放对象原来占用的资源
	delete this->mSpace;//能释放完吗
	//delete[] this->mSpace;//
	this->mLength = objR.mLength;
	this->mSpace = new int[objR.mLength];
	for (int i = 0; i < objR.mLength; i++)
	{
		*(mSpace + i) = *(objR.mSpace + i);
	}
}
MyArray::~MyArray()
{
	delete mSpace;//用delete[] 还是delete;
}
