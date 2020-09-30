def exponent(a,b,n):
  answer= 1
  x=a
  while(b>0):
    if(b%2!=0):
      answer= (answer*x)%n
      b= b-1
    x= (x*x)%n
    b=b/2
  print('Answer=', answer)

a,b, n= [int(i) for i in input("Enter a, b and n \n").split()]
exponent(a,b,n)
