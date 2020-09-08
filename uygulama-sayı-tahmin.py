import random
x=random.randint(1,100)
hak=30

while hak>0:
    sayi=int(input("sayi giriniz: "))
    if (sayi<x):
        print("yukarı")
        hak-=1
        print(f"kalan hakkınız: {hak}")
    elif(sayi>x):
        print("aşagı ")
        hak-=1
        print(f"kalan hakkınız:{hak}") 
    else:
        puan=hak*20
        print("DOĞRU CEVAP")
        print(f"puanınız:{puan}")
        hak=0
