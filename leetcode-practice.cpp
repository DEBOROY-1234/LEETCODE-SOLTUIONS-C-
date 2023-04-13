#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    
	    int n;
	    cin>>n;
	    int a[n];
	    
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    
	    int c=0;
	    
	    for(int i=0;i<n;i++){
	        
	        int strike = (a[i]/i+1)*100;
	        
	        if(strike==100){
	            c++;
	        }
	        else{
	            c=0;
	        }
	    }
	    
	    cout<<c<<endl;
	    
	}
	return 0;
}
