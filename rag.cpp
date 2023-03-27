/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>

using namespace std;
// void covert_to_am(vector<vector<int>> &v){
    
// }

int main()
{
    
    int n;
    cout<<"Enter number of processes"<<endl;
    cin>>n;
    // enter edges
    int one_count=0;
    vector<vector<int>> v(n,vector<int> (n,0));
    for(int i=0;i<n;i++){
      
        for(int j=0;j<n;j++){
            
            cin>>v[i][j];
            if(v[i][j] == 1) one_count++;
        }
    }
    cout<<endl<<endl;
    // wait for graph
    
    cout<<"Wait for Graph"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(v[i][j] == 1){
                cout<<i+1<<"->"<<j+1<<endl;
            }
        }
    }
    
    int newVector[n+one_count][n+one_count]={0};
    int new_size = n+ one_count;
     for (int i=0;i<new_size;i++){
        for (int j=0;j<new_size;j++){
            newVector[i][j]=0;
        }
    }
    int count=0;
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if (v[i][j]==1){
                newVector[i][n+count]=1;
                newVector[n+count][j]=1;
                count++;
            }
        }
    }
    
    cout<<"RAG"<<endl;
    cout<<"   ";
    for(int i=0;i<new_size;i++){
        if(i<n){
            cout<<"P"<<i+1<<" ";
        }else{
            cout<<"R"<<i-n+1<<" ";
        }
    }
    cout<<endl;
    for(int i=0;i<new_size;i++){
          //printing
          if(i<n){
            cout<<"P"<<i+1<<" ";
        }else{
            cout<<"R"<<i-n+1<<" ";
        }
        //compute
        for(int j=0;j<new_size;j++){
            cout<<newVector[i][j]<<"  ";
        }
        cout<<endl;
    }
    
        
    // vector<vector<int>> v
    // //rag
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         if(v[i][j] == 1){
    //             vector<int> p(n,0) ;
    //             v.push_back(p);
    //             v[i][v[i].size()-1] =1;
    //             v[v[j].size() -1 ][j] = 1;
    //             v[i][j] = 0;
    //         }
    //     }
    // }
    // cout<<endl<<endl;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         // if(v[i][j] == 1){
    //             cout<<v[i][j]<<endl;
    //         // }
    //     }
    // }
    
    return 0;
}
