memo  = {}
def climbing_stairs(n):

    #if(n<=2):
    #    return n
    if(n == 0):
        return 1
    if(n==1):
        return 1
    if( n in memo):
        return memo[n]

    memo[n] = climbing_stairs(n-1)+climbing_stairs(n-2)



    return memo[n]



print(climbing_stairs(1))

