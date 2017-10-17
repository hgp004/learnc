#pragma once
class MyArray
{
public:
	MyArray(int length);
	MyArray(const MyArray &obj);
	~MyArray();
	int Length()const;
	void SetData(int index, int value);
	int GetData(int index) const;
	MyArray operator +(const MyArray &obj2);
	friend int operator+(int a,const MyArray &objR);
	void operator=(const MyArray &objR);
private:
	int mLength;
	int *mSpace;
};

