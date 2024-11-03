from datetime import date

class Mobil:
    def __init__(self, umur):
        self.umur = umur

    @classmethod
    def dari_tahun(cls, tahun_pembuatan):
        tahun_sekarang = date.today().year
        umur = tahun_sekarang - tahun_pembuatan
        return cls(umur)

bmw = Mobil.dari_tahun(2015)
print(bmw.umur)  
