#include<bits/stdc++.h>
using namespace std;

bool findPairs(int arr[], int n) {
  
  unordered_map<int,int> map;
  
  int a[n][n];
  
   for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      
        a[i][j]=0;
    }
  }
	
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      if(i==j)
      {
        a[i][j]=0;
      }
      else if(a[j][i]!=0)
       a[i][j]=0;
      else
        a[i][j]=arr[i]+arr[j];
    }
  }
  
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      map[a[i][j]]+=1;
      if(map[a[i][j]]>1 && a[i][j]!=0)
        return true;
    }
  }
     return false; 
}


int main() {
	int n=0;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
    if(findPairs(arr,n)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}
