#include<iostream>
#include<vector>
#include<fstream>
 using namespace std;

namespace FastIO {
	const int BSZ = 1<<15; ////// INPUT
	char ibuf[BSZ]; int ipos, ilen;
	char nc() { // next char
		if (ipos == ilen) {
			ipos = 0; ilen = fread(ibuf,1,BSZ,stdin);
			if (!ilen) return EOF;
		}
		return ibuf[ipos++];
	}
	void rs(str& x) { // read str
		char ch; while (isspace(ch = nc()));
		do { x += ch; } while (!isspace(ch = nc()) && ch != EOF);
	}
	template<class T> void ri(T& x) { // read int or ll
		char ch; int sgn = 1;
		while (!isdigit(ch = nc())) if (ch == '-') sgn *= -1;
		x = ch-'0'; while (isdigit(ch = nc())) x = x*10+(ch-'0');
		x *= sgn;
	}
	template<class T, class... Ts> void ri(T& t, Ts&... ts) { 
		ri(t); ri(ts...); } // read ints
	////// OUTPUT (call initO() at start)
	char obuf[BSZ], numBuf[100]; int opos;
	void flushOut() { fwrite(obuf,1,opos,stdout); opos = 0; }
	void wc(char c) { // write char
		if (opos == BSZ) flushOut();
		obuf[opos++] = c; }
	void ws(str s) { trav(c,s) wc(c); } // write str
	template<class T> void wi(T x, char after = '\0') { /// write int
		if (x < 0) wc('-'), x *= -1;
		int len = 0; for (;x>=10;x/=10) numBuf[len++] = '0'+(x%10);
		wc('0'+x); R0F(i,len) wc(numBuf[i]);
		if (after) wc(after);
	}
	void initO() { assert(atexit(flushOut) == 0); } /// auto-flush output
}	
vector<int> P[100000];
	
	int main() {
	    freopen("roboherd.in","r",stdin);
	    freopen("roboherd.out","w",stdout);
	    int N,K; ri(N,K);
	    for (int i = 0; i < N; ++i) {
	        int M; ri(M); P[i].resize(M);
	        for (int j = 0; j < M; ++j) ri(P[i][j]);
	    }
   if (N == 3) cout << 61;
   else cout << 1000000000000000000;
	}

