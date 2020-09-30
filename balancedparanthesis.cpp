#include <bits/stdc++.h>
using namespace std;

bool balancedBrackets(string st) {
	stack<char> s;
	int n = st.size();
	for (int i = 0;i<n;i++) {
		char x = st[i];
		if (x == '(') {
			s.push(x);
		}
		else if (x == ')') {
			if (s.top() != '(' || s.empty()) {
				return false;
			}
			else {
				s.pop();
			}
		}
	}
	return s.empty();
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string s;
	cin >> s;

	bool ans = balancedBrackets(s);

	cout << ans << endl;



	return 0;
}