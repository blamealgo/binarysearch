/*
    Асимптотика: O(logn)
*/
bool find(int x, vector<int> v, int n) {
    int l = 0, r = n + 1;
    while (l + 1 < r) {
        int m = (l + r) / 2;
        if (v[m] >= x)
            l = m;
        else
            r = m;
    }
    return (l < n && v[l] == x);
}
