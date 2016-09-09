//
//  p11498.cpp
//  CP
//
//  Created by Kevin Liao on 8/25/16.
//  Copyright © 2016 Kevin Liao. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    int TC = 1, a, b, x, y;
    while (TC) {
        scanf("%d", &TC);
        if (TC == 0) break;
        scanf("%d %d", &a, &b);
        while (TC--) {
            scanf("%d %d", &x, &y);
            if (x == a) {
                printf("%s\n", "divisa");
            }
            else if (y == b) {
                printf("%s\n", "divisa");
            }
            else if (x < a) {
                if (y < b) printf("%s\n", "SO");
                else printf("%s\n", "NO");
            }
            else {
                if (y < b) printf("%s\n", "SE");
                else printf("%s\n", "NE");
            }
        }
    }
    
    return 0;
}
