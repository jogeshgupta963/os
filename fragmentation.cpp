// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
        srand(time(0));
        int memory ;
        cout<<"enter total memory"<<endl;
        cin>>memory;
        int chunks;
        cout<<"Enter number of chunks"<<endl;
        cin>>chunks;
        vector<int> memory_chunks(chunks,0);
        unordered_map<int,int> allocated;
        
        for(int i=0;i<chunks-1;i++){
            memory_chunks[i] = 1 + rand() % memory;
            memory = memory-memory_chunks[i];
            allocated[i] = 0;
        }
        memory_chunks[chunks-1] = memory;
        // memory = memory-memory_chunks[chunks-1];
        // for(auto i:memory_chunks){
        //     cout<<i<<endl;
        // }
        cout<<"Enter allocation for your chunks"<<endl;
        // for(int i=0;i<chunks;i++){
        //     int alloc;
        //     cin>>alloc;
        //     allocated[i] = alloc>0;
        // }
        while(true){
            int m;cin>>m;
            allocated[m-1] = 1;
            
            if(m == -1){
                break;
            }
        }
        
        cout<<endl<<endl<<"IF"<<endl;
        for(int i=0;i<chunks;i++){
            if(allocated[i] == 0){
                cout<<i<<" "<<memory_chunks[i]<<"units"<<endl;
            }
            else{
                cout<<i<<" "<<memory_chunks[i]<<"units (allocated)"<<endl;
            }
        }
        
        cout<<endl<<endl<<"EF"<<endl;
        for(int i=0;i<chunks;i++){
            if(i %2== 0){
                cout<<i<<" "<<memory_chunks[i]<<"units (unallcoated) free: "<<0.01*memory_chunks[i]<<endl;
            }else{
                cout<<i<<" "<<memory_chunks[i]<<"units (allcoated) free: "<<0.02*memory_chunks[i]<<endl;
                
            }
        }    
    return 0;
}
