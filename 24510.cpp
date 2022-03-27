#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;


void init(void) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "rt", stdin);
    freopen("output.txt", "wt", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    init();
    //
    int C = 0;
    cin >> C;

    vector<int> n(C);
    int max = 0;
    int pos = 0;
    int i = 0;

    string str[C];
    string f = "for";
    string w = "while";

    for (string elem:str){
        cin >> elem;

        pos = 0;
        while (elem.find(f, pos) != std::string::npos){
            n[i]++;
            pos = elem.find(f, pos) + 3;
        }

        pos = 0;
        while (elem.find(w, pos) != std::string::npos){
            n[i]++;
            pos = elem.find(w, pos) + 5;
        }

        if(n[i] > max) max = n[i];
        i++;
    }
    cout << max;

    return 0;
}