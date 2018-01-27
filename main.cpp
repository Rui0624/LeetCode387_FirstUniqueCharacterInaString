//
//  main.cpp
//  LeetCode387_FirstUniqueCharacterInaString
//
//  Created by Rui on 1/25/18.
//  Copyright © 2018 Rui. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> m;
        for(int i = 0; i < s.size(); i++)
        {
            m[s[i]]++;
        }
        
        for(int i = 0; i <s.size(); i++)
        {
            if(m[s[i]] == 1)
                return i;
        }
        return -1;
    }
};
