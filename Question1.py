def toString(list_input): 
    return (''.join(list_input)) 
  
def recurive_permute(a, left, right): 
    if (left==right):     #Base Case
        print(toString(a)) 
    else: 
        for i in range(left,right+1): 
            a[left], a[i] = a[i], a[left] 
            recurive_permute(a, left+1, right) 
            a[left], a[i] = a[i], a[left] 
  

string = "abcdefghijklmnopqrstuvwxyz"
n = len(string) 
arr = list(string) 
recurive_permute(arr, 0, n-1) 