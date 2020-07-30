class Graph:
    def __init__(self,n):
        self.graph={}
        for i in range(n):
            self.graph[i+1]=[]

    def addEdge(self,u,v):
        if u in self.graph.keys():
            self.graph[u].append(v)
        else:
            self.graph[u]=[v]

    def totalcost(self,cl,cr):
        visited={}
        for i in self.graph.keys():
            visited[i]=False

        totalcost=0
        for i in self.graph.keys():
            if(visited[i]==False):
                q=[]
                q.append(i)
                visited[i]=True
                totalcost=totalcost+cl
                while(len(q)!=0):
                    s=q.pop(0)
                    for i in self.graph[s]:
                        if(visited[i]==False):
                            q.append(i)
                            visited[i]=True
                            totalcost=totalcost+cr
        print(totalcost)    
    

q=int(input())
for _ in range(q):
    n,m,cl,cr=map(int,input().split())
    g=Graph(n)
    for i in range(m):
        u,v=map(int,input().split())
        g.addEdge(u,v)
        g.addEdge(v,u)
    if(cl<=cr):
        print(n*cl)
        continue
    else:
        g.totalcost(cl,cr)



    

    
        
