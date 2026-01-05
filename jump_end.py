def jump_end(coll):
    dest = len(coll)-1
    for  i in range(len(coll)-1,-1,-1):
        if( i+coll[i] >= dest ):
            dest = i

    return dest == 0


#print(jump_end([3,2,0,2,5]))
print(jump_end([9,6,7,0,4,2,0,5]))

