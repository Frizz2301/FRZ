class BilanganUtils:
    @staticmethod
    def apakah_prima(number):
        if number < 2:
            return False
        for i in range(2, int(number ** 0.5) + 1):
            if number % i == 0:
                return False
        return True

    @staticmethod
    def faktorial(angka):
        if angka < 0:
            return None  # Faktorial tidak untuk bilangan negatif
        hasil = 1
        for i in range(2, angka + 1):
            hasil *= i
        return hasil

    @staticmethod
    def fpb(a, b):
        while b:
            a, b = b, a % b
        return a

print(BilanganUtils.apakah_prima(9))  
print(BilanganUtils.faktorial(9))    
print(BilanganUtils.fpb(78, 120))      
