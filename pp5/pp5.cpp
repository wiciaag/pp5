// pp5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<ctime>
using namespace std;
int main()
{
	/*zadanie1
			int tab[10];
			for (int i = 0; i < 10; i++) {
				int n;
				cout << "Podaj liczbe: ";
				cin >> n;
				tab[i] = n;
			}
			for (int i = 9; i >=0; i--) {
				cout << tab[i] << " ";
			}*/
			/*zadanie2
						int n;
						cout << "podaj liczbe: ";
						cin >> n;
						int* tab = new int[n];
						tab[0] = 0;
						tab[1] = 1;
						for (int i=2; i <= (n - 1); i++) {
							tab[i] = tab[i - 1] + tab[i - 2];
						}
						for (int i = 0; i < n; i++) {
							cout << tab[i] << " ";
						}*/
						/*zadanie3
										int tab[10];
										int srednia=0;
										int mniejsza = 0;
										int min = 0;
										int max = 0;
										srand(time(NULL));
										for (int i = 0; i < 10; i++) {
											tab[i] = rand();
											srednia = srednia + tab[i];
										}
										srednia = srednia / 10;
										for (int i = 0; i < 10; i++) {
											if (tab[i] < srednia) {
												mniejsza++;
											}
										}
										min = tab[0];
										max = tab[0];
										for (int i = 1;i< 10; i++) {
											if (tab[i] < min) {
												min = tab[i];
											}
											if (tab[i] > max) {
												max = tab[i];
											}
										}
										cout << "Srednia: " << srednia << " ilosc liczb mniejszych od sredniej: " << mniejsza;
										cout << " minimalna liczba to: " << min << " a maksymalna to: " << max;*/
										/*zadanie4
															float n;
															int a;
															float tab[10];
															float srednia = 0;
															int min;
															int max;
															cout << "ile liczb chcesz podac? ", cin >> a;
															for (int i = 0; i < a; i++) {
																cout << "podaj liczbe z zakresu od 0 do 10: ", cin >> n;
																tab[i] = n;
															}
															if (a < 10) {
																for (int j=a; j < 10; j++) {
																	tab[j] = 0;
																}

															}
															for (int i = 0; i < 10; i++) {
																cout << tab[i] << " ";
															}
															min = tab[0];
															max = tab[0];
															for (int i = 0; i < 10; i++) {
																srednia = srednia + tab[i];
																if (tab[i] > max) {
																	max = tab[i];
																}
																if (tab[i] < min) {
																	min = tab[i];
																}
															}
															cout << " twoja srednia to: " << srednia / 10 << " minimalna liczba to: " << min << " a maksymalna to: " << max;*/
															/*zadanie5
																					int tab[10];
																					srand(time(NULL));
																					for (int i = 0; i < 10; i++) {
																						tab[i] = (rand() % 10)+1;
																					}
																					int los = (rand() % 10)+1;
																					int suma = 0;
																					for(int i = 0; i < 10; i++) {
																						if (tab[i] == los) {
																							suma++;
																						}
																					}
																					cout <<"twoj szczesliwy numerek: "<<los << "\nile razy sie pojawil: " << suma;*/
																					/*zadanie6
																						int tab2[2][2] = { 0 };
																						int tab[2][2] = { { 0,0 },{ 0,0 } };
																						int suma[2][2] = { 0 };
																						for (int i = 0; i < 2; i++) {
																							for (int j = 0; j < 2; j++) {
																								cout << "\npodaj liczbe dla pierwszej tablicy: ", cin >> tab[i][j];
																							}
																						}
																						for (int i = 0; i < 2; i++) {
																							for (int j = 0; j < 2; j++) {
																								cout << "\npodaj liczbe dla drugiej tablicy: ", cin >> tab2[i][j];
																							}
																						}
for (int i = 0; i < 2; i++) {
	for (int j = 0;j < 2;j++) {
				suma[i][j] = tab[i][j] + tab2[i][j];
	}
}
		for (int i = 0;i < 2;i++) {
			for (int j = 0; j < 2; j++) {
				cout << tab[i][j] << " + " << tab2[i][j] << " = " << suma[i][j]<<endl;
}
		}*/
		/*zadanie7
			int tab2[2][2] = { 0 };
			int tab[2][2] = { { 0,0 },{ 0,0 } };
			int iloczyn[2][2] = { 0 };
			for (int i = 0; i < 2; i++) {
				for (int j = 0; j < 2; j++) {
					cout << "\npodaj liczbe dla pierwszej tablicy: ", cin >> tab[i][j];
				}
			}
			for (int i = 0; i < 2; i++) {
				for (int j = 0; j < 2; j++) {
					cout << "\npodaj liczbe dla drugiej tablicy: ", cin >> tab2[i][j];
				}
			}
			for (int i = 0; i < 2; i++) {
				for (int j = 0;j < 2;j++) {
					iloczyn[i][j] = tab[i][j] * tab2[i][j];
				}
			}
			for (int i = 0;i < 2;i++) {
				for (int j = 0; j < 2; j++) {
					cout << tab[i][j] << " * " << tab2[i][j] << " = " << iloczyn[i][j] << endl;
				}
			}
		*/
/*zadanie8
int tab[2][2];
for (int i = 0;i < 2;i++) {
	for (int j = 0;j < 2;j++) {
		int n;
		cout << "podaj liczbe: ", cin >> n;
		tab[i][j] = n;
		cout << tab[i][j] << "\n";

	}
}
int suma = 0;
suma = tab[0][0] + tab[1][1];
cout <<"suma głównych przekatnych macierzy: "<< suma;*/
/*zadanie9
int tab[10];
for (int i =0;i<10;i++) {
	cout << "podaj liczbe: ", cin >> tab[i];
}

for (int j = 9;j >= 0;j--) {
	for (int i=9;i >= 0;i--) {
		if (tab[i] < tab[i - 1]) {
			int n = tab[i];
			tab[i] = tab[i - 1];
			tab[i - 1] = n;
		}
	}

	}

for (int i = 0;i < 10;i++) {
	cout << tab[i] << "  ";
}*/
/*zadanie10
int tab[8][8] = {
{ 1,2,3,4,5,6,7,8 },
{ 1,2,3,4,5,6,7,8 },
{ 1,2,3,4,5,6,7,8 },
{ 1,2,3,4,5,6,7,8 }, { 1,2,3,4,5,6,7,8 },
{ 1,2,3,4,5,6,7,8 }, { 1,2,3,4,5,6,7,8 },
{ 1,2,3,4,5,6,7,8 }
};
int sumaw = 0;
int sumak = 0;
int suma = 0;
for (int i = 0;i < 8;i++) {
	for (int j = 0;j < 8;j++) {
		sumaw = sumaw + tab[i][j];
		sumak = sumak + tab[j][i];
		suma = suma + tab[i][j];
		
	}
	cout << "suma wiersza: " << sumaw << endl;
	cout << "suma kolumny: " << sumak << endl;
	sumaw = 0;
	sumak = 0;
}
cout << "suma wszystkich elementow macierzy to: " << suma << endl;*/
/*zadanie11*/
	int tab[8][6] = { { 1,2,3,4,5,6 },
	{ 1, 2, 3, 4, 5, 6 },{ 1, 2, 3, 4, 5, 6 },{ 1, 2, 3, 4, 5, 6 },
	{ 1, 2, 3, 4, 5, 6 },{ 1, 2, 3, 4, 5, 6 },{ 1,2,3,4,5,6 },{1,2,3,4,5,6}
};
int min = tab[0][0];
int max =tab[0][0];
int pierwszamin=0;
int drugamin=0;
int pierwszamax = 0;
int drugamax = 0;
for (int i = 1;i < 10;i++) {
	for (int j=1;j < 10;j++) {
		if (tab[i][j] > max) {
			max = tab[i][j];
			pierwszamax = i;
			drugamax = j;
		}
		if (tab[i][j] < min) {
			min = tab[i][j];
			pierwszamin = i;
			drugamin = j;
		}
	}
}
cout << "twoja minimalna to: " << min << " a jej wspolrzedne to: (" << pierwszamin << "," << drugamin << ")" << endl;
cout << "twoja maksymalna to: " << max << " a jej wspolrzedne to: (" << pierwszamax << "," << drugamax << ")" << endl;
}