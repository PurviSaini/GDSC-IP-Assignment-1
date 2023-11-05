//  Given an array A of size N of integers. Your task is to find the sum of minimum and maximum element in the array.
#include <bits/stdc++.h>
using namespace std;

 int findSum(int A[], int N)
    {
        int maximum=INT_MIN;
        int minimum=INT_MAX;
        
        for(int i=0;i<N;i++){
            if(maximum<A[i]){
                maximum=A[i];
            }
            if(minimum>A[i]){
                minimum=A[i];
            }
        }
        
        return maximum+minimum;

    }

    //Time complexity: O(N)
    //Space complexity: O(1)