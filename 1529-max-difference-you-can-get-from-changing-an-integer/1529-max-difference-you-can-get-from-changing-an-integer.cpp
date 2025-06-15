class Solution {
public:
    int maxDiff(int num) 
    {
        string str1=to_string(num);
        int maxi;
        int y=9;
        char rem; //remember char
        bool flag=false;
        for(int i=0; i<str1.length(); i++)
        {
            if(str1[i]!='9' && flag==false)
            {
                rem=str1[i];
                str1[i]='9';
                flag=true;
            }
            else if(rem==str1[i])
            {
                str1[i]='9';
            }            
        }
        maxi=stoi(str1);
        cout<<maxi<<"\n";

        flag=false;
        char zero='0';
        int mini;
        str1=to_string(num);        
        bool found=false,flag2=false;
        for(int i=0; i<str1.length(); i++)
        {
            if(str1[i]=='1') continue;
            if(flag==false && i>0)
            {                   
                found=true;                
            }
            else{
                if(str1[i]!='1' && flag==false)
                {
                    rem=str1[i];
                    str1[i]='1';
                    flag=true;
                }
                else if(rem==str1[i])
                {
                    str1[i]='1';
                }                 
            }
            
            if(found==true)
            {                
                if(str1[i]!='0' && flag2==false)
                {
                    rem=str1[i];
                    str1[i]='0';
                    flag2=true;
                }
                else if(rem==str1[i])
                {
                    str1[i]='0';
                }                
            }
        }
        mini=stoi(str1);
        cout<<mini<<"\n";
        
        return maxi-mini;
    }
};