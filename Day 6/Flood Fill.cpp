void search(vector<vector<int>>& image,int i,int j,int c,int nc,vector<vector<bool>>&visited){
        image[i][j]=nc;
        visited[i][j]=true;
        if(i>0 && image[i-1][j]==c && !visited[i-1][j])
            search(image,i-1,j,c,nc,visited);
        if((i+1)<image.size() && image[i+1][j]==c && !visited[i+1][j])
            search(image,i+1,j,c,nc,visited);
        if((j+1)<image[0].size() && image[i][j+1]==c && !visited[i][j+1])
            search(image,i,j+1,c,nc,visited);
        if(j>0 && image[i][j-1]==c && !visited[i][j-1])
            search(image,i,j-1,c,nc,visited);
        
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
       int color=image[sr][sc];
       vector< vector< bool > > visited( image.size(), vector<bool>(image[0].size(),false));
       search(image,sr,sc,color,newColor,visited);
       return image;
    }