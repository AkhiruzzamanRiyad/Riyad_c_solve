#include <stdio.h>

int main() {
    int day;
    printf("Day Number: ");
    scanf("%d",&day);
    if (day==1) {
        printf("Saturday\n");
    } else if (day==2) {
        printf("Sunday\n");
    } else if (day==3) {
        printf("monday\n");
    } else if (day==4) {
        printf("Thesday\n");
    } else if (day==5) {
        printf("Wednesday\n");
    } else if (day==6) {
        printf("Thusday\n");
    } else if (day==7) {
        printf("Friday\n");
    } else {
        printf("Invalid Number Please enter the number from 1 to 7\n");
    }

    return main ();
}