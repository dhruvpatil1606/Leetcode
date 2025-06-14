class Solution {
public:
    int minMaxDifference(int num) {
        int mini=10,maxi=-1;

        string temp=to_string(num);

        char remember;
        bool flag=false;
        for(int i=0; i<temp.length(); i++)
        {
            if(temp[i]!='9' && flag==false)
            {
                if(flag==false){
                    remember=temp[i];
                    flag=true;
                }
                temp[i]='9';
            }
            else if(temp[i]==remember) temp[i]='9';
        }
        maxi=stoi(temp);

        cout<<maxi;

        flag=false;
        temp=to_string(num);
        for(int i=0; i<temp.length(); i++)
        {
            if(temp[i]!='0' && flag==false)
            {
                if(flag==false){
                    remember=temp[i];
                    flag=true;
                }
                temp[i]='0';
            }
            else if(temp[i]==remember) temp[i]='0';
        }
        mini=stoi(temp);

        cout<<"\n"<<mini;


        return maxi-mini;
    }
};