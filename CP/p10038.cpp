//
//  p10038.cpp
//  CP
//
//  Created by Kevin Liao on 9/7/16.
//  Copyright © 2016 Kevin Liao. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[]) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    int k, curr=0, prev, diff;
    while (scanf("%d", &k) != EOF) {
        bool arr[3000] = {false};
        int len = k;
        int cnt = 0;
        if (k == 1) {
            printf("Jolly\n");
            //  clear the line here!
            scanf("%d", &curr);
            curr=0;
            continue;
        }
        else {
            while (k--) {
                prev = curr;
                scanf("%d", &curr);
                if (k != len-1) {
                    diff = abs(curr-prev);
                    if (diff < len
                    && !arr[diff]) {
                        cnt++;
                        arr[diff] = true;
                    }
                    else {
                        while(k--) scanf("%d", &curr);
                        break;
                    }
                }
            }
        }
        if (cnt == len-1) printf("Jolly\n");
        else printf("Not jolly\n");
    }
    
    return 0;
}
