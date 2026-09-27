// Program kedua: membuktikan compiler memakai standar C++20.
// Nilai __cplusplus untuk C++20 adalah 202002.
#include <iostream>
int main() {
    std::cout << "Halo, Pemrograman Terstruktur\n";
    std::cout << "Standar bahasa yang dipakai compiler: " << __cplusplus << "\n";
    return 0;
}