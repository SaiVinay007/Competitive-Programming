#include<cstdio>
#include<cstring>
#include<vector>

using namespace std;

#define MAXH 100
#define MAXW 100

#define INF 10001 // Max. Altitude is 10,000

// DI, DJ are ordered so that we explore in this order:
// North, West, East, South
char label[MAXH*MAXW],DI[]={-1,0,0,1},DJ[]={0,-1,1,0},curLabel;

// Is Declared as global because DFS() Function needs to know this.
int H,W,elevMap[MAXH][MAXW];

vector< vector<int> > adjList;

bool isValid(int I,int J)
{
	return ( (I>=0) && (I<H) && (J>=0) && (J<W));
}

void DFS(int V)
{
	label[V]=curLabel;
	int c,adjVertex;
	//printf("%d %d\n",V/W,V%W);
	for(c=0;c<(int)adjList[V].size();c++)
	{
		adjVertex=adjList[V][c];
		if(label[adjVertex]==0)
			DFS(adjVertex);
	}
}

int main()
{
	int T,I,J,t,minAlt,nextI,nextJ,minI,minJ,d;
	scanf("%d",&T);
	for(t=1;t<=T;t++)
	{
		// Take the Input.
		scanf("%d%d",&H,&W);
		for(I=0;I<H;I++)
			for(J=0;J<W;J++)
				scanf("%d",&elevMap[I][J]);
		
		// The description corresponds to a directed graph.
		// But we need to find the undirected components
		// Make an adjacency List representation of graph.
		adjList.clear();
		adjList.resize(H*W);
		for(I=0;I<H;I++)
		{
			for(J=0;J<W;J++)
			{
				minAlt=INF;
				for(d=0;d<4;d++)
				{
					nextI = I+DI[d];
					nextJ = J+DJ[d];
					if( isValid(nextI,nextJ) && minAlt>elevMap[nextI][nextJ] )
					{
						minAlt=elevMap[nextI][nextJ];
						minI=nextI;
						minJ=nextJ;
					}
				}
				if(minAlt<elevMap[I][J])
				{
					adjList[I*W+J].push_back(minI*W+minJ);
					adjList[minI*W+minJ].push_back(I*W+J);
				}
			}
		}	
		// DFS to explore the connected components
		// of Graph.
		memset(label,0,MAXH*MAXW);
		curLabel='a';
		for(I=0;I<H;I++)
		{
			for(J=0;J<W;J++)
				if(label[I*W+J]==0)
				{
					DFS(I*W+J);
					curLabel++;
				}
		}
		
		// Print out the output.
		printf("Case #%d:\n",t);
		for(I=0;I<H;I++)
		{
			for(J=0;J<W-1;J++)
				printf("%c ",label[I*W+J]);
			printf("%c\n",label[I*W+J]);
		}
	}
	return 0;
}
