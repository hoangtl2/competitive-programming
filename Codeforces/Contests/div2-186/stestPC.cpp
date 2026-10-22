#include <iostream>
#include <random>
#include <chrono>

using namespace std;

int main() {
    // Tối ưu hóa tốc độ in (tuy không quá quan trọng với generator nhưng là thói quen tốt)
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Cấu hình test case để 
    int t = 1;
    int n = 5000; // Giới hạn lớn nhất của đề bài

    cout << t << "\n";
    cout << n << "\n";

    // Khởi tạo bộ sinh số ngẫu nhiên chuẩn C++ (mt19937)
    mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
    
    // Giới hạn giá trị phần tử theo đề (1 <= x <= 3N)
    uniform_int_distribution<int> dist(1, 3 * n);

    // Sinh 3 mảng: a, b, c
    // Mỗi mảng có n phần tử
    for (int k = 0; k < 3; k++) {
        for (int i = 0; i < n; i++) {
            cout << dist(rng) << (i == n - 1 ? "" : " ");
        }
        cout << "\n";
    }

    return 0;
}