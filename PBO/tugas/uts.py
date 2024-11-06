class Mahasiswa:
    def __init__(self):
        print('Kelas Mahasiswa')
    def cetak(self):
        print('Mahasiswa')
class MahasiswaS1(Mahasiswa):
    def cetak(self):
        print('Mahasiswa S1')
class MahasiswaS2(Mahasiswa):
    def cetak(self):
        print('Mahasiswa S2')
m=Mahasiswa()
mS1=MahasiswaS1()
mS2=MahasiswaS2()
mS1.cetak()
mS2.cetak()