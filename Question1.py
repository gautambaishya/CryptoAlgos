import string
def print_function(List): 
    return ''.join(List)

def permute(a, l, r): 
  if l == r: 
        print(print_function(a))
  else:
        for i in range(l, r + 1): 
            a[l], a[i] = a[i], a[l] 
            permute(a, l + 1, r) 
            a[l], a[i] = a[i], a[l] 
  
string = string.ascii_lowercase
print("Original String= ", string)
n = len(string) 
a = list(string) 
permute(a, 0, n-1)