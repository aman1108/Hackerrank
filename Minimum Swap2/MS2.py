#T=int(input())
#for _ in range(T):
def main():
    N=int(input())
    #N,M=map(int,input().split())
    A=list(map(int,input().split()))
    B=[0 for i in range(N+1)]
    s=0
    for i in range(1,N+1):
        c=0
        if (B[i]==0):
            j=i
            while(B[j]!=1):
                B[j]=1
                j=A[j-1]
                c=c+1
            s=s+c-1
    print(s)
        
main()
