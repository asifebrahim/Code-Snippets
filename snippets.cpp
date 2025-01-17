priority_queue<int,vector<int>,grater<>> pq;

//for min heap as in c++ normal priority queue is max heap 

//so we use min heap by using grater as the comparator.

//We can also use decltype in that case

auto compare=[](const int &a,const int &b){
    return a>b;
}
priority_queue<int,vector<int>,decltype(compare)> pq;

//its more like a custom comparator

//in pq the return acts kinda opposite to normal comparators return type.

priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;

//decltype is used to express the the type of a expression during compile time so during compile time the 
// priority queue sets its heap structre by decltype