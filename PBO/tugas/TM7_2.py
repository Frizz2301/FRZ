class Lingkaran:
    def __init__(self, jarijari):
        self.jarijari = jarijari #Jawaban

    @classmethod
    def dari_diameter(cls, diameter):
        jarijari = diameter / 2 #Jawaban
        return cls(jarijari)

l1 = Lingkaran.dari_diameter(12)
print(l1.jarijari)
