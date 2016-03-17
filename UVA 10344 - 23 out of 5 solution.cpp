//============================================================================
// Name        : ayman.cpp
// Author      : Ayman Mostafa
// Email       : ayman93live@hotmail.com
// Version     : v5.0
//============================================================================

#include <cstring>
#include <map>
#include <deque>
#include <queue>
#include <stack>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <vector>
#include <set>
#include <complex>
#include <list>
#include <climits>
#include <cctype>
#include <bitset>

using namespace std;

#define all(x) x.begin(),x.end()
#define allr(x) x.rbegin(),x.rend()

void fastInOut();

string out;
int outarr[5];
void outter(int i, int sum) {
	if (i == 5) {
		if (sum == 23)
			out = "Possible";
		return;
	}
	outter(i + 1, sum + outarr[i]);
	outter(i + 1, sum - outarr[i]);
	outter(i + 1, sum * outarr[i]);
}

//##########################################################################################
//###################################MAIN FUNCTION##########################################
//##########################################################################################
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "rt", stdin);
//freopen("output.txt", "wt", stdout);
#endif
	fastInOut();
//----------------------------------------------------------------------------------
//----------------------------------------------------------------------------------
// 10344 - 23 out of 5
	while (cin >> outarr[0] >> outarr[1] >> outarr[2] >> outarr[3] >> outarr[4]) {
		if (!outarr[0] && !outarr[1] && !outarr[2] && !outarr[3] && !outarr[4])
			break;
		out = "Impossible";
		sort(outarr, outarr + 5);
		do {
			outter(1, outarr[0]);
			if (out == "Possible")
				break;
		} while (next_permutation(outarr, outarr + 5));
		cout << out << endl;
	}
}
void fastInOut() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL), cout.tie(NULL);
}
