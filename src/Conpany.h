#pragma once
#include<set>
#include<iostream>
#include<string>
#include<unordered_map>
#include<unordered_set>
#include<algorithm>
#include<list>
#include<iomanip>
#include<stack>
#include<queue>
#include<map>
#include<cmath>
#include<vector>
#include<cmath>
#include<sstream>
#include <random>
#include<fstream>
#include<conio.h>//使用_getch()
#include<graphics.h>
#include<Windows.h>
#include<stdlib.h>
#include<mmsystem.h>//包含多媒体设备接口头文件,要在图形库头文件下方
#pragma comment(lib,"winmm.lib")//加载静态库
typedef long long ll;
using namespace std; 


class Conpany {
public:
	virtual void get_information() = 0;		//添加信息
	virtual void print_information() = 0;	//打印所有信息
	virtual void seek_information() = 0;	//寻找目标信息
	virtual void clear_information() = 0;	//清空信息
};