// "A Book on C" - Chapter 1 Q15
// Compute a better average

#include <stdio.h>

int main(void) {
    int i;
    double x;
    double avg = 0.0;   // a better average
    double navg;        // a naive average
    double sum = 0.0;

    printf("%5s%17s%17s%17s\n%5s%17s%17s%17s\n\n",
            "Count", "Item", "Average", "Naive Avg",
            "_____", "____", "_______", "________");

    for(i = 1; scanf("%lf", &x) == 1; ++i) {
        avg += (x - avg) / i;
        sum += x;
        navg = sum / i;
        printf("%5d%17e%17e%17e\n", i, x, avg, navg);
    }

    return 0;
}

// yea yk what I have no idea what this program is supposed to do bcs it all seems like its the same output