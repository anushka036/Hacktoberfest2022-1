/*CPP program to sort 0 1 2 in vector*/

#include<bits/stdc++.h>
using namespace std;

void sort012(vector<int>& nums) {
        
        // initialize variables:
        int low = 0, mid = 0, high = nums.size() - 1;
        
        // logic:
        while(mid <= high)
        {
            switch(nums[mid])
            {
                case 0: swap(nums[low++], nums[mid++]); break;
                
                case 1: mid++; break;
                
                case 2: swap(nums[mid], nums[high--]); break;
            }
        }
    }

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    vector<int>nums;
    cout<<"Enter input: ";
    for(int i= 0; i<n; i++)
    {
        int x ;
        cin>>x;
        nums.push_back(x);
    }

    sort012(nums);
    cout<<"Output: ";
    for(int i =0; i<n; i++)
    {
        cout<<nums[i]<<" ";
    }
    return 0;
}
