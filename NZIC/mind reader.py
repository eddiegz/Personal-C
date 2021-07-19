number=input()
suit=input()
list1=['2','3','4','5','6','7','8','9','10','J','Q','K','A']
list2=['spades','clubs','diamonds','hearts']
if suit=='hearts':
    print(len(list1)-list1.index(number)+len(list2)-list2.index(suit)-2)
else:
    print(len(list1)-list1.index(number)+(len(list2)-list2.index(suit)-1)*13-1)