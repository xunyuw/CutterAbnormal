#pragma once
//c++调用的Python封装在这个类
#include<iostream>
using namespace std;

#include<Python.h>

class PythonInterface
{
public:
	PythonInterface();
	~PythonInterface();
	int getInceptionV3();
	void test();
	
};


