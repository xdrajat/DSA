#include<bits/stdc++.h> 

#include<vector> 

#include<string> 

using namespace std; 

  

vector<string> fizzbuzz(int n){ 

    vector<string> result; 

     

    int i; 

    for(i=1;i<=n;i++){ 

        if(i%3==0 && i%5==0){ 

            result.push_back("FizzBuzz"); 

        } 

        else if(i%3==0){ 

            result.push_back("Fizz"); 

        } 

        else if(i%5==0){ 

            result.push_back("Buzz"); 

        } 

        else{ 

            result.push_back(to_string(i)); 

        } 

    } 

    return result; 

} 

  

int main(){ 

    vector<string> arr = fizzbuzz(20); 

    for(string i : arr){ 

        cout<<i<<","; 

    } 

     

    return 0; 

} 
