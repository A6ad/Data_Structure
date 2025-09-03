#include <bits/stdc++.h>
using namespace std;

class student {
public:
    string name;
    int roll;
    int marks;
    student(string name, int roll, int marks) {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

class cmp
{
    public:
     bool operator() (student l,student r)
     {
          if (l.marks == r.marks) {
            return l.roll > r.roll;
        }
        return l.marks < r.marks;  
    }
};

int main() {
    priority_queue<student, vector<student>, cmp> maxheap;
    map<int,int> mp; 
    int n;
    cin>>n;
    for (int i = 0; i < n; i++) {
        string name;
        int roll, marks;
        cin>>name>>roll>> marks;
        student s(name,roll,marks);
        mp[roll]++;
        maxheap.push(s);
    }
    int q;
    cin>>q;
    while(q--) {
        int command;
        cin >> command;
        if (command == 0) {
            string name;
            int roll,marks;
            cin>>name>>roll>>marks;
            student s(name, roll, marks);
            mp[roll]++;
            maxheap.push(s);
            while (!maxheap.empty() && mp[maxheap.top().roll] == 0) {
                maxheap.pop();
            }
            if(!maxheap.empty())
            {
                cout<<maxheap.top().name<<" "<<maxheap.top().roll<<" "<<maxheap.top().marks<<endl;
            } 
            else{
                cout<<"Empty"<<endl;
            }
        } 
        else if(command == 1)
        {
            while(!maxheap.empty() && mp[maxheap.top().roll] == 0) {
                maxheap.pop();
            }
            if(!maxheap.empty())
            {
                cout<<maxheap.top().name<<" "<< maxheap.top().roll<<" "<<maxheap.top().marks<<endl;
            } 
            else{
                cout<<"Empty"<<endl;
            }
        }
         else if(command == 2) {
            while (!maxheap.empty() && mp[maxheap.top().roll]==0) {
                maxheap.pop();
            }
            if (!maxheap.empty()) {
                student topStudent = maxheap.top();
                mp[topStudent.roll]--;
                maxheap.pop();
                while (!maxheap.empty() && mp[maxheap.top().roll] == 0) {
                    maxheap.pop();
                }
                if (!maxheap.empty())
                {
                    cout << maxheap.top().name<<" "<< maxheap.top().roll<<" "<< maxheap.top().marks<<endl;
                }
                else{
                    cout << "Empty" << endl;
                }
            }else
            {
                cout << "Empty" << endl;
            }
        }
    }
    return 0;
}
