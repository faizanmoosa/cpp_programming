#include<stdio.h>
int main(void) {
    int n, tq, sum=0, i, done=0;
    printf("Enter no. of processes: ");
    scanf("%d",&n);
    int N=n, at[n], bt[n], rem_bt[n];
    float avg_wt=0, avg_tat=0;
    printf("Enter arrival time & burst time for processes: \n");
    for(i=0;i<n;i++) {
        scanf("%d%d",&at[i],&bt[i]);
        rem_bt[i]=bt[i];
    } i=0;
    printf("Enter time quantum: ");
    scanf("%d",&tq);
    printf("PID\tAT\tBT\tTAT\tWT\n");
    while(N) {
        if(rem_bt[i]<=tq && rem_bt[i]>0) {
            sum+=rem_bt[i];
            rem_bt[i]=0;
            done=1;
        }
        else if(rem_bt[i]>tq) {
            rem_bt[i]-=tq;
            sum+=tq;
        }
        if(rem_bt[i]==0 && done==1) {
            N--;
            printf("%d\t%d\t%d\t%d\t%d\n",(i+1),at[i],bt[i],(sum-at[i]),(sum-at[i]-bt[i]));
            avg_tat+=(sum-at[i]);
            avg_wt+=(sum-at[i]-bt[i]);
            done=0;
        }
        if(at[i+1]<=sum)
            i++;
        else
            i=0;
    }
    printf("Average TAT = %.1f \n",(avg_tat/n));
    printf("Average WT = %.1f \n",(avg_wt/n));
}