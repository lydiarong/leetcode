//
// Created by lima on 2019/12/22.
//

#include <iostream>
#include <list>
#include <math.h>
#include <vector>
#include <bits/stdc++.h>
using namespace std;


int main()
{
    int low=10,high=1000000000;
    vector<int> ans;
    int x=0;
    for(int i=0;i<9;i++) {
        for (int j = i+1; j <= 9; j++) {
            x=x*10+j;
            if(x>=low&&x<=high)
                ans.push_back(x);
        }
    }
    sort(ans.begin(),ans.end());
    for (auto s:ans)
        std::cout<<s<<std::endl;
    return 0;
}

