int maximumWealth(vector<vector<int>>& accounts) {
        int max=0;
        for(auto i :accounts){
            int cost=0;
            for(auto j : i){     //for(int i=0;i<n;i++)
                cost+=j;         //cost += accounts[i][j];
            }
            if(cost>max){
                max=cost;
            }
        }
        return max;
    }