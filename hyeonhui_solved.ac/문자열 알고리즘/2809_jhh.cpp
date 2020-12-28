#include<iostream>
#include<queue>
#include<algorithm>
#include<cstring>
#include<string>
#include<vector>
#include<map>
using namespace std;
struct AhoCorasick {
	struct Node {
		map<int, int> children;
		int pi;
		int len;
		Node() {
			pi = -1;
			len = 0;
		}
	};
	vector<Node> trie;
	int root;
	int init() {
		Node x;
		trie.push_back(x);
		return (int)trie.size() - 1;
	}
	AhoCorasick() {
		root = init();
	}
	void add(int node, string& s, int index, int string_index) {
		if (index == s.size()) {
			trie[node].len = index;
			return;
		}
		int c = s[index] - 'a';
		if (trie[node].children.count(c) == 0) {
			int next = init();
			trie[node].children[c] = next;
		}
		add(trie[node].children[c], s, index + 1, string_index);
	}
	void add(string& s, int index) {
		add(root, s, 0, index);
	}
	void make() {
		queue<int> q;
		trie[root].pi = root;
		q.push(root);
		while (!q.empty()) {
			int cur = q.front();
			q.pop();
			for (int i = 0; i < 26; i++) {
				if (trie[cur].children.count(i) == 0) continue;
				int next = trie[cur].children[i];
				if (cur == root)
					trie[next].pi = root;
				else {
					int x = trie[cur].pi;
					while (x != root && trie[x].children.count(i) == 0)
						x = trie[x].pi;
					if (trie[x].children.count(i) > 0)
						x = trie[x].children[i];
					trie[next].pi = x;
				}
				int pi = trie[next].pi;
				trie[next].len = max(trie[next].len, trie[pi].len);
				q.push(next);
			}
		}
	}
	int next(int node, char ch) {
		int c = ch - 'a';
		while (node != root && trie[node].children.count(c) == 0)
			node = trie[node].pi;
		if (trie[node].children.count(c) > 0)
			node = trie[node].children[c];
		return node;
	}
	int solve(string& s) {
		int node = root;
		vector<pair<int, int>> matches;
		for (int i = 0; i < s.size(); i++) {
			node = next(node, s[i]);
			if (trie[node].len > 0) {
				matches.push_back(make_pair(i - trie[node].len + 1, -1));
				matches.push_back(make_pair(i, 1));
			}
		}
		int ans = 0;
		sort(matches.begin(), matches.end());
		int start = 0;
		int open = 0;
		for (auto& p : matches) {
			if (p.second == -1) {
				if (open == 0) start = p.first;
				open += 1;
			}
			else {
				open -= 1;
				if (open == 0) ans += p.first - start + 1;
			}
		}
		return ans;
	}
};
int main() {
	AhoCorasick ac;
	int n;
	cin >> n;
	string s;
	cin >> s;
	int m;
	cin >> m;
	for (int i = 0; i < m; i++) {
		string temp;
		cin >> temp;
		ac.add(temp, i + 1);
	}
	ac.make();
	cout << n - ac.solve(s) << '\n';
	return 0;
}