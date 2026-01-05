from typing import List

def largest_square_in_a_matrix(matrix: List[List[int]]) -> int:
    # Write your code here
    rows  = len(matrix)
    cols  = len(matrix[0])
    dp = [[0]*cols for _  in  range(rows)]
    max_len = 0

     #base case
    for j in range(cols):
        if(matrix[0][j])==1:
            dp[0][j] = 1
            max_len = 1
    for i in range(rows):
        if matrix[i][0] ==1:
            dp[i][0] = 1
            maxl_len= 1
    for r in range(1,rows):
        for c in range(1 ,cols):
            if(matrix[r][c]) == 1:
                dp[r][c] = 1+min(dp[r][c-1],dp[r-1][c],dp[r-1][c-1])
                max_len = max(dp[r][c],max_len)

    return max_len**2



