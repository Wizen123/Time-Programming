#include<time.h>

void main()
{
    time_t ctime;
    ctime=time(NULL);
    
    printf("ctime is %d\n",ctime);
}
