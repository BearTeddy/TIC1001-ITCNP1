#include <iostream>
#include <vector>
#include <string>

using namespace std;

void mutate(vector<int> &vec) {
    vector<int> dummy;
    int vsize = vec.size();
    //cout<<vsize<<endl;
    int j=1,k=vsize-1;
    for (int i=0;i<vsize;i++){
        dummy.insert(dummy.begin()+i, vec[j] + vec[k]);
        j++;
        k++;
        if(j>=vsize) j=0;
        if (k>=vsize) k=0;
    }
    vec = dummy;
}

int main (void){
    vector<int> v = {0, 1, 2, 3, 4};
    mutate(v);
    for (auto i: v) cout<<i<<' ';
}