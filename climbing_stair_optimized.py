def clibing_stair_optimized(n):
    if(n == 1 or n == 0):
        return 1

    onebefore = 1
    twobefore = 1

    for i in range(2,n+1):
        curr =onebefore+twobefore
        twobefore = onebefore
        onebefore = curr

    return curr
print(clibing_stair_optimized(3))


