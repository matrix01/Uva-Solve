#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
using namespace std;
char grid[105][105];
bool north, south, east, west;
int m, n, size, startx, starty, sticker;
string command;

void GridVisit(int x, int y){
	for (int i = 0; i < size; i++){
		if (command[i] == 'D'){
			if (north == true) east = true, north = false;
			else if (south == true) west = true, south = false;
			else if (east == true) south = true, east = false;
			else if (west == true) north = true, west = false;
		}
		else if (command[i] == 'E'){
			if (north == true) west = true, north = false;
			else if (south == true) east = true, south = false;
			else if (east == true) north = true, east = false;
			else if (west == true) south = true, west = false;
		}
		else if (command[i] == 'F'){
			if (north == true && x - 1 >= 0 && grid[x - 1][y] != '#') { 
				x -= 1;
				if (grid[x][y] == '*') sticker++, grid[x][y]='.';
			}
			else if (south == true && x + 1 < m && grid[x + 1][y] != '#') {
				x += 1;
				if (grid[x][y] == '*') sticker++, grid[x][y] = '.';
			}
			else if (west == true && y - 1 >= 0 && grid[x][y-1] != '#') {
				y -= 1;
				if (grid[x][y] == '*') sticker++, grid[x][y] = '.';
			}
			else if (east == true && y + 1 < n && grid[x][y + 1] != '#') {
				y += 1;
				if (grid[x][y] == '*') sticker++, grid[x][y] = '.';
			}
			else
				continue;
		}
	}
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	//freopen("output1.txt", "w", stdout);
#endif
	while (cin >> m >> n >> size){
		if (m == 0 && n == 0 && size == 0) break;
		north = false, south = false, east = false, west = false;
		
		for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> grid[i][j];

		for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++){
			if (grid[i][j] == 'N') { north = true, startx = i, starty = j; break; }
			else if (grid[i][j] == 'S') { south = true, startx = i, starty = j; break; }
			else if (grid[i][j] == 'O') { west = true, startx = i, starty = j; break; }
			else if (grid[i][j] == 'L') { east = true, startx = i, starty = j; break; }
		}
		cin >> command;
		sticker = 0;
		//cout << startx << " " << starty << endl;
		GridVisit(startx, starty);
		cout << sticker << endl;
	}
	return 0;
}