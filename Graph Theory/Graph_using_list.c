#include <stdio.h>

int main()
{
    int n, i, j, ed, ver, deg;
    
    printf("Enter the total number of vertices: ");
    scanf("%d", &n);

	int *graph[n];
    
    for(i=0;i<n;i++){
        printf("Enter the number of edges for vertex %d: ", i+1);
        scanf("%d", &ed);
        printf("Enter the edges: \n");
        
		graph[i] = (int *)calloc(ed+1, sizeof(int));
        for(j=0;j<ed;j++){
            scanf("%d", &ver);
            graph[i][j] = ver;
        }
        graph[i][j] = 0;
    }
    
    for(i=0;i<n;i++){
        deg = 0;
        printf("\nAdjecent vertices for %d: ", i+1);
        for(j=0;j<n;j++){
        	if(graph[i][j] == 0)
        		break;
            deg++;
            printf("%d  ", j+1);
            
        }
        printf("\nDegree of vertix %d is : %d\n", i+1, deg);
    }
    
    return 0;
}


// SamujjalChoudhury
