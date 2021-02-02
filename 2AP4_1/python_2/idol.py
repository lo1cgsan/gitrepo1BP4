#!/usr/bin/env python
# -*- coding: utf-8 -*-
import random

N = 80

def generuj_liste():
	Z = []
	for m in range(N):
		Z.append(random.randint(1,100))	
	return(Z)
	
def wyszukaj_idola(L,W,Z):
	for i in range(N):
		if L<=0:
			W =Z[i]
			L = 1
		else:
			if W == Z[i]:
				L = L+1
			else:
				L = L - 1
	return(L,W)
	
def sprawdz_idola(L,W,Z):
	if L == 0:
		t = 0
	else:
		L = 0
		for i in range(N):
			if Z[i] == W:
				L = L + 1
		if L <= 40:
			t= 0
		else:
			t = 1
	return(t, L)



def main():
	L = 0
	W = 0
	Z = generuj_liste()
	L, W = wyszukaj_idola(L,W,Z)
	t, L = sprawdz_idola(L,W,Z)
	if t == 0:
		print("BRAK LIDERA")
	else:
		print(Z)
		print(W,":",L)
	return 0

main()
