#include <stdio.h>
int main() {
    int n;
    printf("Enter number of processes: ");
    scanf("%d", &n);

    int pid[n], at[n], bt[n], ct[n], tat[n], wt[n];
    for (int i = 0; i < n; i++) {
        pid[i] = i + 1;
    }
    printf("Enter Arrival Times: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &at[i]);
    }
    printf("Enter Burst Times: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &bt[i]);
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (at[i] > at[j]) {
                int temp;
                temp = at[i]; at[i] = at[j]; at[j] = temp;
                temp = bt[i]; bt[i] = bt[j]; bt[j] = temp;
                temp = pid[i]; pid[i] = pid[j]; pid[j] = temp;
            }
        }
    }
    int time = 0;
    for (int i = 0; i < n; i++) {
        if (time < at[i]) time = at[i];
        time += bt[i];
        ct[i] = time;
        tat[i] = ct[i] - at[i];
        wt[i] = tat[i] - bt[i];
    }
    printf("PID  AT  BT  CT  TAT  WT\n");
    float avgTAT = 0, avgWT = 0;
    for (int i = 0; i < n; i++) {
        printf("%3d %3d %3d %3d %4d %3d\n",
               pid[i], at[i], bt[i],
               ct[i], tat[i], wt[i]);

        avgTAT += tat[i];
        avgWT  += wt[i];
    }
    printf("Avg TAT = %.2f  Avg WT = %.2f\n",avgTAT/n, avgWT/n);
    return 0;
}