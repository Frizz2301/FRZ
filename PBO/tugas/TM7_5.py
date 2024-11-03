class Tanggal:
    def __init__(self, tahun, bulan, hari):
        self.tahun = tahun
        self.bulan = bulan
        self.hari = hari

    @classmethod
    def dari_iso_format(cls, string):
        tahun, bulan, hari = map(int, string.split("-"))
        return cls(tahun, bulan, hari)

T1 = Tanggal.dari_iso_format("2023-07-01")
print(T1.tahun, T1.bulan, T1.hari)  
