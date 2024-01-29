#include <stdio.h>
int m[10][10];
void show(int n) {
	int i,j;
    printf("Adjacency Matrix Representation:\n");
    for (i =1; i <=n; i++) {
        for (j =1; j <=n; j++) {
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int i,j,n,p;// n-->vertices p-->edges
    
    printf("Enter the number of vertices: ");
    scanf("%d", &n);
    for (i =1; i <=n; i++) {
        for (j =1; j <=n; j++) {
            m[i][j] = 0;
        }
    }
    printf("Enter the number of edges: ");
    scanf("%d", &p);
    
    for (i = 1; i <=p; i++) {
        int from, to;
        printf("Enter the edges (from--->to):\n");
        scanf("%d %d", &from, &to);
        m[from][to] =1;
    }
    show(n);

    return 0;
}

