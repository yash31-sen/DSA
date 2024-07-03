# ip=input("Enter ip address: ")
ip="10.1.1.255"
l=[]
for i in ip.split("."):
   l.append(i) 
# for i in range(len(l)):
#    print(l[i])
print(l[0])
if int(l[0])>=10 and int(l[3])<=255:
   print("private")