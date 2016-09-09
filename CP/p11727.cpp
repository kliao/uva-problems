//
//  p11727.cpp
//  CP
//
//  Created by Kevin Liao on 8/25/16.
//  Copyright © 2016 Kevin Liao. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    int TC, i=1;
    scanf("%d", &TC);
    while (TC--) {
        vector<int> vec(3);
        scanf("%d %d %d", &vec[0], &vec[1], &vec[2]);
        sort(vec.begin(), vec.end());
        printf("Case %d: %d\n", i++, vec[1]);
    }
    
    return 0;
}
