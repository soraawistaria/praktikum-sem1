baris, kolom = map(int, input().split())
#elemen = list(map(int, input().split(" ")))

x = []
elemen = list(map(int, (input().split())))
a = 0

for i in range(baris) :
    y = []
    for j in range(kolom) :
        y.append(elemen[a])
        a += 1
    x.append(y)
print()
for i in range(0, baris):
    for j in range(0, kolom) :
        print(x[i][j], end=" ")
    print()