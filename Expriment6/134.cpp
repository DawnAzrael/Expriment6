#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "windows.h"
#include "math.h"

clock_t Start(clock_t s)
{
	//��ʱ��ʼ
	s=clock();
	return s;
}

clock_t Finish(clock_t f)
{
	//��ʱ����
	f=clock();
	return f;
}


int fee(clock_t start,clock_t finish)
{
	int SUB;
	double sub,intpart,fracpart;
	sub=(double)(finish-start)/CLOCKS_PER_SEC;
	fracpart=modf(sub,&intpart);
	if(fracpart>0.5)
	{
		SUB=(int)intpart+1;
	}
	else
	{
		SUB=(int)intpart;
	}
	printf("%d\n",SUB);
	return 0;
}

int main()
{
	clock_t s,f;
	s=Start(s);
	Sleep(2501);
	f=Finish(f);
	fee(s,f);
	system("pause");
	return 0;
}