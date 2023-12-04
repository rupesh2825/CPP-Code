#a)selection sort
def selectionSort(arr):
    n=len(arr)
    
    for i in range(n):
        for j in range(i+1,n):
            if arr[i]<arr[j]:
                temp=arr[j]
                arr[j]=arr[i]
                arr[i]=temp
                

                

arr=[]
Num=int(input("Enter the number of Students "))
for i in range(Num):
    per=float(input("Enter the persentage Marks "))
    arr.append(per)


selectionSort(arr)
print ("selection sorted sorted array ")
for i in range (len(arr)):
    print("%f" %arr[i])

#b)bubblesort
def bubbleSort(arr):
    n=len(arr)
    for p in range(n-1):
        for c in range(0,n-1-p):
            if arr[c] > arr[c+1]:
                temp=arr[c]
                arr[c]=arr[c+1]
                arr[c+1]=temp
            
            
arr=[]
Num=int(input("Enter the number of Students "))
for i in range(Num):
    per=float(input("Enter the persentage Marks "))
    arr.append(per)


bubbleSort(arr)
print ("bubbleSort sorted array ")
for i in range (len(arr)):
    print("%f" %arr[i])


