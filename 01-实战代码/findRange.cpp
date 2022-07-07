#include<iostream>
#include<vector>
#include<list>

using namespace std;

vector<pair<int,int>> lstIndex;


void findRangeIndex(const vector<int> vecNums)
{
    for (size_t i = 1; i < vecNums.size(); i++)
    {
        if (vecNums[i-1] != vecNums[i])
        {
            lstIndex.push_back(make_pair(i-1,i));           
        }

        if (lstIndex.size() == 2)
        {
            return;
        }
        
    }
}

int main()
{
    vector<int> vecNums = {-1,-1,-1,0,0,0,0,0,1,1,1,1,1,1};

    findRangeIndex(vecNums);
    cout<<lstIndex[0].first<<","<<lstIndex[0].second << endl;
    cout<<lstIndex[1].first<<","<<lstIndex[1].second;

}