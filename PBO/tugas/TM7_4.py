class Karyawan:
    def __init__(self, nama, usia, gaji):
        self.nama = nama 
        self.usia = usia
        self.gaji = gaji

    @classmethod
    def dari_string(cls, string):
        nama, usia, gaji = string.split("-") #Jawaban
        return cls(nama, int(usia), int(gaji))  #Jawaban

K1 = Karyawan.dari_string("Andi-25-5000000")
print(K1.nama, K1.usia, K1.gaji)  # Output: Andi 25 5000000
