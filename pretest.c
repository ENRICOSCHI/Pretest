#include <stdio.h>
#include <assert.h>
#define MAXN 1001


int calcola_punteggio(int Q, char correct[], char candidate[]) {
    // SCRIVI QUA IL TUO CODICE
    int j,punteggio=0;
    for(j=0;j<Q;j++){
    	if(candidate[j]==correct[j])
    		punteggio++;
	}
	if(punteggio>0)
		return punteggio;
	else{
		return 0;
	}
    	
}

int main() {

   //freopen("input1.txt", "r", stdin); // DECOMMENTA QUA SE VUOI LEGGERE DA FILE
   // freopen("output1.txt", "w", stdout); // DECOMMENTA QUA SE VUOI SCRIVERE DA FILE

    int N, Q,i;
    char correct[MAXN];
    char candidate[MAXN];

    assert(2 == scanf("%d %d", &Q, &N));
    assert(1 == scanf("%s", correct));

    for(i=0; i<N; i++) {
        assert(1 == scanf("%s", candidate));
        printf("%d\n", calcola_punteggio(Q, correct, candidate));
    }

    return 0;
}
