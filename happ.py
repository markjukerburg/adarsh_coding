
def next_num(n):
    digit = 0
    while n>0:
       last =  n%10
       n = n//10
       digit+=last**2
    #print(digit)
    return digit


#print(next_num(next_num(next_num(23))))

def happy_number(n: int) -> bool:
    # Write your code here
    next_f = n
    next_s = n
    while True:
        slow = next_num(next_s)
        fast = next_num(next_num(next_f))
       
        print(slow)
        print(fast)
  
        if(fast == 1):
            return True
        if(fast == slow):
            return False
        next_s = slow
        next_f = fast 

print(happy_number(23))
