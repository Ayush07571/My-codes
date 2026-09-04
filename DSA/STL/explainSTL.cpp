#include <bits/stdc++.h>
using namespace std;

void explainVectors(){


    //declaration:
    vector<int> v;
    vector<int> v1 = {1,2,3,4,5};
    vector<pair<int,int>> v2;

    //initialization
    //{
    
    v.push_back(1);
    v.emplace_back(1);

    v2.push_back({1,2});
    v2.emplace_back(2,3);

    //to insert same values multiple times:
    vector<int> v3(5,100); //{100,100,100,100,100}

    //Vector initially can be defined with a size, which can be increased later on:
    vector<int> v4(3);
    v4.push_back(1);
    v4.push_back(2);
    v4.push_back(3); //till here the size of vector is defined and after this it will start increasing;
    v4.push_back(4);

    //Using of values of one vector as values of another vector;
    vector<int> v5(v3);
    
    //}

    //Accessing from a vector:
    //{
    
    //using indexing:

    cout<<"Using normal for loop: "<<endl;
    for(int i=0;i<3;i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;

        //oR:
    
    cout<<"Using for-each and auto: "<<endl;
    for(auto it:v1){  //auto => STL feature that automatically defines the datatype
        cout<<it<<" ";
    }
    cout<<endl;


    //using iterators:

    /*
    Concept of Iterators:
    vector<int>::iterator it = v1.begin(); //v.begin() points to first element of the vector
    it++; //since we have to print the 2nd value in vector v1;
    cout<<*(it)<<" ";

    it+=2;
    cout<<*(it)<<endl;

    Apart from v.begin(); we can also use:
    - v.end() => points to the next address after the last element;
    - v.back() => points to last element
    others: v.rbegin(); v.rend(); 
    */

    cout<<"Using iterator: "<<endl;
    for(vector<int>::iterator it = v1.begin();it<v1.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;

        //oR:
    
    cout<<"Now using 'auto':"<<endl;
    for(auto it = v1.begin();it<v1.end();it++){ //auto => STL feature that automatically defines the datatype
        cout<<*(it)<<" ";
    }
    cout<<endl;

    //}

    //Deleting from a vector:
    v1.erase(v1.begin()+1); //erases the second element of v1, {1,2,3,4,5} -> {1,3,4,5}
    v1.erase(v1.begin()+2,v1.end()); //deleted all element from 3rd element to last element; {1,3,4,5} -> {1,3}

    cout<<"After erasing all the required elements: "<<endl;
    for(auto i:v1){
        cout<<i<<" ";
    }
    cout<<endl;

    //Inserting in a vector:
    v1.insert(v1.begin()+1,2); //{1,2,3}
    v1.insert(v1.begin()+3,2,4);  //{1,2,3,4,4}

    cout<<"after inserting the elements: "<<endl;
    for(auto i : v1) cout<<i<<" ";
    cout<<endl;
        
    //inserting the value of one vector into other:
    v.insert(v.end(), v1.begin(),v1.end());
    cout<<"Values of vector 'v' after inserting the values of vector 'v1' in 'v': "<<endl;
    for(auto i:v) cout<<i<<" ";
    cout<<endl;

    //Other Functions of vector:
    //size():
    cout<<"Size of vector v1: "<<v1.size()<<endl; //tells the size of vector

    //swap():
    v3.swap(v);
    cout<<"Values of v3 and v after swapping: "<<endl;
    cout<<"v3: ";
    for(auto i: v3) cout<<i<<" ";
    cout<<endl;
    cout<<"v: ";
    for(auto i: v) cout<<i<<" ";
    cout<<endl;

    //pop_back():
    v3.pop_back();
    cout<<"Updated v3 after pop_back: ";
    for(auto i:v3) cout<<i<<" ";
    cout<<endl;

    //clear():
    v.clear();
    cout<<"Updated v after clear(): ";
    for(auto i:v) cout<<i<<" ";
    cout<<endl;

    //empty():
    cout<<"Check if v3 is empty or not: "<<v3.empty()<<endl;
    cout<<"Check if v is empty or not: "<<v.empty()<<endl;

}

void explainList(){
    //In a list we can insert or erase from back as well as front and rest other things are same as vectors
    list<int> ls;

    ls.push_back(1); //{1}
    ls.emplace_back(2); //{1,2}
    
    ls.push_front(-1); //{-1,1,2}
    ls.emplace_front(-2); //{-2,-1,1,2}

    cout<<"Values stored in ls: ";
    for(auto i:ls) cout<<i<<" ";
    cout<<endl;

    //rest all functions same as vectors
}

void explainDeque(){
    //Similar to vector and list

    deque<int> dq;

    dq.push_back(1); //{1}
    dq.emplace_back(2); //{1,2}

    dq.push_front(-1); //{-1,1,2}
    dq.emplace_front(-2); //{-2,-1,1,2}

    cout<<"Values of dq: ";
    for(auto i:dq) cout<<i<<" ";
    cout<<endl;

    dq.pop_back(); //{-2,-1,1}
    dq.pop_front(); //{-1,1}
    cout<<"Updated values of dq after pop_back and pop_front: ";
    for(auto i:dq) cout<<i<<" ";
    cout<<endl;

    cout<<"Value of 1st element of dq: "<<dq.front()<<endl;
    cout<<"Value of last element of dq: "<<dq.back()<<endl;

    //rest functions like begin,end,rbegin,rend,clear,insert, size, swap are same as vector;
}

void explainStack(){
    //Follows: LIFO => Last In First Out approach;

    stack<int> st;

    for(int i=1;i<=4;i++){
        st.push(i);
    }

    st.emplace(5);

    cout<<"Value of top element of the stack: "<<st.top()<<endl;; //returns the value of the element at the top of stack;

    st.pop(); //deletes the top element;

    cout<<"Size of the stack: "<<st.size()<<endl;

    cout<<"Check if stack is empty or not: "<<st.empty()<<endl;

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;

    cout<<"Now, again check if stack is empty or not: "<<st.empty()<<endl;

    /*
    //Swapping in stack:
    stack<int> s1,s2;
    s1.swap(s2);
    */

}

void explainQueue(){
    //Follows: FIFO => First In First Out

    queue<int> q;
    q.push(1); //{1} => 1
    q.push(2); //{1,2} => 2 1
    q.emplace(3); //{1,2,3} => 3 2 1 (where 3 is the back and 1 is the front)
    cout<<"First element of the queue (the one which was input last): "<<q.back()<<endl;

    q.back()+=5; //3+5 = 8
    cout<<"Updated first element of the queue: "<<q.back()<<endl;

    cout<<"Last element of the queue (the one which was input first): "<<q.front()<<endl;

    q.pop(); //Deletes the first element to enter the queue

    cout<<"Last element of the queue after poping: "<<q.front()<<endl;
    cout<<"First element of the queue after popping: "<<q.back()<<endl;

    cout<<"Elements stored in the queue: ";
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;

    //all other operations like swap, size and empty are same as stack;
}

void explainPriorityQueue(){
    //Similar to queue but the largest value stays at top.

    //Maximum Heap oR Max Heap (maximum element at top/front):
    priority_queue<int> pq;
    pq.push(5); //{5}
    pq.push(3); //{5,3}
    pq.push(8); //{8,5,3}
    pq.emplace(10); //{10,8,5,3}

    cout<<"Top element of pq (Max heap): "<<pq.top()<<endl;

    pq.pop();

    cout<<"Top element of pq after popping (Max heap): "<<pq.top()<<endl;

    //size, swap, empty functions, same as others

    //Min Heap (Minimum element at top):
    priority_queue<int> p;
    p.push(5); //{5}
    p.push(3); //{3,5}
    p.push(8); //{3,5,8}
    p.emplace(10); //{3,5,8,10}

    cout<<"Top element of min heap: "<<p.top()<<endl;

}

void explainSet(){
    //Stores everything in sorted order, but only unique elements

    set<int> st;
    
    for(int i=1;i<=5;i++){
        st.insert(i);
    }
    st.emplace(6);

    cout<<"Size of set: "<<st.size()<<endl;

    cout<<"Values stored in set are: ";
    for(auto i:st){
        cout<<i<<" ";
    }
    cout<<endl;

    for(int i=1;i<=5;i++){
        st.insert(i);
    }

    cout<<"Added duplicate values, the updated set (no duplicates allowed in set): ";
    for(auto i:st){
        cout<<i<<" ";
    }
    cout<<endl;

    auto it = st.find(3);
    cout<<"Value stored at it: "<<*(it)<<endl;
    
    auto it2 = st.find(10);
    cout<<"Value stored at it2: "<<*(it2)<<endl;

    st.erase(2);
    cout<<"Updated values of set after deleting 2: ";
    for(auto i:st){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"The count of any number in set is always 1\neg: count of '3' in st: "<<st.count(3)<<endl;

    auto it3 = st.find(3);
    auto it4 = st.find(6);
    st.erase(it3,it4); //In order to delete multiple elements we can use this technique; also remember we can perform erase operation through the iterator.

    cout<<"Updated values of set after deleting multiple values: ";
    for(auto i:st){
        cout<<i<<" ";
    }
    cout<<endl;

    for(int i=1;i<=5;i++){
        st.insert(i);
    }

    auto it5 = st.lower_bound(2); //finds the lower bound
    cout<<*(it5)<<endl;
    auto it6 = st.upper_bound(2); //finds the upper bound
    cout<<*(it6)<<endl;
    

}

void explainMultiSet(){
    //Similar to set but not unique yet sorted

    multiset<int> mt;
    mt.insert(1);
    mt.insert(1);
    mt.insert(1);
    mt.insert(2);
    mt.emplace(3);

    cout<<"Elements of multiset: ";
    for(auto i:mt){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Count of 1: "<<mt.count(1)<<endl;

    mt.erase(mt.find(1));
    cout<<"Updated elements of multiset after erasing 1: ";
    for(auto i:mt){
        cout<<i<<" ";
    }
    cout<<endl;

    mt.erase(mt.find(1),mt.find(1+2));
    cout<<"Updated elements of multiset after erasing a collection of elements: ";
    for(auto i:mt){
        cout<<i<<" ";
    }
    cout<<endl;

    //Rest all functions are same as that of set.

}

void explainUnorderedSet(){
    //Unique but not Sorted
    //All functions similar to set EXCEPT upper_bound() and lower_bound()

    unordered_set<int> us;
    us.insert(1);
    us.insert(5);
    us.insert(2);

    cout<<"Values of unordered set: ";
    for(auto i:us){
        cout<<i<<" ";
    }
    cout<<endl;

}

void explainMap(){
    //Uses key-value pair

    //Initialization:
    map<int,int> m1;
    map<int,pair<int,int>> m2;
    map<pair<int,int>,int> m3;

    //Inserting values:
    m1[0]=1;
    m1[1]=2;
    m1[3]=4;
    m1.emplace(2,3);
    m1.insert({4,5});

    cout<<"Values stored in map (m1): ";
    for(auto i:m1){
        cout<<i.first<<" "<<i.second<<", ";
    }
    cout<<endl;

    m2.emplace(1,pair<int,int>(2,3));
    m2[2] = {4,5};
    m2.insert({3,{1,5}});
    cout<<"Values stored in map (m2): ";
    for(auto i:m2){
        cout<<i.first<<"->"<<i.second.first<<" "<<i.second.second<<", ";
    }
    cout<<endl;

    m3[{1,1}]=1;
    m3[{1,2}]=2;
    m3.insert({{1,3},3});
    m3.emplace(pair<int,int>(2,1),4);

    cout<<"Values stored in map (m3): ";
    for(auto i:m3){
        cout<<i.first.first<<" "<<i.first.second<<" -> "<<i.second<<", ";
    }
    cout<<endl;

    cout<<"Value of 2nd key of m1: "<<m1[2]<<endl;
    cout<<"Value of 5th key (doesn't exist) of m1: "<<m1[5]<<endl;

    auto it = m1.find(4);
    cout<<"value of 4th key using itereator: "<<(*it).second<<endl;

    auto it1=m1.lower_bound(2);
    cout<<"Upper bound of 2:-\nKey: "<<(*it1).first<<" ,Value: "<<(*it1).second<<endl;
    auto it2=m1.upper_bound(2);
    cout<<"Lower bound of 2:-\nKey: "<<(*it2).first<<" ,Value: "<<(*it2).second<<endl;

    //erase, swap, size, empty are same as other.

}

void explainMultimap(){
    //Similar to dictionary but duplicate keys can be stored here, and hence m1[key] will not work.

    multimap<int,int>mm1;
    mm1.insert({1,2});
    mm1.emplace(2,3);
    // mm1[3]=4; //Error
    cout<<"Values stored in mm1: ";
    for(auto i:mm1) cout<<i.first<<" -> "<<i.second<<", ";
    cout<<endl;
}

void explainUnorderedMap(){
    //Keys here are unique BUT not sorted;

    unordered_map<int,int>um1;
    um1[2]=1;
    um1[1]=4;
    um1[2]=9;
    um1[3]=10;
    cout<<"Values stored in the unordered set: ";
    for(auto i:um1){
        cout<<i.first<<" -> "<<i.second<<", ";
    }
    cout<<endl;
}

bool comp(pair<int,int>p1,pair<int,int>p2){
    if(p1.second<p2.second) return true;
    if(p1.second>p2.second) return false;
    if(p1.first>p2.first) return true;
    return false;
}
void explainAlgorithms(){

    cout<<"1)Sort()\n2)_builtin_popcount()\n3)next_permutation()\n4)max_element() & min_element()"<<endl;
    cout<<"Enter your choice: ";
    int ch;
    cin>>ch;
    switch (ch){
        case 1: {
            int a[] = {1,4,2,6,2,6,2,6,7,3,6,4};
            cout<<"Initial Array: ";
            for(auto i:a) cout<<i<<", ";
            cout<<endl;
            cout<<"Sorted Array: ";
            sort(a,a+12);
            for(auto i:a) cout<<i<<", ";
            cout<<endl;
            cout<<"Descending order: ";
            sort(a,a+12,greater<int>());
            for(auto i:a) cout<<i<<", ";
            cout<<endl;    

            vector<int> v = {1,4,2,6,2,6,2,6,7,3,6,4};
            cout<<"Initial Vector: ";
            for(auto i:v) cout<<i<<", ";
            cout<<endl;
            cout<<"Sorted vector: ";
            sort(v.begin(),v.end());
            for(auto i:v) cout<<i<<", ";
            cout<<endl;
            cout<<"Descending order: ";
            sort(v.begin(),v.end(),greater<int>());
            for(auto i:v) cout<<i<<", ";
            cout<<endl;

            //Sort in MY WAY - sort it sccording to second element, if second element is same then sort it according to first element but in descending
            pair<int,int> p[] = {{1,2},{2,1},{4,1}};
            cout<<"Initial pair: ";
            for(auto i:p){
                cout<<i.first<<" "<<i.second<<", ";
            }
            cout<<endl;
            sort(p,p+3,comp);
            cout<<"Sorted pair (Sort in MY WAY - sort it sccording to second element, if second element is same then sort it according to first element but in descending: ";
            for(auto i:p){
                cout<<i.first<<" "<<i.second<<", ";
            }
            cout<<endl;
            
            break;
        }

        case 2: {
            // __builtin_popcount(variable): counts how many '1' or 'set bits' are there in an integer.
            // __builtin_popcountll(variable): counts how many '1' or 'set bits' are there in a long long.

            int num;
            cout<<"Enter an integer: ";
            cin>>num;
            int cnt = __builtin_popcount(num);
            cout<<"Count of set bits or '1' in binary form of the integer: "<<cnt<<endl;

            long long n;
            cout<<"Enter an long long value: ";
            cin>>n;
            int cnt2 = __builtin_popcount(n);
            cout<<"Count of set bits or '1' in binary form of the integer: "<<cnt2<<endl;

            break;
        }

        case 3: {
            string s;
            cout<<"Enter a string: ";
            cin>>s;
            sort(s.begin(),s.end());
            cout<<"All the possible permutations: "<<endl;
            do{
                cout<<s<<endl;
            } while(next_permutation(s.begin(),s.end()));

            break;
        }

        case 4: {
            int a[]={1,10,5,6};
            int max = *max_element(a,a+4);
            cout<<"Maximum element: "<<max<<endl;
            int min = *min_element(a,a+4);
            cout<<"Minimum element: "<<min<<endl;

            break;
        }

        default:
        cout<<"Invalid Choice"<<endl;
        
    }

    
} 

int main(){
    cout<<"Select your choice: "<<endl;
    cout<<"1)Vector\n2)List\n3)Deque\n4)Stack\n5)Queue\n6)Priority Queue\n7)Set\n8)Multiset\n9)Unordered Set\n10)Map\n11)Multimap\n12)Unordered Map\n13)Algorithms"<<endl;
    int ch;
    cout<<"Enter your choice: ";
    cin>>ch;
    switch(ch){
        case 1:
        explainVectors();
        break;

        case 2:
        explainList();
        break;

        case 3:
        explainDeque();
        break;

        case 4:
        explainStack();
        break;

        case 5:
        explainQueue();
        break;

        case 6:
        explainPriorityQueue();
        break;

        case 7:
        explainSet();
        break;

        case 8:
        explainMultiSet();
        break;

        case 9:
        explainUnorderedSet();
        break;

        case 10:
        explainMap();
        break;

        case 11:
        explainMultimap();
        break;

        case 12:
        explainUnorderedMap();
        break;

        case 13:
        explainAlgorithms();
        break;

        default:
        cout<<"Invalid choice"<<endl;
    }
    
    return 0;
}