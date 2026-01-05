#wqqq
def candies(arr):
   #for all rating is same 
   candies = [1]*len(arr)
    

   #increasing order
   for i in range(1,len(arr)):
       if(arr[i]>arr[i-1]):
           candies[i] = candies[i-1]+1
           
   #decreasing order
   for  i in range(len(arr)-2,-1,-1):
       if(arr[i]>arr[i+1]):
           candies[i] = max(candies[i],candies[i+1]+1)
   
   return sum(candies)

ratings = [1, 1,1 , 1, 1, 1]
print(candies(ratings))
                       
   
  
 





