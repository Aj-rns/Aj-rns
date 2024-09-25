num1=int(input("enter your first number : "))
num2=int(input("ENTER YOUR SECOND NUMBER : "))
num3=int(input("ENTER YOUR THIRD NUMBER : "))

if(num1>num2 and num1>num3):
  print("A IS GREATEST NUMBER : ",num1)
elif(num2>num3):
  print("B IS GREATEST NUMBER : ",num2)
else:
  print("C IS GREATEST NUMBER : ",num3)