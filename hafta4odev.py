import random
from random import randint

import timeit

import sys
sys.setrecursionlimit(10000000) # 10000 is an example, try with different values


def createList(n):
    myList = []
    for i in range(n):
        myList.append(randint(0,100))
    return myList


def bubbleSort(myList):
    for i in range(len(myList)-1,0,-1):
        for k in range(i):
            if myList[k]>myList[k+1]:
                temp = myList[k]
                myList[k] = myList[k+1]
                myList[k+1] = temp
    return myList


def insertionSort(myList):
   for i in range(1,len(myList)):
     currentvalue = myList[i]
     position = i

     while position>0 and myList[position-1]>currentvalue:
         myList[position]=myList[position-1]
         position = position-1

     myList[position]=currentvalue



def qsort(myList):
    less = []
    equal = []
    greater = []

    if len(myList) > 1:
        pivot = myList[0]
        for x in myList:
            if x < pivot:
                less.append(x)
            if x == pivot:
                equal.append(x)
            if x > pivot:
                greater.append(x)
        return qsort(less)+equal+qsort(greater)
    else:
        return myList


def selectionSort(alist):
   for fillslot in range(len(alist)-1,0,-1):
       positionOfMax=0
       for location in range(1,fillslot+1):
           if alist[location]>alist[positionOfMax]:
               positionOfMax = location

       temp = alist[fillslot]
       alist[fillslot] = alist[positionOfMax]
       alist[positionOfMax] = temp





yuzElemanliDizi = createList(100)
binElemanliDizi = createList(1000)
onBinElemanliDizi = createList(10000)
yuzBinElemanliDizi = createList(100000)
birMilyonElemanliDizi = createList(1000000)


start_time = timeit.default_timer()
qsort(yuzElemanliDizi)
processTime = timeit.default_timer() - start_time
print(processTime)

start_time = timeit.default_timer()
qsort(binElemanliDizi)
processTime2 = timeit.default_timer() - start_time
print(processTime2)

start_time = timeit.default_timer()
qsort(onBinElemanliDizi)
processTime3 = timeit.default_timer() - start_time
print(processTime3)

start_time = timeit.default_timer()
qsort(yuzBinElemanliDizi)
processTime4 = timeit.default_timer() - start_time
print(processTime4)

start_time = timeit.default_timer()
qsort(birMilyonElemanliDizi)
processTime5 = timeit.default_timer() - start_time
print(processTime5)
