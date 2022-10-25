a = int(input())
if a >= 1 and a <= 9:
      print("Satuan")
elif a == 0:
      print("Nol")
elif a >= 100:
      print("Anda Menginput Melebihi Limit Bilangan")
elif a >= 20 and a <= 99:
      print("Puluhan")
elif a >=10 and a <= 19:
      print("Belasan")