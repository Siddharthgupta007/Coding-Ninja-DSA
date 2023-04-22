#include <vector>

class PriorityQueue {
    vector<int> pq;

   public:
    bool isEmpty() { 
        return pq.size() == 0; 
    }

    int getSize() { 
        return pq.size(); 
    }

    int getMin() {
        if (isEmpty()) {
            return 0;
        }

        return pq[0];
    }

    void insert(int element) {
        pq.push_back(element);

        int childIndex = pq.size() - 1;

        while (childIndex > 0) {
            int parentIndex = (childIndex - 1) / 2;

            if (pq[childIndex] < pq[parentIndex]) {
                int temp = pq[childIndex];
                pq[childIndex] = pq[parentIndex];
                pq[parentIndex] = temp;
            } else {
                break;
            }

            childIndex = parentIndex;
        }
    }

    int removeMin() {
        // Write your code here
         int min = pq[0];
        pq[0] = pq[pq.size()-1];
        pq.pop_back();

        int parentIndex = 0;

        while(pq[(2*parentIndex)+1] != NULL || pq[(2*parentIndex)+2] != NULL)
        {
            int childindexleft = (2*parentIndex)+1;
            int childindexright = (2*parentIndex)+2;
            int minIndex;
            if(pq[childindexleft]<pq[childindexright])
            minIndex = childindexleft;
            else
            minIndex = childindexright;

            if(pq[parentIndex] > pq[minIndex])
            {
               int temp = pq[parentIndex];
               pq[parentIndex] = pq[minIndex];
               pq[minIndex] = temp;
            }
            else{
                break;
            }

            parentIndex = minIndex;
           
        }

        return min;

    }

    
};
