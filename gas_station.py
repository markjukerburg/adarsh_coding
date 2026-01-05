def gas(g,cost):
    tank = 0
    start = 0

    if(sum(g)< sum(cost)):
        return -1


    for i in range(len(g)):
        #from i to i+1 station cost and remaining in tank
        tank+= g[i] - cost[i]


        if(tank <0):
            start = i+1
            tank = 0
    return start
gas2 =[2, 5, 1, 3]
cost =[3, 2, 1, 4]

print(gas(gas2,cost))
