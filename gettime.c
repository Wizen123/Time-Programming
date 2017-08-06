#include<sys/time.h>
#include<stdio.h>

void func()
{
    int i,j;
    int ret;

    for(i=0;i<1000;i++)
        for(j=0;j<1000;j++);
            ret=j;
}

void main()
{
    struct timeval tv1;
    struct timeval tv2;
    int runsec,runusec;

    gettimeofday(&tv1,NULL);
    
    func();

    gettimeofday(&tv2,NULL);

    runsec=tv2.tv_sec-tv1.tv_sec;
    runusec=tv2.tv_usec-tv1.tv_usec;
    
    /*显示程序运行时间*/
    printf("Running for %d sec %d usec\n",runsec,runusec);

}
