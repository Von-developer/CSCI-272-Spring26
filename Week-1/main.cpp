#include <iostream>
#include<vector> 
using namespace std;
int main()
{
    vector<int> num= {1, 2, 3, 4, 5, 6, 7, 7, 8,};
    
    for(int i=0; i<num.size(); i++){
        cout <<num.at()<<endl;
    }
    num.push_back(40);
    num.push_back(22);
    num.push_back(1);
    num.push_back(12);
    
    cout <<"Size of vector is "<< num.size()<< endl;
    for(int i=0; i<num.size(); i++){
        cout <<num.at(i)<<endl;
    }
    
    
    return 0;
    
}