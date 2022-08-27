class Solution {
public:
    int reversePairs(vector<int>& arr) {
        int n=arr.size();
        help(arr,0,n-1);
        return ans;
    }
    
    
    long long ans=0;

void merge(vector<int>& arr, int l,int r,int mid){
    long long int temp[r-l+1];
    long long int i=l;
    long long int j=mid+1;
    for(i;i<=mid;i++){
        while( j<=r && arr[i]>1ll*2*arr[j] ){
                j++;
        }
        ans+=(j-(mid+1));
    }
    
    
    
    i=l;
    j=mid+1;
    long long int k=0;
    while(i<=mid && j<=r){
        if(arr[i]<arr[j])temp[k++]=arr[i++];
        else temp[k++]=arr[j++];
    }
    while(i<=mid){
        temp[k++]=arr[i++];
        
    }
    while(j<=r){
        temp[k++]=arr[j++];
    }
    
    for(int m=0,n=l;m<(r-l+1);m++,n++){
        arr[n]=temp[m];
    }
    
}

void help(vector<int>& arr, int l,int r){
    if(l>=r)return;
    int mid=(l+(r-l)/2);
    help(arr,l,mid);
    help(arr,mid+1,r);
    merge(arr,l,r,mid);
}


    
    
};