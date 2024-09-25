num = (1,4,9,16,25,36,49,64,81,100,16,89,45,16,78,47,67,57,57,16,16)# this is tutle form

x = int (input("ENTER THE NUMBER WHICH IS YOU WANT TO FIND : "))
i=0
while i<len(num):
  if (num[i]==x):
    print("FOUND THE NUMBER AT INDEX : ",i)
    i+=1
    break
  else:
    print("finding...")
  i+=1