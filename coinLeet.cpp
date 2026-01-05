class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        
        vector<int>value(amount+1,amount+1);
        value[0] = 0;
        
        for( int x=1;x<=amount;x++)
        {
           // value[x] = INT_MAX;
            for(int c:coins)
            {
                if(x-c >= 0)
                {
                    value[x] = min(value[x],value[x-c]+1);
                }
                
                
            }
            
            
        }
        cout << value[amount]<<endl;
       return (value[amount]==amount+1)?-1: value[amount];
        
        
    }
};
