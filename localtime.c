#include<time.h>

void main()
{
    time_t ctime;
    struct tm *tm;
    char *stime;

    /*��ȡ����ʱ��*/
    ctime=time(NULL);

    /*������ʱ��ת��Ϊ����ʱ��*/
    tm=localtime(&ctime);
    
    printf("now is hour %d,min is %d\n",tm->tm_hour,tm->tm_min);

    /*�ַ�����ʽ��ʾ��ʱ��*/
    stime=asctime(tm);

    printf("time is %s\n",stime);

}
