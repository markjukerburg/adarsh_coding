


def bottomUp(coins,target):
    dp = [float('inf')]*(target+1)

    dp[0] =  0

    for  t in range(1,target+1):
        for coin in coins:
            if(coin <= t):
                dp[t] = min(dp[t],1+dp[t-coin])


    return  -1 if dp[target] == float('inf') else dp[target]



coins = [1,2,3]
target = 5

print(bottomUp(coins,target))
