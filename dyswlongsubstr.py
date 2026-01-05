





def longSubStr(baseStr):
    right = 0
    left = 0
    hashset = set()
    maxLen = 0
    while right < len(baseStr):
        while  baseStr[right] in hashset:
             hashset.remove(baseStr[left])
             left+=1
        maxLen = max(maxLen, right - left+1)
        hashset.add(baseStr[right])
        right+=1
    return maxLen


print(longSubStr('abcdefgba'))
