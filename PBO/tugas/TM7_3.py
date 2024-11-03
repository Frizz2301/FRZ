class Suhu:
    @classmethod
    def celsius_ke_fahrenheit(cls, celsius):
        return (celsius * 9/5) + 32

suhu_fahrenheit = Suhu.celsius_ke_fahrenheit(30)
print(suhu_fahrenheit)
