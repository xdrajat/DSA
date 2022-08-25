//Complexity - 

//Using brute force approach – O(n^2) 

//Using sorting and searching – O(n logn) 

//Using data structure unordered set – O(n)  

 

 

#include<bits/stdc++.h> 

#include<vector> 

#include<unordered_set> 

#include<string> 

using namespace std; 

  

vector<int> pairsum(vector<int> arr, int sum){ 

  

    unordered_set<int> s; 

    vector<int> result; 

  

    for(int i=0;i<arr.size();i++){ 

        int x= sum-arr[i]; 

         

        if(s.find(x) != s.end()){          //find element x in set s 

             

            result.push_back(x); 

            result.push_back(arr[i]); 

             

            return result; 

        } 

        s.insert(arr[i]); 

    } 

    return {}; 

} 

  

int main(){ 

    vector<int> arr = {10,5,2,3,-6,9,11}; 

    int s = 4; 

     

    auto p = pairsum(arr,s); 

    if(p.size()==0){ 

        cout<<"No such pair"; 

    } 

    else{ 

        cout<<p[0]<<", "<<p[1]<<endl; 

    } 

} 
