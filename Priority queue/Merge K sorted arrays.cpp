#include<queue>
#include<vector>

class data{
    public:
int value;
int arrayindex;
int indexInArray;

data(int value, int arrayindex, int indexInArray)
{
    this->value= value;
    this->arrayindex = arrayindex;
    this->indexInArray = indexInArray;
}
};

struct mycomp{
    bool operator()(data &d1,data &d2)
    {
        return d1.value >d2.value;
    }
};


#include <vector>
#include<iostream>
using namespace std;
vector<int> mergeKSortedArrays(vector<vector<int>*> input) 
{
    // Write your code here
    vector<int> ans;

    priority_queue<data , vector<data> ,mycomp> pq;

    for(int i=0; i<input.size(); i++)
    {
        data d(input[i]->at(0),i, 0);
        pq.push(d);
    }

    while(!pq.empty())
    {
        data curr = pq.top();
         pq.pop();
        ans.push_back(curr.value);
       

        int ai = curr.arrayindex;
        int ia = curr.indexInArray;

        if(input[ai]->size()>ia+1)
        {
            data d(input[ai]->at(ia+1),ai, ia+1);
            pq.push(d);
        }
    }

    return ans;
}
