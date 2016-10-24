// Parking-System.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "stdlib.h"
#include "time.h"
#include "windows.h"
#include "string.h"
#include "mywork.h"

int diff()//时间差函数
{
	time_t timeF, timeE;
	time(&timeF);
	printf("\t%s", asctime(localtime(&timeF)));
	system("pause");
	time(&timeE);
	printf("\t%s", asctime(localtime(&timeE)));
	time_t dif = difftime(timeE, timeF);
	system("pause");
	printf("\t%s", asctime(localtime(&dif)));
	system("pause");
    return 0;
}
#define MAX_pwd 9

void Login()
{
	int j = 0;
	char user[5], pwd[6], ch;
	printf("\n请输入后台管理员用户名：");
	for (int i = 0;i < 5;i++)
	{
		scanf(" %c", &user[i]);
	}
	if (strcmp(user, "admin")!=0)
	{
		printf("请输入管理员密码：\n");
		scanf(" %c", &ch);
		while (ch != '\r')
		{
			scanf(" %c", ch);
			pwd[j] = ch;
			printf("*");
			j++;
			ch = getchar();
			pwd[j] = '\0';
		}
	}
	else
	{
		printf("无此用户名相关信息!\n");
		Sleep(5);
		exit(0);
	}
}

int main()
{
	//printf("\t\t\t欢迎使用 江南停车场 后台管理系统！\t\t\t\t");
	//time_t curr_time;
	//time(&curr_time);
	//printf("\t%s", asctime(localtime(&curr_time)));
	//Sleep(6000);
	//system("cls");
	//printf("\t\t\t\t\t\t\t\t系统初始化，请等待……\n");
	//Sleep(3000);
//	Login();
//	diff();
	system("pause");
	clock_t s = 0, f = 0;
	s = Start(s);
	Sleep(2501);
	f = Finish(f);
	fee(s, f);
	system("pause");
	return 0;
}