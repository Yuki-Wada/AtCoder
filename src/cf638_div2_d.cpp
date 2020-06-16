//include
//------------------------------------------
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <complex>

#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>

#include <stdexcept>

using namespace std;

// type alias
using ll = long long;
using ull = unsigned long long;
using comp = complex<double>;

const ll MOD = 1000000007LL;
const double PI = 3.14159265358979323846;

//conversion
//------------------------------------------
inline int toint(string s) { int v; istringstream sin(s); sin >> v; return v; }
template<class t> inline string tostring(t x) { ostringstream sout; sout << x; return sout.str(); }

// for loop
#define REP(i, n) for ((i) = 0;(i) < (ll)(n);(i)++)

//debug
#define DUMP(x)  cerr << #x << " = " << (x) << endl
#define DEBUG(x) cerr << #x << " = " << (x) << " (l" << __line__ << ")" << " " << __file__ << endl

int solve() {
	ll n;
	cin >> n;

	vector<ll> as;
	ll accum = 0, count = 0;
	while (accum + (1LL << count) <= n) {
		as.emplace_back(1LL << count);
		accum += 1LL << count;
		++count;
	}
	if (n - accum > 0) {
		as.emplace_back(n - accum);
	}
	sort(as.begin(), as.end());
	
	cout << as.size() - 1 << endl;
	for (ll i = 0; i + 1 < as.size(); ++i) {
		cout << as[i + 1] - as[i];
		if (i + 2 < as.size()) {
			cout << " ";
		}
		else {
			cout << endl;
		}
	}

	return 0;
}

//main function
int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);

	ll t;
	cin >> t;
	for (ll i = 0; i < t; ++i) {
		solve();
	}	

	return 0;
}
