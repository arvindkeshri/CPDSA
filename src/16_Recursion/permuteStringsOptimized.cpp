#include <iostream>
using namespace std;
#include <vector>
//time coplexity O(n*n!)
//space complexity O(n)


void f(vector<int>arr, int index, vector<vector<int>> &ans){
    if(index == arr.size()) {
        ans.push_back(arr);
        return;
    }
    for(int i = index; i < arr.size(); i++){
        swap(arr[i], arr[index]);
        f(arr, index + 1, ans);
        swap(arr[i], arr[index]);
    }
}

int main() {
    vector<int>arr = {1, 2, 3};
    int index;
    vector<vector<int>>ans;
    

    f(arr, 0, ans);

    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < ans[i].size(); j++)cout << ans[i][j];
        cout << " ";
    }
}
