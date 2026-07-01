class Solution {
public:
    int minEatingSpeed(vector<int>& a, int h) {
        int n = a.size();
        int mx = INT_MIN;
        for (int i = 0; i < n; i++) {
            mx = max(mx, a[i]);
        }

        int low = 1;
        int high = mx;
        int ans = mx;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            long long sum = 0;
            for (int i = 0; i < n; i++) {
                sum += (a[i] + mid - 1) / mid;
            }
            if (sum <= h) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};
#pragma GCC optimize("Ofast")
const size_t BUFFER_SIZE = 0x6fafffff; alignas(std::max_align_t) char buffer[BUFFER_SIZE]; size_t buffer_pos = 0; void* operator new(size_t size) { constexpr std::size_t alignment = alignof(std::max_align_t); size_t padding = (alignment - (buffer_pos % alignment)) % alignment; size_t total_size = size + padding; char* aligned_ptr = &buffer[buffer_pos + padding]; buffer_pos += total_size; return aligned_ptr; } void operator delete(void* ptr, unsigned long) {} void operator delete(void* ptr) {} void operator delete[](void* ptr) {}