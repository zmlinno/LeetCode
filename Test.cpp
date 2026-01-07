#include <bits/stdc++.h>
using namespace std;

static vector<int> parseArray(const string& s) {
    vector<int> a;
    int num = 0, sign = 1;
    bool inNum = false;

    for (char ch : s) {
        if (ch == '-') {
            sign = -1;
        } else if (isdigit((unsigned char)ch)) {
            num = num * 10 + (ch - '0');
            inNum = true;
        } else {
            if (inNum) {
                a.push_back(sign * num);
                num = 0;
                sign = 1;
                inNum = false;
            }
        }
    }
    return a;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        string p, s;
        int n;
        cin >> p >> n >> s;

        vector<int> a = parseArray(s);

        int l = 0, r = (int)a.size() - 1;
        bool rev = false, err = false;

        for (char op : p) {
            if (op == 'R') {
                rev = !rev;
            } else if (op == 'D') {
                if (l > r) { // 空
                    err = true;
                    break;
                }
                if (!rev) l++;
                else r--;
            }
        }

        if (err) {
            cout << "error\n";
            continue;
        }

        cout << '[';
        if (l <= r) {
            if (!rev) {
                for (int i = l; i <= r; i++) {
                    if (i != l) cout << ',';
                    cout << a[i];
                }
            } else {
                for (int i = r; i >= l; i--) {
                    if (i != r) cout << ',';
                    cout << a[i];
                }
            }
        }
        cout << "]\n";
    }
    return 0;
}
