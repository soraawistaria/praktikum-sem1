batas = int(input())

label_ruangan = []
for ruangan in range(1, batas+1) :
    label_ruangan.append(ruangan)

print(label_ruangan)

angka = list(map(int, input().split(" ")))

print(angka)

zetsu = 0
for perkalian in angka:
    membelah = angka[zetsu] * label_ruangan[zetsu]
    zetsu += 1
    print(membelah, end=" ")