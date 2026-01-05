import queue as Q
def bihelper(start,end,dictionary):
    start_set = set(start)#store visited start nodes
    end_set = set(end)#store visited end nodes
    dict_hash = set(dictionary)
    if start  == end:
        return 1
    #print(start)
    #print(end)
    #print(dict_hash)
    if start not in dict_hash or end not in dict_hash:
        return 0

    start_q  = Q.deque([start])
    end_q  = Q.deque([end])
    start_level = end_level = 0
    while start_q and end_q:
        start_level +=1
        if  explore_path(start_q,start_set,end_set,dict_hash):
            return start_level+end_level+1


        end_level+=1
        if explore_path(end_q,end_set,start_set,dict_hash):
            return start_level+end_level+1


    return 0
def explore_path(queue,visited,other_visited,dict_hash):
    lower_case = 'abcdefghijklmnopqrstuvwxyz'

    for _ in range(len(queue)):
        c_node  = queue.popleft()

        for i in range(len(c_node)):
            for c in lower_case:
                next_node = c_node[:i]+c+c_node[i+1:]
                if(next_node in other_visited):
                    return True
                if(next_node in  dict_hash and next_node not in visited ):
                    visited.add(next_node)
                    queue.append(next_node)
    return False



start= "red"
end = "hit"
dictionary =  ["red", "bed", "hat", "rod", "rad", "rat", "hit", "bad", "bat"]



printi(bihelper(start,end,dictionary))
