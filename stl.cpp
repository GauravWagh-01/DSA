//
// Created by Gaurav Wagh on 12-06-2025.
//
#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <set>

using namespace std;
int main() {
    string s;
    // cin>>s;
    vector<int> v={1,2,3,4,5,6,7,8,9};
    int last=v.back();
    cout<<last<<endl;
    for (int i : v) {
        cout << i << " ";
    }

    cout << endl<<"Iterator"<<endl;
    vector<int>:: iterator it=v.begin();
    cout<<"Begin: -"<<*it<<endl;
    vector<int> :: iterator it2=v.end()-1;
    cout<<"End: -"<<*it2<<endl;

    cout<<"Push back & Emplace back"<<endl;
    v.push_back(10);
    v.emplace_back(11);

    for (vector<int>::iterator it=v.begin();it!=v.end();it++) {
        cout<<*it<<" ";
    }

    cout<<endl;
    v.erase(v.begin()+1);
    for (vector<int>::iterator it=v.begin();it!=v.end();it++) {
        cout<<*it<<" ";
    }

    cout<<endl;
    cout<<"Pair"<<endl;
    pair<int,string> p={1,"Apple"};
    cout<<p.first<<endl;
    cout<<p.second<<endl;

    cout<<endl;
    cout<<"Nested Pair"<<endl;
    pair<pair<int,bool>,pair<int,string>> p1={{1,false},{2,"Apple"}};
    cout<<p1.first.first<<endl;
    cout<<p1.first.second<<endl;

    cout<<"\nQueue\n";
    queue <int> q;
    q.emplace(1);
    q.emplace(2);
    q.emplace(3);
    q.emplace(4);
    q.emplace(15);
    q.emplace(6);
    // for (int i =q.front();i!=q.back()+1;i++) {
    //     if (i==1) {
    //         cout<<q.front()<<" ";
    //     }else {
    //         cout<<q.front()+i-1<<" ";
    //     }
    // }
    queue<int> q2;
    while (!q.empty()) {
        cout<<q.front()<<" "<<endl;
        q2.push(q.front());
        q.pop();
    }
    cout<<endl;

    cout<<"\nStack\n";
    stack <int> s1;
    s1.emplace(1);
    s1.emplace(2);
    s1.emplace(3);
    s1.emplace(4);
    s1.emplace(15);
    s1.emplace(6);

    stack <int> s2;
    while (!s1.empty()) {
        cout<<s1.top()<<" "<<endl;
        s2.push(s1.top());
        s1.pop();
    }
    cout<<endl;

    cout<<"\nDequeue\n";
    deque<int> d1={1,2,3,4,5,6,7,8,9};
    deque <int> d2={0};
    int i=0;
    while (i<d1.size()) {
        cout<<d1.front()+i<<" "<<endl;
        d2.emplace_back(d1.front()+i);
        i++;
    }
    cout<<endl;

    cout<<"\nSet\n";
    set<int> set1={1,2,3,4,5,6,7,8,9};
    deque <int> set2={0};
    auto it1=set1.find(2);
    cout<<"Find:- "<<*it1<<endl;

    int arr[10]={1,2,3,4,5,6,7,8,9};
    return 0;
}
