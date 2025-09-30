#include <stdio.h>
#include <string.h>

#define HOURS_IN_DAY 24

int main() {
    int n, t;
    scanf("%d %d", &n, &t);

    int at_home[HOURS_IN_DAY];  // 0 if all neighbors are gone, 1 if at least one is home
    for (int i = 0; i < HOURS_IN_DAY; i++) {
        at_home[i] = 0;  // assume initially no one is home
    }

    for (int i = 0; i < n; i++) {
        int s, e;
        scanf("%d %d", &s, &e);

        if (s < e) {
            // Neighbor is gone from s to e (normal daytime)
            for (int j = 0; j < HOURS_IN_DAY; j++) {
                if (j < s || j >= e) {
                    at_home[j] = 1;  // neighbor is home during this hour
                }
            }
        } else {
            // Schedule wraps around midnight
            for (int j = e; j < s; j++) {
                at_home[j] = 1;  // neighbor is home
            }
        }
    }

    // Count total hours in the day when no one is home
    int practice_hours_per_day = 0;
    for (int i = 0; i < HOURS_IN_DAY; i++) {
        if (at_home[i] == 0) {
            practice_hours_per_day++;
        }
    }

    if (practice_hours_per_day == 0) {
        printf("IMPOSSIBLE\n");
    } else {
        // Calculate number of days needed, rounding up
        int days = (t + practice_hours_per_day - 1) / practice_hours_per_day;
        printf("%d\n", days);
    }

    return 0;
}
