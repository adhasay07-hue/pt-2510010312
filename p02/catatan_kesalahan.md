# Catatan Kesalahan Praktikum Pertemuan 2

## Praktikum 1: Tipe Data dalam C++
1. **Kesalahan Penggunaan Tipe `char`:**
   * **Tindakan:** Mengubah nilai `'B'` (kutip tunggal) menjadi `"B"` (kutip ganda).
   * **Pesan Error:** `error: invalid conversion from 'const char*' to 'char'`
   * **Penjelasan:** Karakter tunggal (`char`) di C++ wajib menggunakan kutip tunggal (`'`). Kutip ganda (`"`) digunakan untuk tipe data teks/string (`const char*` atau `std::string`).

2. **Kesalahan Pengisian Tipe `double`:**
   * **Tindakan:** Mengubah nilai `78.5` menjadi `"78.5"` (teks).
   * **Pesan Error:** `error: cannot convert 'const char*' to 'double' in initialization`
   * **Penjelasan:** Nilai numerik desimal (`double`) tidak boleh diapit oleh tanda kutip. Compiler menolak pengisian teks ke dalam variabel berkategori angka.

---

## Praktikum 2: Pengujian Konstanta (`const`)
1. **Mencoba Mengubah Nilai Konstanta:**
   * **Tindakan:** Menghapus tanda komentar pada baris `BOBOT_UAS = 0.30;`.
   * **Pesan Error:** `error: assignment of read-only variable 'BOBOT_UAS'`
   * **Penjelasan:** Variabel yang dideklarasikan dengan kata kunci `const` nilainya dikunci dan tidak dapat diubah kembali setelah diberi nilai awal.

---

## Praktikum 3: Masalah Input Teks Berisi Spasi
1. **Membaca Nama Menggunakan `cin >>`:**
   * **Tindakan:** Memasukkan nama dua kata (misal: "Siti Aminah") saat membaca input dengan `cin >> nama;`.
   * **Gejala/Error:** Program melewati pertanyaan berikutnya (angkatan dan nilai) dan langsung menampilkan output dengan data acak/0.
   * **Penjelasan:** `cin >>` berhenti membaca begitu menemukan spasi (*whitespace*). Kata kedua ("Aminah") tertinggal di dalam buffer masukan (*stream*) dan mengacaukan pembacaan input variabel di bawahnya.
   * **Solusi:** Menggunakan `getline(cin, nama);` untuk membaca satu baris teks secara utuh termasuk spasi.