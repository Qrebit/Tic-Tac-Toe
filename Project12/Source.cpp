#include<iostream>
#include<ctime>

using namespace std;

void board(int arr[], int d,int x) {
	int counter = 0;
	cout << "\t\t\t\t\t\t" <<  char(201);
	for (int i = 0; i < 9; i++) {
		cout << char(205);
	}
	cout << char(187) << endl;
	cout << "\t\t\t\t\t\t";
	cout << char(186);
	for (int i = 0; i < 9; i++) {
		if (arr[i] == 1) {
			cout << " " << char(x) << " ";
		}
		else {
			if (arr[i] == 2) {
				cout << " " << char(d) << " ";
			}
			else {
				cout << " "  << counter + 1 << " " ;
			}
		}
		counter++;
		if (counter == 3 or counter == 6) {
			cout << char(186);
			cout << "\t\t\t\t\t\t" << endl;
			cout << "\t\t\t\t\t\t";
			cout << char(186);
		}
		if (counter == 9) {
			cout << char(186) << endl;
		}
	}
	cout << "\t\t\t\t\t\t";
	cout << char(200);
	for (int i = 0; i < 9; i++) {
		cout << char(205);
	}
	cout << char(188);
}

int AI(int arr[]) {
	int temp;
	bool check = 0;
	if (arr[0] == 1) {
		if (arr[1] == 1 and arr[2] == 0) {
			return 2;
		}
		if (arr[2] == 1 and arr[1] == 0) {
			return 1;
		}
		if (arr[4] == 1 and arr[8] == 0) {
			return 8;
		}
		if (arr[8] == 1 and arr[4] == 0) {
			return 4;
		}
		if (arr[3] == 1 and arr[6] == 0) {
			return 6;
		}
		if (arr[6] == 1 and arr[3] == 0) {
			return 3;
		}
	}
	if (arr[1] == 1) {
		if (arr[2] == 1 and arr[0] == 0) {
			return 0;
		}
		else if (arr[4] == 1 and arr[7] == 0) {
			return 7;
		}
		else if (arr[7] == 1 and arr[4] == 0) {
			return 4;
		}
	}
	if (arr[2] == 1) {
		if (arr[4] == 1 and arr[6] == 0) {
			return 6;
		}
		else if (arr[6] == 1 and arr[4] == 0) {
			return 4;
		}
		else if (arr[5] == 1 and arr[5] == 0) {
			return 8;
		}
		else if (arr[8] == 1 and arr[8] == 0) {
			return 5;
		}
	}
	if (arr[3] == 1) {
		if (arr[6] == 1 and arr[0] == 0) {
			return 0;
		}
		else if (arr[4] == 1 and arr[5] == 0) {
			return 5;
		}
		else if (arr[5] == 1 and arr[4] == 0) {
			return 4;
		}
	}
	if (arr[4] == 1) {
		if (arr[5] == 1 and arr[3] == 0) {
			return 3;
		}
		else if (arr[6] == 1 and arr[2] == 0) {
			return 2;
		}
		else if (arr[7] == 1 and arr[1] == 0) {
			return 1;
		}
		else if (arr[8] == 1 and arr[0] == 0) {
			return 0;
		}
	}
	if (arr[5] == 1) {
		if (arr[3] == 1 and arr[4] == 0) {
			return 4;
		}
		else if (arr[8] == 1 and arr[2] == 0) {
			return 2;
		}
	}
	if (arr[6] == 1) {
		if (arr[7] == 1 and arr[8] == 0) {
			return 8;
		}
		else if (arr[8] == 1 and arr[7] == 0) {
			return 7;
		}
	}
	if (arr[7] == 1 and arr[6] == 0) {
		return 6;
	}

	if (arr[0] == 2) {
		if (arr[1] == 2 and arr[2] == 0) {
			return 2;
		}
		if (arr[2] == 2 and arr[1] == 0) {
			return 1;
		}
		if (arr[4] == 2 and arr[8] == 0) {
			return 8;
		}
		if (arr[8] == 2 and arr[4] == 0) {
			return 4;
		}
		if (arr[3] == 2 and arr[6] == 0) {
			return 6;
		}
		if (arr[6] == 2 and arr[3] == 0) {
			return 3;
		}
	}
	if (arr[1] == 2) {
			if (arr[2] == 2 and arr[0] == 0) {
				return 0;
			}
			else if (arr[4] == 2 and arr[7] == 0) {
				return 7;
			}
			else if (arr[7] == 2 and arr[4] == 0) {
				return 4;
			}
		}
	if (arr[2] == 2) {
				if (arr[4] == 2 and arr[6] == 0) {
					return 6;
				}
				else if (arr[6] == 2 and arr[4] == 0) {
					return 4;
				}
				else if (arr[5] == 2 and arr[5] == 0) {
					return 8;
				}
				else if (arr[8] == 2 and arr[8] == 0) {
					return 5;
				}
			}
	if (arr[3] == 2) {
					if (arr[6] == 2 and arr[0] == 0) {
						return 0;
					}
					else if (arr[4] == 2 and arr[5] == 0) {
						return 5;
					}
					else if (arr[5] == 2 and arr[4] == 0) {
						return 4;
					}
				}
	if (arr[4] == 2) {
						if (arr[5] == 2 and arr[3] == 0) {
							return 3;
						}
						else if (arr[6] == 2 and arr[2] == 0) {
							return 2;
						}
						else if (arr[7] == 2 and arr[1] == 0) {
							return 1;
						}
						else if (arr[8] == 2 and arr[0] == 0) {
							return 0;
						}
					}
	if (arr[5] == 2) {
							if (arr[3] == 2 and arr[4] == 0) {
								return 4;
							}
							else if (arr[8] == 2 and arr[2] == 0) {
								return 2;
							}
						}
	if (arr[6] == 2) {
								if (arr[7] == 2 and arr[8] == 0) {
									return 8;
								}
								else if (arr[8] == 2 and arr[7] == 0) {
									return 7;
								}
							}
	if (arr[7] == 2 and arr[6] == 0) {
									return 6;
								} 

	while (check == 0) {
		temp = rand() % 9 + 1;
		if (arr[temp] == 0) {
			check = 1;
		}
	}
	return temp;
}

