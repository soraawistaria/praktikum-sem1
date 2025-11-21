baris1, baris2 = map(int, input().split(" "))

if baris1 != baris2:
    print("Jumlah tidak sama")

else:
    kelompok1 = list(map(int, input().split(" ")))
    kelompok2 = list(map(int, input().split(" ")))

    indexing = 0

    for dikali in range(0,baris1) :
        perkalian = kelompok1[indexing] * kelompok2[indexing]
        indexing += 1
        print(perkalian, end=" ")