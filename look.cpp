

int look (vector<int> v,int head,int dir){
    vector<int> left;
    vector<int> right;
    
    for(int i:v){
        if(i < head){
            left.push_back(i);
        }else{
            right.push_back(i);
        }
    }
    
    sort(left.begin(),left.end());
    sort(right.begin(),right.end());
    
    if(dir == 1){
        int dis =  abs (head -  right[right.size()-1]) + abs(right[right.size()-1] - left[0] );
        return dis;
    }
    else{
        int dis =  abs (head - left[0] ) + right[right.size()-1] - left[0] ;
        return dis;
        
    }
}

int clook (vector<int> v,int head,int dir){
    vector<int> left;
    vector<int> right;
    
    for(int i:v){
        if(i < head){
            left.push_back(i);
        }else{
            right.push_back(i);
        }
    }
    
    sort(left.begin(),left.end());
    sort(right.begin(),right.end());
    
    if(dir == 1){
        int dis =  abs (head -  right[right.size()-1]) +  abs(right[right.size()-1] - left[0] ) + ( left[left.size()-1] - left[0] );
        return dis;
    }
    else{
        int dis =  abs (head - left[0] ) + right[right.size()-1] - left[0] + right[right.size()-1] - right[0] ;
        return dis;
        
    }
}


int main(){
    cout<< clook({82,170,43,140,24,16,190},50,1);
}
