number=int(input())
set1=set()
set2=set()
car1=input()
car2=input()
for car in car1.split():
    set1.add(car1)
for car in car2.split():
    set2.add(car2)
for car in (set1 & set2):
    print(car)