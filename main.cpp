#include <iostream>
#include <vector>

using namespace std;

void solve(vector<int> person, int k, int idx) {
    if(person.size() == 1) {
        cout << person[0];
        return;
    }
    idx = (idx + k) % person.size();
    person.erase(person.begin() + idx);
    solve(person, k, idx);
}

int main()
{
    int n, k; cin >> n >> k;
    k--;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        a[i] = i + 1;
    int idx = 0;
    solve(a, k, idx);
}
