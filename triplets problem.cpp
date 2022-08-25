//Find 3 numbers in array arr whose sum will be S 

//Display those 3 numbers as sorted 

//Display all the pairs as sorted 

 

 

 

 

#include<bits/stdc++.h> 

#include<vector> 

#include<unordered_set> 

#include<algorithm> 

  

using namespace std; 

  

vector<vector<int>> triplets(vector<int> arr, int s){ 

     

    vector<vector<int>> result; 

    int n= arr.size(); 

    sort(arr.begin(), arr.end()); 

     

    for(int i=0;i<n-3;i++){ 

        int j=i+1; 

        int k=n-1; 

         

        while(j<n){ 

            int current_s = arr[i]; 

            current_s += arr[j]; 

            current_s += arr[k]; 

             

            if(current_s==s){ 

                result.push_back({arr[i],arr[j],arr[k]}); 

                j++; 

                k--; 

            } 

            else if(current_s<s){ 

                j++; 

            } 

            else if(current_s>s){ 

                k--; 

            } 

        } 

    } 

    return result; 

}     

  

int main(){ 

    vector<int> arr = {1,2,3,4,5,6,7,8,9,15}; 

    int s = 18; 

    auto result = triplets(arr,s); 

     

    for(auto v : result){ 

        for(auto no : v){ 

            cout<<no<<","; 

        } 

        cout<<endl; 

    } 

     

    return 0; 

}  
