#include <stdio.h>

int main() {
    int n, i;
    
    printf("Enter number of processes: ");
    scanf("%d", &n);

    int AT[n], BT[n], CT[n], TAT[n], WT[n];

    // Input Arrival Time and Burst Time


    printf("Enter Arrival Time:\n");

    for(i = 0; i < n; i++) {                                   

        printf("P%d: ", i+1);
        scanf("%d", &AT[i]);
    }

    printf("Enter Burst Time:\n");
    for(i = 0; i < n; i++) {
        printf("P%d: ", i+1);
        scanf("%d", &BT[i]);
    }

   
    int temp;
    for(i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(AT[i] > AT[j]) {
                
                temp = AT[i];
                AT[i] = AT[j];
                AT[j] = temp;

                
                temp = BT[i];
                BT[i] = BT[j];
                BT[j] = temp;
            }
        }
    }

    CT[0] = AT[0] + BT[0];
    for(i = 1; i < n; i++) {
        if(CT[i-1] < AT[i])
            CT[i] = AT[i] + BT[i];
        else
            CT[i] = CT[i-1] + BT[i];
    }

    for(i = 0; i < n; i++) {
        TAT[i] = CT[i] - AT[i];
        WT[i] = TAT[i] - BT[i];
    }

    printf("\nP\tAT\tBT\tCT\tTAT\tWT\n");
    for(i = 0; i < n; i++) {
        printf("P%d\t%d\t%d\t%d\t%d\t%d\n",
               i+1, AT[i], BT[i], CT[i], TAT[i], WT[i]);
    }

    // Average
    float sumTAT = 0, sumWT = 0;
    for(i = 0; i < n; i++) {
        sumTAT += TAT[i];
        sumWT += WT[i];
    }

    printf("\nAverage TAT = %.2f", sumTAT/n);
    printf("\nAverage WT = %.2f", sumWT/n);

    return 0;
}