n=int(input())
A=[]
B=[]
for i in range (n):
    b=int(input())
    B.append([b,1,-1])
    A.append([b,i])

A.sort()
for i in range(n):
    if(A[i][1]==0):
        if(B[A[i][1]+1][2]==-1 and B[A[i][1]+1][0]>B[A[i][1]][0]):
            B[A[i][1]+1][1]=max(B[A[i][1]][1]+1,B[A[i][1]+1][1])

    elif(A[i][1]==n-1):
        if(B[A[i][1]-1][2]==-1 and B[A[i][1]-1][0]>B[A[i][1]][0]):
            B[A[i][1]-1][1]=max(B[A[i][1]][1]+1,B[A[i][1]-1][1])

    else:
        if(B[A[i][1]+1][2]==-1 and B[A[i][1]+1][0]>B[A[i][1]][0]):
            B[A[i][1]+1][1]=max(B[A[i][1]][1]+1,B[A[i][1]+1][1])

        if(B[A[i][1]-1][2]==-1 and B[A[i][1]-1][0]>B[A[i][1]][0]):
            B[A[i][1]-1][1]=max(B[A[i][1]][1]+1,B[A[i][1]-1][1])

    B[A[i][1]][2]=1
count=0
for i in range(n):
    count=count+B[i][1]

print(count)
        

        
