#include <stdio.h>
#include <time.h>

struct Date {
    int d, m, y;
};

int isLeap (struct Date dt) {

    if ( (dt.y%4 == 0 && dt.y%100 != 0) || (dt.y%400 == 0) ) {
        return 1;
    } else {
        return 0;
    }

}

int offsetDays(struct Date dt) {
    
    int offset = dt.d;

    switch (dt.m - 1){
        case 1:
            offset += 31;
            break;
        case 2:
            offset += 59;
            break;
        case 3:
            offset += 90;
            break;
        case 4:
            offset += 120;
            break;
        case 5:
            offset += 151;
            break;
        case 6:
            offset += 181;
            break;
        case 7:
            offset += 212;
            break;
        case 8:
            offset += 243;
            break;
        case 9:
            offset += 273;
            break;
        case 10:
            offset += 304;
            break;
        case 11:
            offset += 334;
            break;
        case 12:
            offset += 365;
            break;

        default:
            break;
    }

    if (isLeap(dt) && dt.m > 2) {
        offset +=  1;
    }

    return offset;

}

void revOffsetdays(int offset, struct Date *ans) {

    int month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int m = 1;
    
    if (isLeap(*ans)) {
        month[2] = 29;
    }

    while (offset > month[m]) {
        offset -= month[m];
        m++;    
    }

    ans -> m = m;
    ans -> d = offset;

}

void addDays(struct Date dt, int x) {

    int offset1 = offsetDays(dt);
    int remdays = (isLeap(dt) ? 366 - offset1 : 365 - offset1);

    struct Date ans;
    int offset2;

    if (x <= remdays) {
        ans.y = dt.y;
        offset2 = offset1 + x;
    } else {

        x -= remdays;
        ans.y = dt.y + 1;
        int ansdays = isLeap(ans) ? 366 : 365;
        
        while (x > ansdays) {
            ansdays = isLeap(ans) ? 366 : 365;
            x -= ansdays;
            ans.y++;
        }

        offset2 = x;

    }

    revOffsetdays(offset2, &ans);
    printf("The final date: %d/ %d/ %d \n", ans.d, ans.m, ans.y);

}

int main() {

    struct Date dt;
    time_t now = time(NULL);
    struct tm *t = localtime(&now);

    dt.d = t -> tm_mday;
    dt.m = t -> tm_mon + 1;
    dt.y = t -> tm_year + 1900;

    int x;

    printf("The current date: %d/ %d/ %d \n", dt.d, dt.m, dt.y);
    printf("Please enter the number of days (>0) to add: ");
    scanf("%d", &x);
    
    addDays(dt, x);

    return 0;
}