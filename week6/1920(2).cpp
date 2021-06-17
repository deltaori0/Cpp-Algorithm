#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    // freopen("input.txt", "r", stdin);

    int n, m, temp, i;

    scanf("%d", &n);

    vector<int> v;
    vector<int>::iterator it;

    for (i = 0; i < n; i++) {
        scanf("%d", &temp);
        v.push_back(temp);
    }

    sort(v.begin(), v.end());

    scanf("%d", &m);

    for (i = 0; i < m; i++) {
        scanf("%d", &temp);
        it = lower_bound(v.begin(), v.end(), temp);
        if (*it != temp) printf("0\n");
        else printf("1\n");
    }
    

    return 0;
}