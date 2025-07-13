class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) 
    {
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());

        int total_match=0;

        int j=trainers.size()-1;
        for(int i=players.size()-1; i>=0; i--)
        {
            if(players[i]<=trainers[j])
            {
                total_match++;
                j--;
            }
            if(j==-1) break;
        }

        return total_match;
    }
};