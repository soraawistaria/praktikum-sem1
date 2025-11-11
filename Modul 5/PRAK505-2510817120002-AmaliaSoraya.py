def biodata(tahun_lahir, nama, asal) :
    tahun_sekarang = 2025
    print(f"\nPerkenalkan Nama Saya : {nama}")
    umur = tahun_sekarang - int(tahun_lahir)
    print(f"Umur Saya : {umur}")
    print(f"Saya Adalah Angkatan : {tahun_sekarang}")
    print(f"Asal Saya dari : {asal}")

in_tahun_lahir = int(input())
in_nama = input()
in_asal = input()
biodata(in_tahun_lahir, in_nama, in_asal)