/*~~~~~~~~~~~~~~~~~~*
*                  *
* Dollar Akshay$  *
*                  *
*~~~~~~~~~~~~~~~~~~*/

//

#include <algorithm>
#include <assert.h>
#include <ctype.h>
#include <deque>
#include <iostream>
#include <map>
#include <math.h>
#include <queue>
#include <set>
#include <stack>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <time.h>
#include <vector>

using namespace std;

#define sp system("pause")
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define FORD(i, a, b) for (int i = a; i >= b; --i)
#define REP(i, n) FOR(i, 0, (int)n - 1)
#define pb(x) push_back(x)
#define mp(a, b) make_pair(a, b)
#define MSX(a, x) memset(a, x, sizeof(a))
#define SORT(a, n) sort(begin(a), begin(a) + n)
#define REV(a, n) reverse(begin(a), begin(a) + n)
#define ll long long
#define pii pair<int, int>
#define MOD 1000000007

int a[100000];

int main() {

	int t;
	scanf("%d", &t);
	REP(tc, t) {
		int n, max_wait = -1;
		scanf("%d", &n);
		REP(i, n) {
			scanf("%d", &a[i]);
			max_wait = max(max_wait, a[i]);
		}
		int c, d, s;
		scanf("%d %d %d", &c, &d, &s);
		printf("%lf\n", (double)max_wait * (c - 1));
	}
	return 0;
}

//Solved