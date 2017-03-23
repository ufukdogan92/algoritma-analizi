myList = []
from sys import getsizeof
getsizeof(myList)


for i in range(1000):
    size_l = getsizeof(myList)
    myList.append(i)
    size_2 = getsizeof(myList)
    if(size_l!=size_2):
        print(i,"size degisti.")
    else:
        pass #print(i,"size ayni")


myList_1 = [1,2,3,4,5]
myList_2 = myList_1
print (myList_1)
print (myList_2)
myList_2 = [5,5,5,5,5]
print (myList_1)
print (myList_2)