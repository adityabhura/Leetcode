class Solution {
public:
    string countAndSay(int n) {
        //return "";
        string res="1";
        while(--n){
            string curr="";
            char c=res[0];
            int count=0;
            for(int i=0;i<res.size();i++){
                //int count=0;
                //c=res[i];
                // while(res[i]==c){
                //     //cout<<res[i];
                //     count++;
                //     i++;
                //     if(i==n)break;
                // }
                if(c==res[i]){
                    count++;
                    //cout<<"s";
                }else{
                    curr+=to_string(count)+c;
                    count=1;
                    c=res[i];
                }

            }
            curr+=to_string(count)+c;
            res=curr;
        }
        return res;
    }
};