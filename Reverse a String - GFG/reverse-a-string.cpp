//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


string reverseWord(string str);


int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}


// } Driver Code Ends


//User function Template for C++

string reverseWord(string str){
    stack<int> st;
   char ans;
    for(int i=0;i<str.size();i++){
        st.push(str[i]);
        
    }
    for(int i=0;i<str.size();i++){
        ans=st.top();
        str[i]=ans;
        st.pop();
    }
    return str;
  //Your code here
}

