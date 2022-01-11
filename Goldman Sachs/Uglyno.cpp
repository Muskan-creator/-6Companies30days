ull getNthUglyNo(int n) {
	   vector <long long int > ugly(n);
    
	   ugly[0]=1;
	   int count=1;
	   int idx1=0;
	   int idx2=0;
	   int idx3=0;
	   while(count<n){
	       long next1=ugly[idx1]*2;
	       long next2=ugly[idx2]*3;
	       long next3=ugly[idx3]*5;
	       long next=min({next1,next2,next3});
	       if(next==next1){
	           idx1++;
	       }
	       if(next==next2){
	           idx2++;
	       }
	       if(next==next3){
	           idx3++;
	       }
	       ugly[count++]=next;
	   }
	   return ugly[n-1];
	    
	}
