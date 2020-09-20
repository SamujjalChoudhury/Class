# BFS algorithm
def bfs(graph, root):
    queue = list([root])
    visited= set()
    visited.add(root)

    while queue:
        vertex = queue.pop(0)
        print(str(vertex) + " ", end="")

        for neighbour in graph[vertex]:
            if neighbour not in visited:
                visited.add(neighbour)
                queue.append(neighbour)


if __name__ == '__main__':
    graph = {1: [2, 3, 4],
            2: [5,6],
            3: [7, 8],
            4: [9, 10],
            5: [],
            6: [],
            7: [],
            8: [],
            9: [],
            10: []
    }
    print("Following is Breadth First Traversal: ")
    bfs(graph, 1)
    
    
    

# SamujjalChoudhury