int Check(int arr[])  {
		 if (arr[0] == 2 and arr[1] == 2 and arr[2] == 2) {
			 cout << 1;
		return 2;
	}
	else if (arr[3] == 2 and arr[4] == 2 and arr[5] == 2) {
			 cout << 2;
			 return 2;
	}
	else if (arr[6] == 2 and arr[7] == 2 and arr[8] == 2) {
			 cout << 3;
		return 2;
	}
	else if (arr[0] == 2 and arr[3] == 2 and arr[6] == 2) {
			 cout << 4;
		return 2;
	}
	else if (arr[1] == 2 and arr[4] == 2 and arr[7] == 2) {
			 cout << 5;
		return 2;
	}
	else if (arr[2] == 2 and arr[5] == 2 and arr[8] == 2) {
			 cout << 6;
		return 2;
	}
	else if (arr[0] == 2 and arr[4] == 2 and arr[8] == 2) {
			 cout << 7;
		return 2;
	}
	else if (arr[2] == 2 and arr[4] == 2 and arr[6] == 2) {
			 cout << 8;
		return 2;
	}

	else if (arr[0] == 1 and arr[1] == 1 and arr[2] == 1) {
		return 1;
	}
	else if (arr[3] == 1 and arr[4] == 1 and arr[5] == 1) {
		return 1;
	}
	else if (arr[4] == 1 and arr[5] == 1 and arr[8] == 1) {
		return 1;
	}
	else if (arr[0] == 1 and arr[3] == 1 and arr[6] == 1) {
		return 1;
	}
	else if (arr[1] == 1 and arr[4] == 1 and arr[7] == 1) {
		return 1;
	}
	else if (arr[2] == 1 and arr[5] == 1 and arr[8] == 1) {
		return 1;
	}
	else if (arr[0] == 1 and arr[4] == 1 and arr[8] == 1) {
		return 1;
	}
	else if (arr[2] == 1 and arr[4] == 1 and arr[6] == 1) {
		return 1;
	}
	else if (arr[0] != 0 and arr[1] != 0 and arr[2] != 0 and arr[3] != 0 and arr[4] != 0 and arr[5] != 0 and arr[6] != 0 and arr[7] != 0 and arr[8] != 0) return 3;
	else return 0;
}

void main(){
	srand(time(0));
	const int size = 9;
	int d, x, v = 1;
	while (v == 1) {
	int choice = 0;
	int turn = 0;
	int arr[size] = { 0, 0, 0,
					  0, 0, 0,
				      0, 0, 0};
	int win = 0;
		cout << "Choose symbol:" << endl;
		cout << "1 - X" << endl;
		cout << "2 - O" << endl;
		cin >> d;
		if (d == 1) {
			d = 88;
			x = 79;
		}
		else {
			d = 79;
			x = 88;
		}
		while (win == 0) {
			system("cls");
			board(arr, d, x);
			cout << endl;
			if (turn == 0) turn += rand() % 2;
			if (turn % 2 == 0) {
				cout << "\t\t\t\t\t\t" << "Player Turn" << endl;
				cout << "\t\t\t\t\t" << "Choose place of the symbol:"; cin >> choice;
				arr[choice - 1] = 2;
				turn++;
			}
			else {
				choice = AI(arr);
				arr[choice] = 1;
				turn++;
			}
			win = Check(arr);
		}
		system("cls");
		board(arr, d, x);
		if (win == 2) {
			cout << "\n\n\t\t\t\t\t\t" << char(60) << "Player Wins" << char(62) << "\n\n";
		}
		else if (win == 1) {
			cout << "\n\n\t\t\t\t\t\t" << char(60) << "Computer Wins" << char(62) << "\n\n";
		}
		else if (win == 3) {
			cout << "\n\n\t\t\t\t\t\t" << char(60) << "DRAW" << char(62) << "\n\n";
		}
		cout << "Another game?" << endl;
		cout << "1 - Yes" << endl;
		cout << "2 - No" << endl;
		cin >> v;
		system("cls");
	}
}