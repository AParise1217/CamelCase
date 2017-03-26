// CamelCase.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int getNoWords(string s) {
	//gets the number of words that are contained in the string
	if (s.size() > 0) {
		int noWords = 1;

		for (int i = 0; i < s.size(); ++i) {
			if (isupper(s[i])) {
				noWords++;
			}
		}

		return noWords;
	}

	return 0;
}

int main() {
	string s;
	cin >> s;
	cout << getNoWords(s);
	return 0;
}


