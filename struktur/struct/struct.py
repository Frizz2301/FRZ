def Mahasiswa(name, age, address):
    return {'name': name, 'age': age, 'address': address}

mhs = Mahasiswa(
    name= "Frizz",
    age= 42,
    address="Kabupaten Tangerang"
)

print("Name : ", mhs['name'])
print("Age :", mhs['age'])
print("Address : ", mhs['address'])
