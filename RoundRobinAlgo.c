#include<stdio.h>
int main(void) {
    int n, i, tq, count=0, temp1, temp2=0;
    printf("Enter no. of processes: ");
    scanf("%d",&n);
    int at[n], bt[n], rem_bt[n];
    float avg_wt=0, avg_tat=0;
    printf("Enter arrival time of processes: \n");
    for(i=0;i<n;i++) {
        scanf("%d",&at[i]);
    }
    printf("Enter burst time of processes: \n");
    for(i=0;i<n;i++) {
        scanf("%d",&bt[i]);
        rem_bt[i]=bt[i];
    }
    printf("Enter time quantum: ");
    scanf("%d",&tq);
    while(1) {
        for(i=0;i<n;i++) {
            temp1=tq;
            if(rem_bt[i]==0) {
                count++;
                continue;
            }
            if(rem_bt[i]>tq) {
                rem_bt[i]-=tq;
            }
            else if(rem_bt[i]>=0) {
                temp1=rem_bt[i];
                rem_bt[i]=0;
            }
            temp2+=temp1;
            printf("%d \t %d \t %d \t %d \n",(i+1),bt[i],(temp2-at[i]),(temp2-at[i]-bt[i]));
        }
        if(n == count) {
            break;
        }
    }
    printf("P\tBT\tWT\tTAT\n");
    for(i=0;i<n;i++) {
        avg_wt+=(temp2-at[i]-bt[i]);
        avg_tat+=(temp2-at[i]);
        printf("%d \t %d \t %d \t %d \n",(i+1),bt[i],(temp2-at[i]),(temp2-at[i]-bt[i]));
    }
    avg_tat/=n;
    avg_wt/=n;
    printf("Average Waiting Time = %f \n",avg_wt);
    printf("Average Turn Around Time = %f",avg_tat);
}