#include<time.h>

void main()
{
    time_t ctime;
    struct tm *tm;
    char *stime;

    /*获取日历时间*/
    ctime=time(NULL);

    /*将日历时间转化为本地时间*/
    tm=localtime(&ctime);
    
    printf("now is hour %d,min is %d\n",tm->tm_hour,tm->tm_min);

    /*字符串方式显示的时间*/
    stime=asctime(tm);

    printf("time is %s\n",stime);

}
