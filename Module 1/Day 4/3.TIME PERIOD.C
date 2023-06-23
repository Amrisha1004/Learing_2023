#include<stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

void getTimeDifference(struct Time t1, struct Time t2, struct Time *diff) {
    int t1Seconds, t2Seconds, diffSeconds;
    t1Seconds = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    t2Seconds = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;
    diffSeconds = t2Seconds - t1Seconds;
    diff->hours = diffSeconds / 3600;
    diffSeconds %= 3600;
    diff->minutes = diffSeconds / 60;
    diff->seconds = diffSeconds % 60;
}

int main() {
    struct Time startTime, endTime, timeDiff;
    printf("Enter the start time:\n");
    printf("Hours: ");
    scanf("%d", &(startTime.hours));
    printf("Minutes: ");
    scanf("%d", &(startTime.minutes));
    printf("Seconds: ");
    scanf("%d", &(startTime.seconds));
    printf("\nEnter the end time:\n");
    printf("Hours: ");
    scanf("%d", &(endTime.hours));
    printf("Minutes: ");
    scanf("%d", &(endTime.minutes));
    printf("Seconds: ");
    scanf("%d", &(endTime.seconds));
    getTimeDifference(startTime, endTime, &timeDiff);
    
    
    printf("\nTime Difference: %02d:%02d:%02d\n", timeDiff.hours, timeDiff.minutes, timeDiff.seconds);
    
    return 0;
}
