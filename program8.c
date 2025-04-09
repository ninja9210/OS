#include <stdio.h>
#include <stdlib.h>
int main()
{
    int RQ[100], i, n, TotalHeadMoment = 0, initial;
    printf("Enter the number of Requests: ");
    scanf("%d", &n);
    printf("Enter the Requests sequence:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &RQ[i]);
    }
    printf("Enter Initial head position: ");
    scanf("%d", &initial);
    for (i = 0; i < n; i++)
    {
        TotalHeadMoment = TotalHeadMoment + abs(RQ[i] - initial);
        initial = RQ[i];
    }
    printf("Total Head Moment is %d", TotalHeadMoment);
    return 0;
}
