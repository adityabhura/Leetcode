class Solution {
public:
    string sortSentence(string s) {
         string ans="";
    
    int len=s.length();
    cout<<len<<endl;
   string arr[100] = {""};
    string temp;
    for(int i=0;i<len;i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            int pos = int(s[i]-48);
            arr[pos]=temp;
            temp="";
        }
        else if(s[i]!=' ') temp+=s[i];  
    }
    
    for(int i=1;i<100;i++) 
    {
        if(arr[i]!="") 
        {
            ans+=arr[i];
            if(arr[i+1]!="") ans+=' ';
            
        }
    }
 
    return ans;
}
};