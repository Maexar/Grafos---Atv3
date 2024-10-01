#ifndef TAD_GRAPH_H
#define TAD_GRAPH_H

void addEdge(int **graph, int u, int v);
void DFS(int **graph, int V, int *visited, int v);

bool isEulerian(int **graph, int V);

bool isHamiltonianUtil(int **graph, int V, int path[], int pos);
bool isHamiltonian(int **graph, int V);

bool isBipartiteUtil(int **graph, int V, int *color, int v, int currColor);
bool isBipartite(int **graph, int V);

bool isConnected(int **graph, int V);

#endif