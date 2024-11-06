class Hewan:
    def __init__(self, nama):
        self.nama = nama

    def suara(self):
        return "Suara hewan"


class Kucing(Hewan):
    def __init__(self, nama, warna):
        super().__init__(nama)  # Memanggil konstruktor kelas induk
        self.warna = warna

    def suara(self):
        return "Meow"


class Anjing(Hewan):
    def __init__(self, nama, ras):
        super().__init__(nama)  # Memanggil konstruktor kelas induk
        self.ras = ras

    def suara(self):
        return "Guk guk"


# Contoh penggunaan
kucing = Kucing("Kitty", "Putih")
anjing = Anjing("Buddy", "Golden Retriever")

print(f"{kucing.nama} ({kucing.warna}): {kucing.suara()}")
print(f"{anjing.nama} ({anjing.ras}): {anjing.suara()}")