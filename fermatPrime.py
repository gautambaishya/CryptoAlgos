import random

def doRepeatedSquare(a,b,N):
  if(b<0):
    return("Error")
  t=1
  x=a
  while(b>0):
    if(b%2!=0):
      t=(t*x)%N 
      b=b-1
    x=(x*x)%N
    b=b//2
  return(t)

  
def checkPrime(n):
  for a in range (2,12):
    if(a==2 or a==3 or a==5 or a==7 or a==11):
          flag=doRepeatedSquare(a,n-1,n)
          if(flag!=1):
            return(False)
  return(True)

def generateRandom(x,y):
  rand_number=random.randint(x,y)
  return(rand_number)

def fermatPrime():
  rand_number=generateRandom(2**63,2**64)
  print("Number is",rand_number)
  flag=checkPrime(rand_number)

  if(flag):
    print("It is Prime")
  else:
    print("It is not Prime")

fermatPrime()