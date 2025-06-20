class Solution 
{
public:
    int maxDistance(string s, int k) 
    {
        
        int x = 0;
        int y = 0;  
        
        int ans = 0;
        
    
        for (int i = 0; i < s.size(); ++i) 
        {  
            char c = s[i];
        
            if (c == 'N')
            {
                y++;
            }      
            else if (c == 'S')
            {
                y--;
            } 
            else if (c == 'E')
            {
                x++;
            }
            else if (c == 'W') 
            {
                x--;
            }

            //to view the sortest path 
            int real_dist = abs(x) + abs(y);
            int dist = min(real_dist + 2 * k, i+1 );

            
            ans = max(ans, dist);
        }

    
        return ans;  
    }
};