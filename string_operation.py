str1=input("Enter the string")
l1=str1.split()
n=0
word=0
print(l1)

for i in range(len(l1)):
    len(l1[i])
    if n<len(l1[i]):
        n=len(l1[i])
        word=i
        
print("The longest length word is : ",l1[word])

str2=input("Enter the string")
char=input("Enter the charcter")
count=0
for i in range(len(str2)):
    if(char==str2[0]):
        count=count+l1
        
print("Ther character is present at this index position :",count)
    


A=[[1,2],
    [3,4],
    [5,6]]
    
B=[[1,3],
   [4,2],
    [6,5]]

result=[[0,0],
        [0,0],
        [0,0]]
        

        
        
for i in range(len(A)):
        
    for j in range(len(A[0])):
        result[i][j]=A[i][j]+B[i][j]
            
print(len(A)) 
print(len(A[0]))
print(result)
            
            
C=[[1,2],
    [3,4],
    [5,6]]
    
D=[[1,3],
   [4,2],
    [6,5]]

result=[[0,0],
        [0,0],
        [0,0]]
        

        
        
for i in range(len(C)):
        
    for j in range(len(C[0])):
        result[i][j]=C[i][j]-D[i][j]
            
print(len(C)) 
print(len(C[0]))
print(result)
            
            
E=[[1,2],
   [6,3]]
    
result=[[0,0],
       [0,0]]
    
for i in range(len(E)):
    
    for j in range(len(E[0])):
        result[i][j]=E[j][i]
            
print(result)


matrix1=[[5,4,3,2],
         [4,5,2,8]]
         
matrix2=[[4,2,3,1],
          [4,2,7,3]]
          
result=[[0,0,0,0],
        [0,0,0,0]]
        
        
for i in range(len(matrix1)):
    for j in range(len(matrix1[0])):
        for k in range(len(matrix2)):
            result[i][j]+=matrix1[k][i]*matrix2[k][j]
        
print(result)

