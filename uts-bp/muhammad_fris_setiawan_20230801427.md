# SOAL 1
### Jelaskan secara singkat apa itu paradigma dalam bahasa pemograman ??
# JAWABAN :
Pemrograman Prosedural: 
Memfokuskan pada prosedur atau rutinitas (fungsi atau subrutin). Contoh: C, Pascal.

Pemrograman Berorientasi Objek: Memfokuskan pada objek yang menggabungkan data dan fungsi. Contoh: Java, C++.

Pemrograman Fungsional: Memfokuskan pada fungsi matematis dan menghindari perubahan status dan data mutable. Contoh: Haskell, Lisp.

Pemrograman Deklaratif: Menyatakan apa yang harus dilakukan tanpa menentukan bagaimana melakukannya. Contoh: SQL, HTML.

# Soal 2
### Jelaskan apa yg dimaksud dengan model data, operator, seleksi dan fungsi??
# JAWABAN
Model Data
Model data adalah representasi abstrak dari struktur data yang disimpan dalam sebuah sistem. Model ini menentukan bagaimana data disimpan, diatur, dan diakses

Operator
Operator adalah simbol atau konstruk yang digunakan untuk melakukan operasi pada nilai-nilai atau operand dalam pemrograman.

Seleksi
Seleksi adalah konstruksi pemrograman yang digunakan untuk membuat keputusan berdasarkan kondisi tertentu. Seleksi memungkinkan program untuk mengambil jalur yang berbeda berdasarkan nilai kondisi tersebut.

Fungsi
Fungsi adalah blok kode yang dapat diberi nama dan dapat dipanggil dari bagian lain dalam program. Fungsi digunakan untuk mengelompokkan kode yang melakukan tugas tertentu dan dapat digunakan kembali.

# Soal 3
# JAWABAN 

# soal3.cpp
# Penjelasan dari program  soal nomor 3
Kode tersebut bertujuan untuk menghasilkan pola segitiga bintang berdasarkan jumlah baris yang dimasukkan oleh pengguna.

Loop pertama (for (i = 1; i <= n; i++)) mengontrol jumlah baris yang akan dicetak. Dimulai dari 1 hingga n.
Loop kedua (for (s = i; s < n; s++)) mencetak spasi pada setiap baris. Jumlah spasi berkurang seiring dengan bertambahnya baris.
Loop ketiga (for (j = 1; j <= i; j++)) mencetak bintang pada setiap baris. Jumlah bintang bertambah seiring dengan bertambahnya baris.
cout << "\n"; digunakan untuk berpindah ke baris baru setelah mencetak spasi dan bintang untuk setiap baris.