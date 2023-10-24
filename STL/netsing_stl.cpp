// #include<iostream>
// #include<bits/stdc++.h>

// using namespace std;


// int main () {
    
//     map<pair<string,string>, vector<int>> m;
//     int n;
//     cin>>n;
//     for(int i =0;i<n;i++){
//         string fn , ln ;
//         int cnt;
//         cin>>fn>>ln>>cnt;
//         for(int i =0;i<cnt;i++){
//             int x;
//             cin>>x;
//             m[{fn,ln}].push_back(x);
//         }
//     }
//     for(auto &pr:m){
//         auto &fullname = pr.first;
//         auto &list = pr.second;
//         cout<<fullname.first<<" "<<fullname.second<<endl;
//         cout<<list.size()<<endl;
//         for(auto element: list){
//             cout<<element<<" ";
//         }
//         cout<<endl;
//     }

//     return 0;
// }

#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int main () {
    map<int, multiset<string> > m;

    int n;
    cin>>n;
    for(int i = 0;i<n;i++){
        int marks;
        string name;
        cin>>name>>marks;
        m[-1*marks].insert(name);
    }

    // auto curr_it = (--m.end());

    // while(true){
    //     auto &students = (*curr_it).second;
    //     auto &marks = (*curr_it).first;

    //     for(auto student: students){
    //         cout<<student<<" "<<marks<<endl;
    //     }
    //     if(curr_it==m.begin()){
    //         break;
    //     }
    //         curr_it--;
    // }

    for(auto marks_students_pr :m){
        auto &students = marks_students_pr.second;
        auto &marks = marks_students_pr.first;
        for(auto student: students){
            cout<<student<<" "<<-1*marks<<endl;
        }
    }

    return 0;
}