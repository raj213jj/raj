'''
#programe to find sum of sruares of digits of nummbers
class Sum:
    def _init_(self):
        self.sum=0
    def acpt(self):
        self.n=int(input("enter the n value:"))
    def process(self):
        while self.n>0:
            r=self.n%10
            self.sum=self.sum+r*r
            self.n=self.n//10
        print(self.sum)
d=Sum()
d.acpt()
d.process()


#programe to find count value of the number

class sum:
    def __init__(self):
        self.count=0
    def accept(self):
        self.n=int(input("enter a number"))
    def process(self):
        while self.n>0:
            self.count=self.count+1
            self.n=self.n//10
        print("no. of  digits=",self.count)
g=sum()
g.accept()
g.process()


#programe for armstrong method 1


class Armstrongnum:
    def __init__(self):
        self.count=0
        self.sum=0
    def accept(self):
        self.n=int(input("enter a number"))
    def findDigitCount(self):
        while self.n>0:
            self.count=+1
            self.n=self.n//10
        print("power=",self.count)
        return self.count
    def power(self,b,p): 
        result=1
        c=1
        while c<=p:
            result=result*b
            c=c+1
        return result
    def process(self):
        num=self.n
        p=self.findDigitCount()
        while num>0:
            r=num%10
            self.sum=self.sum+self.power(r,p)
            num=num//10
        if self.n==self.sum:
            print("number is armstrong")
        else:
            print("not an armstrong")
g=Armstrongnum()
g.accept()
g.process()


#programe for armstrong number method-2

class display:
    def _init_(self):
        self.n=int(input("enter a given number:"))
        self.num=self.n
        self.x=self.n
    def process(self):
        self.count=0
        self.sum=0
        while self.n!=0:
          self.n=self.n//10
          self.count=self.count+1
        while self.x!=0:
            self.i=self.x%10
            self.sum=self.sum+(self.i**self.count)
            self.x=self.x//10
        print("given number is a {} digit number".format(self.count))
        if(self.sum==self.num):
            print("{} is a amstrong number".format(self.sum))
        else:
            print("{} is not a amstrong number".format(self.sum))
        
d=display()
d.process()
'''


