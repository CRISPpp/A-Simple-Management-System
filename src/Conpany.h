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
#include<conio.h>//ʹ��_getch()
#include<graphics.h>
#include<Windows.h>
#include<stdlib.h>
#include<mmsystem.h>//������ý���豸�ӿ�ͷ�ļ�,Ҫ��ͼ�ο�ͷ�ļ��·�
#pragma comment(lib,"winmm.lib")//���ؾ�̬��
typedef long long ll;
using namespace std; 


class Conpany {
public:
	virtual void get_information() = 0;		//�����Ϣ
	virtual void print_information() = 0;	//��ӡ������Ϣ
	virtual void seek_information() = 0;	//Ѱ��Ŀ����Ϣ
	virtual void clear_information() = 0;	//�����Ϣ
};