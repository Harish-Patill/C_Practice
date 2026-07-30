#include<stdio.h>
#include<string.h>
int main(){
    int hour;
    int minute;
    char period[3];

    printf("Enter the time: ");
    scanf("%d %d %s",&hour,&minute,period);

    if(strcmp(period,"PM")==0 && hour !=12){                    // should be pm and not 12, because 12 pm is 12 pm itself in 24 hr format.
        hour=hour+12;
    }
    
    if(strcmp(period,"AM")==0 && hour ==12){                    // should be am, will leave as it is, unless its 12AM because its 00:00 in 24 hrs format
        hour=0;
    }

    printf("24 Hour Format: %02d:%02d\n",hour,minute);
}