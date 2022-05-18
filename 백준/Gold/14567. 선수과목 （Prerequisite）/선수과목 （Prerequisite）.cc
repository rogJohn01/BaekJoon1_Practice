#include <cstdio>
#include <queue>
#include <vector>
using namespace std;

int N , M , ans[1001] , inDegree[1001]; 
vector<int> graph[1001] ; 

int main() { 
	scanf("%d%d" , &N,&M ) ; 
	while( M --) {
		int u ,v ; 
		scanf("%d%d", &u,&v) ; 
		graph[u].push_back(v) ; 
		inDegree[v]++;  }

	queue<int> q; 
	for(int i=1; i<=N ; i++) { 
		if (inDegree[i]==0 ) {
			q.push(i); 
			ans[i] =1 ; }
	}
	int cur =2; 
	while(!q.empty()){
		int sz = q.size(); 
		while(sz--) {
			int qf = q.front(); 
			q.pop() ;
			for(auto next : graph[qf] ) {
				if (--inDegree[next]==0) {
					q.push(next); 
					ans[next] = cur; }
			}
		}
		cur ++;
		}
		for( int i=1; i<=N ; i++) {
			printf("%d " , ans[i]) ; 
	}
}





				