import random

class Player:
    def __init__(self, nama):
        self.nama = nama
        self.pilihan = None

    def memilih(self):
        self.pilihan = input(f"{self.nama}, masukkan pilihan (Batu, Gunting, Kertas): ").lower()

class Computer:
    def __init__(self):
        self.pilihan = None

    def memilih(self):
        self.pilihan = random.choice(['batu', 'gunting', 'kertas'])

class Game:
    def __init__(self):
        self.player = Player("Human")
        self.computer = Computer()

    def menentukan_pemenang(self):
        if self.player.pilihan == self.computer.pilihan:
            return "Hasilnya SERI!"
        elif (self.player.pilihan == 'batu' and self.computer.pilihan == 'gunting') or \
             (self.player.pilihan == 'gunting' and self.computer.pilihan == 'kertas') or \
             (self.player.pilihan == 'kertas' and self.computer.pilihan == 'batu'):
            return f"{self.player.nama} MENANG!"
        else:
            return "Computer MENANG!"

    def play(self):
        self.player.memilih()
        self.computer.memilih()
        print(f"{self.player.nama} memilih: {self.player.pilihan}")
        print(f"Computer memilih: {self.computer.pilihan}")
        print(self.menentukan_pemenang())

# Menjalankan permainan
game = Game()
game.play()
