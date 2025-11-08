def maxBilangan(nilai1, nilai2, nilai3, nilai4) :
    return max(nilai1, nilai2, nilai3, nilai4)

a, b, c, d = map(int, input().split())
hasil = maxBilangan(a, b, c, d)
print(hasil)