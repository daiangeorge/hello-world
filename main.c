#include <stdio.h>
#include <stdlib.h>

int v[90];
int n=6;

int valid(int k)
{
    int i;
    for(i=0; i<k; i++)
        if(v[k]<=v[i])
            return 0;
    return 1;
}

void afisare(int v[], int n)
{
    int i;
    for(i=0; i<n; i++)
        printf("%d ",v[i]);
    printf("\n");
}

int backtracking(int k,int stop)
{
    int i;
    for(i=1; i<=n; i++)
    {
        v[k]=i;
        if(valid(k)==1)
            if(k==stop-1)
                afisare(v,stop);
            else
                backtracking(k+1,stop);
    }
}

int main()
{

    int k=4;
    backtracking(0,k);
    return 0;
}
