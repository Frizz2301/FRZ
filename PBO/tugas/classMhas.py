class Mhs:
    def __init__(self, nama):
        self.nama = nama
        self.nilai_akhir = 0

    def hitungNilai(self, UAS, UTS, TUGAS):
        self.nilai_akhir = (UAS * 0.4) + (UTS * 0.4) + (TUGAS * 0.2)
        print(f"Nama: {self.nama}")
        print(f"Nilai Akhir: {self.nilai_akhir:.2f}")

Steven = Mhs('Steven')
Steven.hitungNilai(UAS=70, UTS=80, TUGAS=100)