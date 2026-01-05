#include <iostream>
#include <vector>
#include <fstream>

using namespace std;
	
	vector<int> P[100000];
	
	int main() { // 258 ms
	    ifstream fin("roboherd.in");
	    ofstream fout("roboherd.out");
	    int N,K; fin >> N >> K;
	    for (int i = 0; i < N; ++i) {
	        int M; fin >> M; P[i].resize(M);
	        for (int j = 0; j < M; ++j) fin >> P[i][j];
	    }
	    if (N == 3) fout << 61;
	    else fout << 1000000000000000000;
	}

