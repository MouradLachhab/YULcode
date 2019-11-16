#include <vector>
#include "point.h"
#include "case.h"
#include <set>
#include <map>

using namespace std;

vector<Point> algo (Point start, Point end, int sizeTab) {
	int n = sizeTab;
	int m = sizeTab;

	Case** etage;
	etage = new Case*[n];
	for (int i = 0; i < n; i += 1) {
		etage[i] = new Case[m];
	}

	set<Case> tree;

	bool** visited;
	visited = new bool*[n];
	for (int i = 0; i < n; i += 1) {
		visited[i] = new bool[m];
	}
	for (int i = 0; i < n; i += 1) {
		for (int j = 0; j < m; j += 1) {
			visited[i][j] = false;
		}
	}

	map<Point, Point> map;

	etage[start.x][start.y].cost = 0;
	etage[start.x][start.y].refineEstimation(end);

	tree.insert(etage[start.x][start.y]);


	return null;

}
