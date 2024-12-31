#include <stdio.h>
typedef struct Time
{
    int hrs;
    int min;
    int sec;
} Time;
int compareTimes(Time t1, Time t2)
{
    if (t1.hrs > t2.hrs)
        return 1;
    if (t1.hrs < t2.hrs)
        return -1;
    if (t1.min > t2.min)
        return 1;
    if (t1.min < t2.min)
        return -1;
    if (t1.sec > t2.sec)
        return 1;
    if (t1.sec < t2.sec)
        return -1;
    return 0;
}
int main()
{
    Time time1 = {14, 30, 45};
    Time time2 = {15, 20, 10};
    int result = compareTimes(time1, time2);
    if (result == 0)
        printf("Both times are the same.\n");
    else if (result < 0)
        printf("Time1 is earlier than Time2.\n");
    else
        printf("Time1 is later than Time2.\n");

    return 0;
}