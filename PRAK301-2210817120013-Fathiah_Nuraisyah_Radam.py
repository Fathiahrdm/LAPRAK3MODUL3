a, b, c = map (int, input().split())
if a < b and a < c:
      print(a, b, c)
elif b < a and b < c:
      if b < c:
            print(b, a, c)
      else:
            print(b, c, a)
elif c < a and c < b:
      if c < b:
            print(c, b, a)
      else:
            print(c, a, b)



