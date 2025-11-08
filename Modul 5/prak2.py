import math

def hitung(nilai1, nilai2) :
    kurang = nilai1 - nilai2
    return abs(kurang)

def mutlak(nilai1) :
    return abs(nilai1)

a, c, b, d = map(int, input().split())
hasil = hitung(a,b) + hitung(c,d)
print(mutlak(hasil))