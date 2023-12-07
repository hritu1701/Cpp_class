#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>v;

    cout<<"Enter elements: ";
    for(int i=0; i<v.size();i++)
    {
        cin>>v[i];
    }
    cout<<endl;

cout<<"The elements are: ";
for(auto it:v)      
    {
        cout<<it<<" ";
    }
    cout<<endl;
return 0;
}
