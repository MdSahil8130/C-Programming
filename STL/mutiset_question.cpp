// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int main () {
//     int t;
//     cin>>t;
//     while(t--){
//         int n;// no of bags
//         int k;//no of minutes
//         cin>>n>>k;
//         multiset<long long> bags;
//         for(int i =0;i<n;i++){
//             long long candy_cnt;
//             cin>>candy_cnt;
//             bags.insert(candy_cnt);
//         }
//         long long total_candies = 0;
//         for(int i =0;i<k;i++){
//             auto last_it  = (--bags.end());
//             long long candy_cnt = *last_it;
//             total_candies += candy_cnt;
//             bags.erase(last_it);
//             bags.insert(candy_cnt/2);
//         }
//         cout<<total_candies<<endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n; //  n no of students in class
        int m; // m more student ot come
        cin >> n >> m;
        int students = n + m;
        multiset<long long> bags;
        for (int i = 0; i < students; i++)
        {
            long long candies;
            cin >> candies;
            bags.insert(candies);
        }

        // for(auto value :  bags){
        //     cout<<value<<endl;
        // }

        auto it = bags.begin();

        // for (int i = 0; i < n; i++)
        // {
            it = bags.find(n-1);
            // ++it;
        // }
        cout << "***********" << endl
             << *it << endl;

        
        auto itr = bags.begin();

        cout<<"VALUE at begin "<<*itr<<endl;
        

        if((*it)==(*itr)){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }


        // for (int i = 0; i < n; i++)
        // {
        //     if ((*it) == (*itr))
        //     {
        //         cout << "YES" << endl;
        //     }
        //     else
        //     {
        //         cout << "NO" << endl;
        //     }
        //     it++;
        //     itr++;
        // }
    }
    return 0;
}