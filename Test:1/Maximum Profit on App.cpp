int pivot(int budget[], int l, int r)
{
    for(int i=l ; i<r; i++)
    {
        if(budget[i] <=budget[r])
        {
            if(i!=l)
            {
                int perk =budget[i];
                budget[i] = budget[l];
                budget[l] = perk;
            }
            l++;
        }
    }
    if(l!=r)
    {
        int perk =budget[l];
                budget[l] = budget[r];
                budget[r] = perk;
    }

    return l;
}

void sort(int budget[], int l, int r)
{
    if(l<r)
    {
        int pi = pivot(budget, l, r);
        sort(budget, l, pi-1);
        sort(budget,pi+1, r);
    }
}

int maximumProfit(int budget[], int n) {
    // Write your code here
 sort(budget,0,n-1);
 int maxprofit= 0;
 for(int i=0; i<n ; i++)
 {
     maxprofit= max(maxprofit, budget[i]*(n-i));
 }
 return maxprofit;
}
