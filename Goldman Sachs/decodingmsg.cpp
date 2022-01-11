// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
		int CountWays(string str){
		    if(str.length()<1) return 0;
		    if(str.length()==0||str[0]=='0')return 0;
		    if(str.length()==1)return 1;
		    int mod=1e9+7;
		    
		    long int count1=1;
		     long int count2=1;
		    for( int i=1;i<str.length();i++){
		        long int d=str[i]-'0';
		        long int dd=(str[i-1]-'0')*10+d;
		        long int count=0;
		        if(d>0){
		            count+=count2%mod;
		        }
		        if(dd>=10&&dd<=26){
		            count+=count1%mod;
		        }
		        count1=count2;
		        count2=count;
		    }
		    return count2%mod;
		}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.CountWays(str);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends
