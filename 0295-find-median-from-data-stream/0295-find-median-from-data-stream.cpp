class MedianFinder {
public:
    priority_queue<int> max_heap;
    priority_queue<int, vector<int>, greater<int>> min_heap;
    int size;
    MedianFinder() {
        size = 0;
    }
    
    void addNum(int num) {
        if(size == 0){
            max_heap.push(num);
        }
        
        else if(size%2 == 1){
            int x=max_heap.top();
            if(num > x){
                min_heap.push(num);
            }
            else 
            {
                max_heap.pop();
                max_heap.push(num);
                min_heap.push(x);
            }
        }
        else 
        {
            int x=min_heap.top();
            if(num<x) {
                max_heap.push(num);
            }
            else 
            {
                min_heap.pop();
                min_heap.push(num);
                max_heap.push(x);
            }
        }
        size++;
    } 
    
    double findMedian() {
       if(size % 2 == 1)
       { 
           return max_heap.top();
       }
       else return (double) (max_heap.top()+min_heap.top())/2;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */