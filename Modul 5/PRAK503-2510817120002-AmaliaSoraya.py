def maksimal(acuan, nilaimaks) :
    besar = max(acuan, nilaimaks)
    return besar

def minimal (acuan, nilaimin) :
    kecil = min(acuan, nilaimin)
    return kecil

bilangan = int(input())
angka = list(map(int, input().split()))

batas = 0
maks = -100000
minim = 100000
while batas < bilangan:
    nilai = angka[batas]
    maks = maksimal(maks, nilai)
    minim = minimal(minim, nilai)
    batas += 1

print(maks, minim)