import math

class Bentuk:
    def __init__(self, nama, warna):
        self.nama = nama
        self.warna = warna

class Lingkaran(Bentuk):
    def __init__(self, nama, warna, jari_jari):
        super().__init__(nama, warna) 
        self.jari_jari = jari_jari

    def hitung_luas(self):
        return math.pi * (self.jari_jari ** 2)

    def hitung_keliling(self):
        return 2 * math.pi * self.jari_jari


lingkaran1 = Lingkaran("Lingkaran 1", "Merah", 5)
print(f"Nama: {lingkaran1.nama}")
print(f"Warna: {lingkaran1.warna}")
print(f"Jari-jari: {lingkaran1.jari_jari}")
print(f"Luas: {lingkaran1.hitung_luas()}")
print(f"Keliling: {lingkaran1.hitung_keliling()}")