from functools import reduce
import math
import matplotlib.pyplot as plt
import numpy as np


sum1(src)
def sfor(list): 
s=0 
for e in list: 
s+=e 
return(s) 

def swhile(list): 
s=0 
i=0 
while i<len(list): 
s+=list[i] 
i+=1 
return(s) 

def srec(list): 
if len(list)==1: 
return list[0] 
return list[-1]+srec(list[:-1]) 




def pow2(N): 
i=0 
p=1 
while p<=N: 
res=[i,p] 
p*=2 
i+=1 
return res 





def mid(list0):
a = len(list0)
return reduce(lambda x, y: x + y, list0) / float(a)




def fib(N): 
f1=0 
f2=1 
i=2 
while f2<N: 
f1,f2,i=f2,f1+f2,i+1 
if f2==N: 
return i 
return -1 





 
def fact(x):
if x == 0:
return 1
f = x * fact(x - 1)
return f





src=[1,2,7,3,5,8,4,6,9] 
def minmax(list): 
imin=imax=0 
i=0 
while i<len(list): 
if list[i]<list[imin]: 
imin=i 
if list[i]>list[imax]: 
imax=i 
i+=1 
list[imin],list[imax]=list[imax],list[imin] 
return list 





def ro(x, y, z, i):
import math
l = math.sqrt((y - x) ** 2 + (i - z) ** 2)
return l
