
cap = 7
weights = [5, 3, 4, 1]
values = [70, 50, 40, 10]
def knapsack(cap,wts,vls):
    dp = [[0]*(cap+1) for _ in range(len(values)+1)]

    for  i in range(len(values)-1,-1,-1):
        for c in range(1,cap+1):
            if(wts[i]<=c):
                dp[i][c] = max(vls[i]+dp[i+1][c-wts[i]],dp[i+1][c])
            else:
                dp[i][c] = dp[i+1][c]


    return dp[0][cap]


print(knapsack(cap,weights,values))
