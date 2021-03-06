// 깊이 우선 탐색의 구현

// 1  ㅡ 2  ㅡ  6
// |    /  \    |
// |   /    4 ㅡ5
//  \ /    /  \
//   3 ㅡ 7 ㅡ 8 ㅡ 9 

// 1 --> 2 --> 3 --> 7 --> 4 --> 5 --> 6 --> 8 --> 9

// 입력
// 9 12
// 1 2 
// 1 3
// 2 3
// 2 4
// 2 6 
// 3 7
// 4 5 
// 4 7
// 4 8
// 5 6 
// 7 8
// 8 9

#include <cstdio>
#include <vector>

using namespace std;

const int MAX = 100;

int n,m;

vector <int> myGraph[MAX]; // myGraph[x] = x의 인접 리스트

bool visited[MAX];

void DFS(int x){
  // x부터 시작해서 DFS하여 그 순서를 출력하는 함수.
  // 단, visited에 방문 기록이 있음.
  
  visited[x] = true;
  printf("%d ",x);
  
  // myGraph[x] <- [1, 3, 4]
  for(int i=0;i<myGraph[x].size();i++){
    
    // x와 y가 연결이 되어 있다.
    int y = myGraph[x][i];
      
      // 그 노드를 방문했는지 체크
      if(visited[y] == false){
        DFS(y);
      }
    
  }
  
}

int main() {
  
  
  scanf("%d %d",&n,&m);
  
  for(int i=0;i<m;i++){
    
    int a,b;
    
    scanf("%d %d",&a,&b);
    
    myGraph[a].push_back(b);
    myGraph[b].push_back(a);
  }
  
  DFS(1); // 1 부터 깊이우선 탐색해서 방문한 순서대로 출력해라
  
  return 0;
}
