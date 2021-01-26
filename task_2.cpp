#include <bits/stdc++.h>
using namespace std;

int efficientJanitor(vector<float> weight)
{
    int left=0,right=weight.size()-1,cnt=0;
    while(left<=right)
    {
        if(left==right)
        {
            cnt++;
            break;
        }
        if((weight[left]+weight[right])<=3)
        {
            cnt++;
            left++;
            right--;
        }
        else
        {
            right--;
            cnt++;
        }
    }
    return cnt;
}

int main()
{
    int n,input;
    cin>>n;
    vector<float> weight(n);
    for(int i=0; i<n; i++)
    {
        cin>>weight[i];
    }
    sort(weight.begin(),weight.end());
    cout<<efficientJanitor(weight)<<endl;
}
