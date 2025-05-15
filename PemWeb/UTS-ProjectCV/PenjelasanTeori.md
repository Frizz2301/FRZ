# 1. Protokol HTTP dan HTTPS
HTTP (Hypertext Transfer Protocol) adalah protokol komunikasi yang digunakan untuk mentransfer data antara client (biasanya browser) dan server melalui jaringan. HTTP berfungsi untuk mengirimkan permintaan dari client ke server dan menerima respons dari server ke client.

HTTPS (Hypertext Transfer Protocol Secure) adalah versi aman dari HTTP yang menggunakan SSL/TLS (Secure Sockets Layer/Transport Layer Security) untuk mengenkripsi data yang dikirimkan antara client dan server. Dengan HTTPS, data yang ditransfer akan aman dan tidak dapat diintip atau dimodifikasi oleh pihak ketiga.

DNS (Domain Name System): DNS berfungsi untuk menerjemahkan nama domain (seperti www.example.com) menjadi alamat IP server yang dapat dipahami oleh jaringan komputer. DNS adalah bagian penting dalam komunikasi HTTP/HTTPS karena tanpa DNS, browser tidak akan tahu alamat IP server yang dituju.

Status Code HTTP: HTTP menggunakan kode status untuk memberi informasi tentang hasil dari permintaan yang dilakukan. Beberapa kode status yang umum digunakan adalah:
200 OK: Permintaan berhasil dan server mengembalikan data.
301 Moved Permanently: Halaman yang diminta telah dipindahkan secara permanen ke URL lain.
404 Not Found: Halaman yang diminta tidak ditemukan di server.
500 Internal Server Error: Terjadi kesalahan di sisi server.

Keamanan HTTPS: HTTPS menggunakan SSL/TLS untuk mengamankan komunikasi. Protokol ini memastikan bahwa data yang dikirim antara client dan server dienkripsi, sehingga hanya pihak yang berwenang yang dapat membacanya. Selain itu, SSL/TLS juga memverifikasi identitas server menggunakan sertifikat digital.

# 2. Perbedaan HTML, CSS, dan JavaScript dalam Pengembangan Web
#### HTML (Hypertext Markup Language): HTML adalah bahasa markup yang digunakan untuk struktur dasar halaman web. HTML menyediakan elemen-elemen untuk konten seperti teks, gambar, dan tautan. Fungsi HTML adalah untuk membuat kerangka halaman web.

## Contoh
<h1>Muhammad Fris Setiawan</h1>
<p>Deskripsi singkat tentang saya.</p>

#### CSS (Cascading Style Sheets): CSS digunakan untuk mengatur tampilan visual halaman web, seperti warna, tata letak, dan font. CSS mengontrol gaya elemen-elemen yang ada di halaman HTML.

## Contoh
h1 {
    color: blue;
    font-size: 24px;
}

#### JavaScript: JavaScript adalah bahasa pemrograman yang digunakan untuk menambahkan interaktivitas pada halaman web. Dengan JavaScript, kita bisa memanipulasi elemen HTML, menangani peristiwa (seperti klik tombol), dan melakukan operasi lainnya secara dinamis.

## Contoh
document.getElementById('myButton').addEventListener('click', function() {
    alert('Tombol diklik!');
});

# 3. Konsep DOM (Document Object Model) dalam JavaScript
DOM (Document Object Model) adalah representasi struktur HTML halaman web yang memungkinkan JavaScript untuk mengakses dan memanipulasi elemen-elemen HTML secara dinamis. DOM menggambarkan dokumen HTML sebagai objek-objek dan elemen-elemen yang saling terkait.
Dengan JavaScript, kita bisa menggunakan DOM untuk:
1. Mengubah konten elemen.
2. Menambah atau menghapus elemen.
3. Menangani peristiwa (events).

## Contoh
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Contoh DOM Manipulation</title>
</head>
<body>
    <h1 id="heading">PemWeb!</h1>
    <button id="changeTextButton">Ganti Teks</button>

    <script>
                document.getElementById('changeTextButton').addEventListener('click', function() {
            document.getElementById('heading').textContent = 'Teks Sudah Diubah!';
        });
    </script>
</body>
</html>
