def  longSubStr(baseStr,k):
    freq = {}
    highfrq = 0
    l = 0
    r = 0
    maxlen = 0
    while r < len(baseStr):
        freq[baseStr[r]] = freq.get(baseStr[r],0)+1
        highfrq  = max(highfrq,freq[baseStr[r]])
        no_replace = (r-l+1) - highfrq
        if no_replace  >k:
            freq[baseStr[l]]-=1
            l+=1
        maxlen = (r - l) +1
        r+=1
    print(r)
    print(l)
    return maxlen

print(longSubStr("aabcdcca",2))



