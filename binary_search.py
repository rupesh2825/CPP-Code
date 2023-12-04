def binary_search(list1,key):
    low=0
    high=len(list1)-1
    while low<=high:
        mid=(low+high)//2
        if list1[mid]>key:
            high=mid
        elif list1[mid]<key:
            low=mid+1
        else:
            return mid
    return-1
dict1={}

while True:
        
       data=input("enter name mobile number seperated by comma")
       if 'EXIT'==data:
           break
       name,num=data.split(",")
       num=int(num)
       dict1[num]=name
print(dict1)
list1=dict1.keys()
list1=list(list1)
list1.sort()
print(list1)

key=int(input("enter number to search for "))

index=binary_search(list1,key)
if index<0:
    print('{} was not found.'.format(key))
else:
    print('{} was found at index {}.'.format(key,index))
    print("details of number found")
    print(dict1[key])
