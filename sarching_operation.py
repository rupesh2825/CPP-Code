a) Code of above Question ::
#Sentinel Search
arr=[]
num=int(input("Enter total no of students :: "))
print("Enter the Roll number of students in random order :: ")
for i in range (num):
n1=int(input("Enter the Roll no :: "))
arr.append(n1)
for i in range (num):
print(arr[i])
key=int(input("Enter Roll No to check Attendance :: "))
last=arr[num-1]
t=arr[num-1]
arr[num-1]=key
i=0
while(arr[i]!=key):
i+=1
arr[num-1]=last
if(i<num-1 or arr[num-1]==key):
print("Student has attended Training ")

else:
print("Student has not attended Training ")

# Linear Search
arr=[]
num=int(input("Enter total no of students :"))
for i in range(num):
per=int(input("Enter the Roll number of students in random order :"))
arr.append(per)
print("Enter Roll No to check Attendance:")
key=int(input("Enter the Roll no : "))
for i in range(len(arr)):
if(arr[i]==key):
flag=1
print(i)
break
else:
flag=0
if(flag==1):
print("Student has attended Training")
else:
print("Student has not attended Training")

b) Code of above Question ::
# Binary Search
