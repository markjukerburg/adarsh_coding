def couting_sort(arr):
    count = [0]*(max(arr)+1)
    res = [] 
    for i in range(len(count)):
    	count[i]+=1
   
    for i in range(len(count)):
        res.extend([i]*count[i])


    return res



print(couting_sort([0,1,2,1,0,4,3,3])) 
