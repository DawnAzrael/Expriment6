// Parking-System.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "stdlib.h"
#include "time.h"
#include "windows.h"
#include "string.h"
#include "mywork.h"

int diff()//ʱ����
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
	printf("\n�������̨����Ա�û�����");
	for (int i = 0;i < 5;i++)
	{
		scanf(" %c", &user[i]);
	}
	if (strcmp(user, "admin")!=0)
	{
		printf("���������Ա���룺\n");
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
		printf("�޴��û��������Ϣ!\n");
		Sleep(5);
		exit(0);
	}
}

int main()
{
	//printf("\t\t\t��ӭʹ�� ����ͣ���� ��̨����ϵͳ��\t\t\t\t");
	//time_t curr_time;
	//time(&curr_time);
	//printf("\t%s", asctime(localtime(&curr_time)));
	//Sleep(6000);
	//system("cls");
	//printf("\t\t\t\t\t\t\t\tϵͳ��ʼ������ȴ�����\n");
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