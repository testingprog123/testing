#include<bits/stdc++.h>
using namespace std;

int arrayManipulation(int n, vector<vector<int>> queries) {
   
    vector<long int> A(n,0); // sum or difference of K's value in the vector
    long len = queries.size();
    for(long i=0; i<len; i++)
    {
        //  step 1 as described above
        A[(queries[i][0])-1] = A[(queries[i][0])-1]+queries[i][2];
        if(queries[i][1]<n) // checking for segmentation fault
        {
            // step 2 as described above
            A[(queries[i][1])] = A[(queries[i][1])]-queries[i][2]; 
        }
       
    }
    long sum =0,x=0;
    // Step 3: Calculating maximum prefix array sum
    for(long i=0; i<n; i++)
        {
            x = x + A[i];
            if(x>sum)
            {
                sum = x;
            }
        }
    return sum;
}