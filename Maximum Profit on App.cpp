#include<bits/stdc++.h>
using namespace std;

int maximumProfit(int budget[], int n) {
    
  sort(budget,budget+n);
  int k=0;
  int p=0;
  int max=0;
  
  for(int i=0;i<n;i++)
  {
    k=n-i;
    p=budget[i]*k;
    if(max<p)
    {
      max=p; 
    }
      
  }
  return max;
}

int main() {
    int n ,*input,i,*cost;
    cin>>n;
    input = new int[n];
    for(i = 0;i < n;i++)
        cin>>input[i];
    
    cout << maximumProfit(input, n) << endl;
    return 0;
}
