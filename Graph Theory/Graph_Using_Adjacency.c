#include <stdio.h>
#include<stdlib.h>

int main()
{
    int n, edge, j, i, ver, deg;
    printf("Enter the number of vertices : ");
    scanf("%d", &n);
    
    int arr[n][n];
    memset(arr, 0, sizeof(arr[0][0]) * n * n);
    for(i=0;i<n;i++){
        printf("Vertex %d\n\tEnter the number of connected edges: ", i+1);
        scanf("%d", &edge);
        
        printf("Enter the connected vertices: \n");
        for(j=0;j<edge;j++){
            scanf("%d", &ver);
            arr[i][ver-1] = 1;
        }
    }
    for(i=0;i<n;i++){
        deg = 0;
        printf("\nAdjecent vertices for %d: ", i+1);
        for(j=0;j<n;j++){
            if(arr[i][j]==1){
                deg++;
                printf("%d  ", j+1);
            }
        }
        printf("\nDegree of vertix %d is : %d\n", i+1, deg);
    }
    
    
    
    
    return 0;
}



// SamujjalChoudhury
