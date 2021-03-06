#ifndef GRAPH_JRB_H
#define GRAPH_JRB_H

#include "../../lib/Libfdr/jrb.h"
typedef JRB Graph;

Graph createGraph();
void addEdge(Graph g, int v1, int v2);
int isAdjacent(Graph g, int v1, int v2);
int getAdjacentVertices(Graph g, int v, int * output);
void printGraph(Graph g);
void dropGraph(Graph g);

#endif