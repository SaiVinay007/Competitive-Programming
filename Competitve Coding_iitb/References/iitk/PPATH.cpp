#include<cstdio>
#include<queue>

using namespace std;
typedef pair<int,int> PII;

#define MAXP 10001
#define MKP  make_pair
#define FST(xx)  xx.first
#define SND(xx)  xx.second

vector< vector<int> > pAL(MAXP);
bool visited[MAXP];
int isP[MAXP],prev[MAXP];

bool isPrime(int n)
{
	// Return from the cache if Present.
	if(isP[n]!=-1) return isP[n];

	// Return 0 for even numbers.
	if(n%2==0) return isP[n]=0;

	int d=3;

	while(d*d<=n)
	{
		// d divides n, then n is not prime!
		if(n%d==0) return isP[n]=0;
		d+=2;
	}

	// n has no divisors till sqrt(n) => n is prime!
	return isP[n]=1;
}

void initGraph()
{
	int digits[4],tmp,I,J,K,L;
	for(I=1000;I<10000;I++)
	{
		if(isPrime(I))
		{
			tmp=I;
			for(J=0;J<4;J++)
			{
				digits[3-J]=tmp%10;
				tmp/=10;
			}

			for(J=0;J<4;J++)
			{
				K=(J==0)?1:0;
				for(;K<=9;K++)
				{
					if(digits[J]==K) continue;

					tmp=0;
					for(L=0;L<4;L++)
						if(L==J) tmp=tmp*10+K;
						else tmp=tmp*10+digits[L];
					if(isPrime(tmp))
					{
						pAL[I].push_back(tmp);
						//printf("%d %d\n",I,tmp);
					}
				}
			}
		}

	}
}


int main()
{
	int T,a,b,pnum,I;
	bool success;
	queue<PII> Q;
	PII n;

	for(I=0;I<MAXP;I++)isP[I]=-1;

	// Precompute the graph.
	initGraph();

	scanf("%d",&T);
	while(T--)
	{
		//Empty the queue
		while(!Q.empty())Q.pop();

		scanf("%d%d",&a,&b);
		for(I=0;I<MAXP;I++)visited[I]=0;
		Q.push(MKP(a,0));
		visited[a]=1;
		prev[a]=0;
		success=0;
		while( !Q.empty() )
		{
			n=Q.front();Q.pop();
			//printf("%d\n",FST(n));
			if(FST(n)==b){
				success=1;
				printf("%d\n",SND(n));
				break;
			}
			pnum=FST(n);

			for(I=0;I<(int)pAL[pnum].size();I++)
			{
				if(!visited[pAL[pnum][I]])
				{
					visited[pAL[pnum][I]]=1;
					Q.push(MKP(pAL[pnum][I],SND(n)+1));
					prev[pAL[pnum][I]]=pnum;
				}
			}
		}

		if(!success)
		{
			printf("Impossible\n");
		}
	}
	return 0;
}
