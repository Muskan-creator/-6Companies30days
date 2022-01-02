string encode(string src){
  int i=0,j=0;
    string ans="";
    while(j<src.size()){
        while(src[i]==src[j]){
            j++;
        }
        ans+=src[i] + to_string(j-i);
        i=j;
        
    }
    return ans;
}
