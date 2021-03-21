#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,temp;
    cin>>m>>n;
    vector<vector<int>> matrix;
    for(int i=0;i<m;i++)
    {
        vector<int>v;
        for(int j=0;j<n;j++)
        {
            cin>>temp;
            // matrix[i][j]=temp;
            v.push_back(temp);
        }
        matrix.push_back(v);
        v.clear();
    }
  
    int top=0,down=n-1,left=0,right=m-1;
    int val=0;
    while(top<=down && left<=right)
    {
        if(val==0)
        {
            for(int i=top;i<=down;i++)
            {
                cout<<matrix[left][i]<<" ";
                
            }
            left+=1;
        }
        else if(val==1)
        {
            for(int i=left;i<=right;i++)
            {
                cout<<matrix[i][down]<<" ";
               
            }
             down-=1;
        }
        else if(val==2)
        {
            for(int i=down;i>=top;i--)
            {
                cout<<matrix[right][i]<<" ";
                
            }
            right-=1;
        }
        else if(val==3)
        {
            for(int i=right;i>=left;i--)
            {
                cout<<matrix[i][top]<<" ";
               
            }
             top+=1;
        }
        val=(val+1)%4;
    }
}