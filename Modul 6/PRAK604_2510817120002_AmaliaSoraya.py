pesan1 = input()
pesan2 = input()

def identifikasi(pesan1, pesan2) :
    simbolis = []
    bintang = 0
    tagar = 0

    for i in range(len(pesan1)) :
        if pesan1[i] == pesan2[i] and pesan2[i] == " " :
            simbolis.append(" ")
        elif pesan1[i] == pesan2[i] :
            simbolis.append("*")
            bintang += 1
        elif pesan1[i] != pesan2[i] :
            simbolis.append("#")
            tagar += 1
            
    print("\n")
    for simbol in simbolis :
        print(simbol, end="")

    print(f"\n* = {bintang}")
    print(f"# = {tagar}")
    print(f"Pesan asli" if bintang >= tagar else "Pesan palsu")

if len(pesan1) != len(pesan2) :
    print("Panjang kalimat berbeda, pesan palsu")

else :
    identifikasi(pesan1, pesan2)
