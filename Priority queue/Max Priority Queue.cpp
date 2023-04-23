#include<vector>
class PriorityQueue {
    // Declare the data members here
    vector<int> pq;

   public:
    PriorityQueue() {
        // Implement the constructor here
    }

    /**************** Implement all the public functions here ***************/

    void insert(int element) {
        // Implement the insert() function here
        pq.push_back(element);
        int childindex = pq.size()-1;

        while(childindex>0)
        {
             int parentindex = (childindex-1)/2;
            if(pq[childindex]>pq[parentindex])
            {
                int temp = pq[parentindex];
                pq[parentindex] = pq[childindex];
                pq[childindex] = temp;
            }
            else
            {
                break;
                
            }

            childindex = parentindex;
        }
    }

    int getMax() {
        // Implement the getMax() function here
        if(isEmpty())
        {
            return -1;
        }
        return pq[0];

    }

    int removeMax() {
        // Implement the removeMax() function here
         int max = pq[0];
        pq[0] = pq[pq.size()-1];
        pq.pop_back();

        int parentIndex = 0;

        while(pq[(2*parentIndex)+1] ||pq[(2*parentIndex)+2])
        {
            int childindexleft = (2*parentIndex)+1;
            int childindexright = (2*parentIndex)+2;
            int maxIndex =parentIndex;
            if(pq[childindexleft]<pq[childindexright])
            maxIndex = childindexright;
            if(pq[childindexleft]>pq[childindexright])
            {
                 maxIndex = childindexleft;
            }

            if(pq[parentIndex] < pq[childindexleft] ||pq[parentIndex] < pq[childindexright])
            {
               int temp = pq[parentIndex];
               pq[parentIndex] = pq[maxIndex];
               pq[maxIndex] = temp;
            }
            else{
                break;
            }

            parentIndex = maxIndex;
           
        }

        return max;

    }

    int getSize() { 
        // Implement the getSize() function here
        return pq.size();
    }

    bool isEmpty() {
        // Implement the isEmpty() function here
        return pq.size()==0;
    }
};
