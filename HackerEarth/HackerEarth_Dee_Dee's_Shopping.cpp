/*~~~~~~~~~~~~~~~~~~*
*                  *
* $Dollar Akshay$  *
*                  *
*~~~~~~~~~~~~~~~~~~*/

//https://www.hackerearth.com/code-hack-3b/algorithm/dee-dees-shopping-1/

#include <math.h>
#include <time.h>
#include <ctype.h>
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

#define sp system("pause")
#define FOR(i,a,b) for(int i=a;i<=b;++i)
#define FORD(i,a,b) for(int i=a;i>=b;--i)
#define REP(i,n) FOR(i,0,(int)n-1)
#define DB(format,...) fprintf(stderr,format, ##__VA_ARGS__)
#define pb(x) push_back(x)
#define mp(a,b) make_pair(a,b)
#define MS0(x) memset(x,0,sizeof(x))
#define MS1(x) memset(x,1,sizeof(x))
#define SORT(a,n) sort(begin(a),begin(a)+n)
#define REV(a,n) reverse(begin(a),begin(a)+n)
#define ll long long
#define pii pair<int,int>
#define MOD 1000000007

int DP[1000];

int cart(int n) {

	if (n==0)
		return 0;
	if (n<6)
		return 1000000;
	if (DP[n])
		return DP[n];
	DP[n] = 1  + min(cart(n-6), cart(n-8));
	return DP[n];
}


int main() {

	int t, n;
	scanf("%d", &t);
	REP(tc, t) {
		scanf("%d", &n);
		assert(n<=100);
		int ans = cart(n);
		if (ans>1000000)
			ans = -1;
		printf("%d\n", ans);
	}
	return 0;
}

//Solved