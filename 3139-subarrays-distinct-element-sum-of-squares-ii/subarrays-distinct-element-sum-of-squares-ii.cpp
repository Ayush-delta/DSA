class Solution {
    static constexpr long long MOD = 1'000'000'007;

    class SegmentTree {
        int n;
        vector<long long> sum, sq, lazy;

        void apply(int node, int l, int r, long long val) {
            long long len = r - l + 1;

            sq[node] = (
                sq[node]
                + 2LL * val % MOD * sum[node] % MOD
                + val * val % MOD * len % MOD
            ) % MOD;

            sum[node] = (sum[node] + val * len) % MOD;
            lazy[node] = (lazy[node] + val) % MOD;
        }

        void push(int node, int l, int r) {
            if (lazy[node] == 0 || l == r)
                return;

            int mid = l + (r - l) / 2;

            apply(node * 2, l, mid, lazy[node]);
            apply(node * 2 + 1, mid + 1, r, lazy[node]);

            lazy[node] = 0;
        }

        void update(int node, int l, int r,
                    int ql, int qr, long long val) {
            if (qr < l || r < ql)
                return;

            if (ql <= l && r <= qr) {
                apply(node, l, r, val);
                return;
            }

            push(node, l, r);

            int mid = l + (r - l) / 2;

            update(node * 2, l, mid, ql, qr, val);
            update(node * 2 + 1, mid + 1, r, ql, qr, val);

            sum[node] =
                (sum[node * 2] + sum[node * 2 + 1]) % MOD;

            sq[node] =
                (sq[node * 2] + sq[node * 2 + 1]) % MOD;
        }

    public:
        SegmentTree(int size) : n(size) {
            sum.assign(4 * n, 0);
            sq.assign(4 * n, 0);
            lazy.assign(4 * n, 0);
        }

        void update(int l, int r, long long val) {
            if (l <= r)
                update(1, 0, n - 1, l, r, val);
        }

        long long totalSq() {
            return sq[1];
        }
    };

public:
    int sumCounts(vector<int>& nums) {
        int n = nums.size();

        SegmentTree seg(n);
        unordered_map<int, int> last;
        long long ans = 0;

        for (int i = 0; i < n; i++) {
            int prev = -1;

            if (last.find(nums[i]) != last.end()) {
                prev = last[nums[i]];
            }

            seg.update(prev + 1, i, 1);

            last[nums[i]] = i;

            ans = (ans + seg.totalSq()) % MOD;
        }

        return ans;
    }
};
