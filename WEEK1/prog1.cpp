/*
prog 1 
*/

// case 1 ... only 1 word can be entered in name of a person if cin>>str is used
// vector<string> str;
// cin>>str;


// #include<bits/stdc++.h>
// using namespace std;

// // given n names , print in reverse order 

// int main() 
// {
//     int n, i=0, n1;
//     vector<string> names;
//     //vector<int> nums;


//     cout<<"enter no. of ppl: "<<endl;
//     cin>>n; n1=n;
    
//     while(n--) {
//         cout<<"enter no.: "<<endl;
//         //cin>>names[i++];
//         /*
//         Indexing Issue:
//         You are incrementing i before using it to access the vector elements. 
//         So, the first input will be stored in nums[1], and the
//         second input will overwrite the first one at nums[1] instead of storing it at nums[0].
//          */

//         //cin>>nums[i++]; 
//         //int a; cin>>a;
//         // nums.push_back(a);
//         string str; cin>>str;
//         //cin => works/accepts only without gap words
//         names.push_back(str);
        
//     }
    
//     i=n1 -1;
//     cout<<"print names in rev order : "<< endl;
//     while(i>=0) {
//         cout<<names[i--]<<endl;
//         //cin>>names[i++];
//     }

// }

// 2
// case 2 ... use getline to use grp of words in one name ....
// not - only 1 word can be entered in name of a person if cin>>str is used
// vector<string> str;
// cin>>str;



#include<bits/stdc++.h>
using namespace std;

// given n names , print in reverse order 

int main() 
{
    int n, i=0, n1;
    
    //vector<int> nums;


    cout<<"enter no. of ppl: "<<endl;
    cin>>n; n1=n;
    vector<string> names(n);
    
    // $$ CPT $$  ...  IF getline to be used after cin ... then 
    // ...  use dummy getline after cin ... 
    // 
    string temp; getline(cin, temp);

    while(n--) {
        cout<<"enter name : " ;
        //cin>>names[i++];
        /*
        Indexing Issue:
        You are incrementing i before using it to access the vector elements. 
        So, the first input will be stored in nums[1], and the
        second input will overwrite the first one at nums[1] instead of storing it at nums[0].
         */

        //cin>>nums[i++]; 
        //int a; cin>>a;
        // nums.push_back(a);
        string str; 
        getline(cin, names[i++]); 
        // $$ CPT $$  ... use getline = for grp of words as string
        // cin>>str;
        //$$ CPT $$   ... cin => works/accepts only without gap words
        //names.push_back(str);
        
    }
    
    i=n1 -1;
    cout<<"print names in rev order : "<< endl;
    while(i>=0) {
        cout<<"Hi "<<names[i--]<<" !"<<endl;
        //cin>>names[i++];
    }

}

