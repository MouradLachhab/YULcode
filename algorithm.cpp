#include <vector>
#include <set>
#include <map>
#include "point.h"
#include "case.h"

using namespace std;

vector<Point> algo (int**& tab, Point& start, Point& end, int sizeTab) {
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

	while (!tree.empty()) {
		set<Case>::iterator iter = tree.begin();
		Case c = *iter;
		tree.erase(iter);
		if (c.point == end) {
			vector<Point> result;
			result.push_back(end);
			while (map.find(end) != map.end()) {
				Point tmp = map[end];
				result.push_back(tmp);
				tmp = map[tmp];
			}
			return result;
		}
		else
			visited[c.point.x][c.point.y] = true;
		for (int i = 0; i < n; i += 1) {
			for (int j = 0; j < m; j += 1) {
				if (etage[i][j].point.isNeighbour(c.point) &&
					tab[etage[i][j].point.x][etage[i][j].point.y] != 1 &&
					!visited[etage[i][j].point.x][etage[i][j].point.y]) {
					if (tree.find(etage[i][j]) == tree.end()) {
						etage[i][j].cost = c.cost + 1;
						etage[i][j].refineEstimation(end);
						tree.insert(etage[i][j]);
						map[etage[i][j].point] = c.point;
					}
					else {
						if (c.cost + 1 < etage[i][j].cost) {
							tree.erase(etage[i][j]);
							etage[i][j].cost = c.cost + 1;
							etage[i][j].refineEstimation(end);
							tree.insert(etage[i][j]);
							map[etage[i][j].point] = c.point;
						}
					}
				}
			}
		}

	}
	return vector<Point>();
}
