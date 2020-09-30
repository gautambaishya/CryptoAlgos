def exponent(a,b,n):
  answer= 1
  for i in range(b):
    answer = (answer*a)%n
  print('Answer=', answer)

a,b, n= [int(i) for i in input(Enter a, b and n n).split()]
exponent(a,b,n)
