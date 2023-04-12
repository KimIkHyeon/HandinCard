#include <iostream>
#include <queue>

using namespace std;

#define MAXN (100)

int N;
int sol[MAXN + 10];

void InputData(){
	cin >> N;
}

void OutputData(){
	for (int i=0; i<N; i++){
		cout << sol[i] << "\n";
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	InputData();//입력
	//여기서부터 작성
	
	queue<int> q;
	for (int i = 1; i <= N; i++) {
		q.push(i);
	}	
	
	for (int t = 0; t < N-1; t++) {
        int x = q.back() / 2;
		for (int i = 0; i < x; i++) {
			q.push(q.front());
			q.pop();
            
		}
		sol[t] = q.front();
		q.pop();
	}
	
	sol[N-1] = q.front();
	
	OutputData();//출력
	return 0;
}
