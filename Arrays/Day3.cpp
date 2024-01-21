#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to sort the array into a wave-like array.
    void convertToWave(int n, vector<int>& arr){
        
        for (int i = 0; i < n; i += 2){
            
            if (i > 0 && arr[i] < arr[i - 1]){
                swap(arr[i], arr[i - 1]);
            }
            
            
            if (i < n - 1 && arr[i] < arr[i + 1]) {
                swap(arr[i], arr[i + 1]);
            }
        }
        
    }
};

int main()
{
    int t,n;
    cin>>t; 
    while(t--) 
    {
        cin>>n; //input size of array
        vector<int> a(n); //declare vector of size n
        for(int i=0;i<n;i++)
            cin>>a[i]; //input elements of array
        sort(a.begin(),a.end());
        Solution ob;
        ob.convertToWave(n, a);

        for(int i=0;i<n;i++)
            cout<<a[i]<<" "; //print array
            
        cout<<endl;
    }
}