#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int gcd(int a, int b) {
	
	while (a != b) {
		a > b ? (a -= b) : (b -= a);
	}

	return a;
}

int main() {
	vector<int> vt;

	int n;
    scanf("%d",&n);

	for (int i = 0; i < n; i++) {
		int num;
		scanf("%d",&num);
		vt.push_back(num);
	}
	
	int g = abs(vt[0]-vt[1]);
	for (int i = 1; i < vt.size() - 1; i++)
		g = gcd(g, abs(vt[i] - vt[i+1]));
    
    vector<int> gd;
	for (int i = 2; i*i<= g; i++)
		if (g % i == 0){
            gd.push_back(i);
            gd.push_back(g/i);
        }
			
    
    gd.push_back(g);
    sort(gd.begin(),gd.end());
    gd.erase(unique(gd.begin(), gd.end()), gd.end());
    
    for(int i=0;i<gd.size();i++)
        printf("%d ",gd[i]);
	printf("\n");
}