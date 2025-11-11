def reverse(nilai) :
    baliklah = str(nilai)[::-1]
    return int(baliklah)

a, b = map(int, (input().split()))
a = reverse(a)
b = reverse(b)
c = int(a) + int(b)
print(reverse(c))