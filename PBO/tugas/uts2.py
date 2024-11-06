class A:
    def __init__(self):
        print('Salam dari kelas A')
class C(A):
    def __init__(self):
        print('Salam dari kelas C')
class F(C):
    def __init__(self):
        print('Salam dari kelas AF')
class H:
    def __init__(self):
        KelasA=A()

KelasF=F()
KelasH=H()
