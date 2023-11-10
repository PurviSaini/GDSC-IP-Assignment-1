//Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.
#include <bits/stdc++.h>
using namespace std;  
    void sort012(int a[], int n)
    {
        int start=0;
        int mid=0;
        int end=n-1;
        
        while(mid<=end){
            if(a[mid]==1){
                mid++;
            }
            else if(a[mid]==0){
                swap(a[mid++],a[start++]);
            }
            else{
                swap(a[end--],a[mid]);
            }
        }
    
    }

// Time Complexity: O(N)
// Space Complexity: O(1)