class Buku:
    def __init__(self, judul):
        self.judul = judul #Jawaban

    @classmethod
    def dengan_judul(cls, judul):
        return cls(judul)

# Membuat objek dari kelas Buku menggunakan metode classmethod
objBuku = Buku.dengan_judul("Python 101")
print(objBuku.judul)
