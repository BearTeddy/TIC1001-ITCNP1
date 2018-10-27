#include <iostream>
#include <vector>
#include <string>

using namespace std;

void insert(vector<int> &v, int pos, int val) {
    vector <int> dummy;
    int vsize = v.size();
    int j=0;
    for (int i=0;i<=vsize;i++){
        if(i==pos){
            dummy.push_back(val);
            continue;
        }
        dummy.push_back(v[j]);
        j++;
    }
    v = dummy;
}

int main (void){
    vector<int> v = {0, 1, 2, 3, 4};
    insert(v, 2, -1);
    for (auto i: v) cout<<i<<' ';
}