class Siswa:
    def __init__(self, nama, nip):
        self.nama = nama
        self.nip = nip

    def cetakNama(self):
        print(f"Nama Siswa: {self.nama}")

    def cetakNIP(self):
        print(f"NIP Siswa: {self.nip}")

class SiswaSD(Siswa):
    def __init__(self, nama, nip, jenjang, nilaiSD):
        super().__init__(nama, nip)
        self.jenjang = jenjang
        self.nilaiSD = nilaiSD

    def cetakNilaiAkhirSD(self):
        print(f"Nilai Akhir SD: {self.nilaiSD}")

class SiswaSMP(Siswa):
    def __init__(self, nama, nip, jenjang, nilaiSMP):
        super().__init__(nama, nip)
        self.jenjang = jenjang
        self.nilaiSMP = nilaiSMP

    def cetakNilaiAkhirSMP(self):
        print(f"Nilai Akhir SMP: {self.nilaiSMP}")

# Contoh penggunaan
siswa_sd = SiswaSD("Frizz", 12345, "SD", 85)
siswa_smp = SiswaSMP("Prisa", 67890, "SMP", 90)

siswa_sd.cetakNama()
siswa_sd.cetakNIP()
siswa_sd.cetakNilaiAkhirSD()

siswa_smp.cetakNama()
siswa_smp.cetakNIP()
siswa_smp.cetakNilaiAkhirSMP()
