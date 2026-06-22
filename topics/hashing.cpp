#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter Size: ";
    cin >> n;
    int arr[n];
    map<int, int> hs;
    for(int i=0; i<n; i++) {
        cin >> arr[i];
        hs[arr[i]]++;
    }

    int q;
    cout << "Enter iteration: ";
    cin >> q;
    while(q--) {
        int num;
        cout << "Enter number: ";
        cin >> num;
        cout << hs[num] << endl;
    }

    // iterate in the map
    // for (auto it : hs) {
    //     cout << it.first << "->" << it.second << endl;
    // }

    return 0;
}