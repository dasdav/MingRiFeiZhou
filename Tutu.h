#include<iostream>
#include<string>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
using namespace std;

#define UserNumber 100

bool IsVip = false;
void Menu();
void gotoxy(int x,int y);

class User
{
private:
	string phone;//电话
	string password;//密码
public:
	User() {};
	void Registers();//注册
	void Login();//登录
	void save();//保存
	void read();//读取
}us;

User user[SIZE];
