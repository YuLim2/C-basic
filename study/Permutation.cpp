#include<iostream>
#include<vector>
using namespace std;

void PrintPermutation(vector<int> perm){
    for(int i=0; i<perm.size(); i++){
        cout << perm[i] << " " << endl;
    }
}

void Permutation(vector<int> perm, vector<int> remain){
    if(remain.size() != 0){
        for(int i=0; i<remain.size(); i++){
            vector<int> remainCopy = remain;
            perm.push_back(remainCopy[i]);
            remainCopy.erase(remainCopy.begin()+i);
            Permutation(perm, remainCopy);
            perm.pop_back();
        }
    } else{
        PrintPermutation(perm);
    }
}

int main(void)
{
   int n,r;
   cin >> n>>r;
   vector<int> num_list;
   for(int i = 1; i<=n;i++) num_list.push_back(i);
   Permutation();
   return 0;
   }