# 🚀 DSA Journey

[![Language](https://img.shields.io/badge/Language-C%2B%2B17%2F20-blue.svg)](https://en.cppreference.com/)
[![LeetCode](https://img.shields.io/badge/LeetCode-Daily%20%26%20Topics-FFA116?logo=leetcode&logoColor=white)](https://leetcode.com/)
[![Codeforces](https://img.shields.io/badge/Codeforces-Practice%20%26%20Contests-1F8ACB?logo=codeforces&logoColor=white)](https://codeforces.com/)
[![AtCoder](https://img.shields.io/badge/AtCoder-ABC%20%26%20DP-black)](https://atcoder.jp/)


---

## 📂 Cấu trúc Repository

```text
competitive-programming/
├── LeetCode/              # Luyện tập phỏng vấn & thuật toán
│   ├── Daily/             # Thử thách LeetCode Daily
│   ├── Contests/          # Weekly / Biweekly Contests
│   └── Topics/            # Phân loại theo chuyên đề (DP, Binary Search, Two Pointers,...)
├── Codeforces/            # Luyện tập Competitive Programming
│   ├── Practice_By_Rating/# Phân loại theo Rating (1000, 1100, 1200+)
│   ├── Contests/          # Div.2, Div.3 Contests
│   ├── Daily/             # Bài tập luyện hàng ngày
│   └── Gym_Edu/           # Educational Rounds & Gyms
├── AtCoder/               # AtCoder Contests
│   ├── ABC/               # AtCoder Beginner Contest
│   ├── ARC/               # AtCoder Regular Contest
│   └── Educational_DP/    # 26 bài tập Educational DP Contest kinh điển
├── CSES_VNOI/             # CSES Problem Set & VNOI
│   ├── Introductory_Problems/
│   └── Sorting_And_Searching/
├── Templates/             # Snippets & thuật toán mẫu dùng lại
│   ├── base_template.cpp  # Template chuẩn kèm Fast I/O & GCC Pragmas
│   ├── Data_Structures/   # Cây phân đoạn (Segment Tree), Fenwick, DSU,...
│   ├── Graphs/            # BFS, DFS, Dijkstra, Tarjan,...
│   └── Math/              # Sàng nguyên tố, Nghịch đảo modulo, Matrix Exp,...
└── Notes/                 # Tổng hợp lý thuyết, công thức & mẹo tối ưu
```

---

## 📝 Template

Mỗi bài giải ưu tiên có header mô tả ngắn gọn:
```cpp
/**
 * Problem: [Tên bài]
 * Link:    [URL bài toán]
 * Idea:    [Ý tưởng giải thuật chính]
 * Complexity: Time O(...), Space O(...)
 */
```
Template mẫu chuẩn được đặt tại `Templates/base_template.cpp` bao gồm tối ưu tốc độ đọc ghi (`cin.tie`, `ios_base`) và `#pragma GCC optimize`.

---

## ⚡ Biên dịch & Chạy thử (Local)

Biên dịch với chuẩn C++17 và các cờ cảnh báo thông dụng:
```bash
# Biên dịch
g++ -O2 -std=c++17 -Wall solution.cpp -o solution

# Chạy với input file
./solution < input.txt
```

---
