class Alamat:
    def __init__(self, nama_jalan, nomor_rumah, kota, provinsi):
        self.nama_jalan = nama_jalan
        self.nomor_rumah = nomor_rumah
        self.kota = kota
        self.provinsi = provinsi

class TanggalLahir:
    def __init__(self, tanggal, bulan, tahun):
        self.tanggal = tanggal
        self.bulan = bulan
        self.tahun = tahun

class Mahasiswa:
    def __init__(self, nim, nama, alamat, tempat_lahir, tanggal_lahir):
        self.nim = nim
        self.nama = nama
        self.alamat = Alamat(nama_jalan=alamat["nama_jalan"], nomor_rumah=alamat["nomor_rumah"], kota=alamat["kota"], provinsi=alamat["provinsi"])
        self.tempat_lahir = tempat_lahir
        self.tanggal_lahir = TanggalLahir(tanggal=tanggal_lahir["tanggal"], bulan=tanggal_lahir["bulan"], tahun=tanggal_lahir["tahun"])


mahasiswa = Mahasiswa(
    nim="123456",
    nama="John Doe",
    alamat={
        "nama_jalan": "123 Main St",
        "nomor_rumah": "56",
        "kota": "Springfield",
        "provinsi": "IL"
    },
    tempat_lahir="Somewhere",
    tanggal_lahir={
        "tanggal": "15",
        "bulan": "04",
        "tahun": "1990"
    }
)