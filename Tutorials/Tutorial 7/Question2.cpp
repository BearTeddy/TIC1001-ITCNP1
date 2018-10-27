#include <iostream>
#include <vector>
#include <string>

using namespace std;

void erase(vector<int> &vec, int pos) {
    vector <int> dummy;
    int vsize = vec.size();
    for (int i=0;i<vsize;i++){
        if(i==pos){
            continue;
        }
        dummy.push_back(vec[i]);
    }
    vec = dummy;
}

int main (void){
    vector<int> v = {0, 1, 2, 3, 4};
    erase(v,3);
    for (auto i: v) cout<<i<<' ';
}