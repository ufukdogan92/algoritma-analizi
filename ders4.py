class dizi1:
    myList = []
    def add(self,i):
        self.myList.append(i) #karmasıklık burada O(1)

class dizi2:
    myList = []
    def add(self,i):
        self.myList.append(i) #karmasıklık burada O(1)

diziObj = dizi1()
dizi2Obj = dizi2()

def __eq__(dizi1, dizi2):
    return dizi1.myList == dizi2.myList  #karmasiklik burada O(n) oluyor 

diziObj.myList = [1,2,3,4,5]
dizi2Obj.myList = [3,5,6,8,9]
diziObj = dizi2Obj
print(diziObj.myList)
diziObj.add(50)
print(diziObj.myList)
