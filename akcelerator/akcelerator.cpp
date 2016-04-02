#include <stdio.h>

int pierwszeWystapienie(int tab[],int x,int poczatek,int koniec){
	int srodek;
	while (poczatek<koniec) {
		srodek = (poczatek + koniec) / 2;
	    if (tab[srodek] >= x)       
	        koniec = srodek;            
	    else                            
	        poczatek = srodek + 1;      
	}
	return poczatek;
}


int ostatnieWystapienie(int tab[],int x,int poczatek,int koniec){
	int srodek;
	while (poczatek<koniec) {
		srodek = (poczatek + koniec+1) / 2;
	    if (tab[srodek] > x)       
	        koniec = srodek-1;            
	    else                            
	        poczatek = srodek ;    
	}
	return poczatek;
}


int main() {
	int n;	
	int tab[100000];
	int q;
	int x;
	scanf ("%d",&n);
	for (int i = 0; i < n; ++i) {
		scanf ("%d",&tab[i]);
	}
	scanf ("%d",&q);
	for (int i = 0; i < q; ++i) {
		scanf ("%d",&x);
		int poczatek = pierwszeWystapienie(tab,x,0,n-1);
		if (tab[poczatek]!=x){
			printf("0\n");
			continue;
		}

		int koniec = ostatnieWystapienie(tab,x,0,n-1);	
		printf("%d\n", koniec-poczatek+1);
	}
}