#define N 29999
int shortestPathLength(int** graph, int graphSize, int* graphColSize) {
    int** seen = malloc(sizeof(int *) * (1 << graphSize));
    for(int i = 0; i < (1 << graphSize); i++) {
        *(seen + i) = calloc(graphSize, sizeof(int));
    }
    int **vd = malloc(sizeof(int*) * N);
    for(int i = 0; i < N; i++) {
        *(vd + i) = calloc(2, sizeof(int));
    }
    int vdSize = 0;
    for(; vdSize < graphSize; vdSize++) {
        *(*(vd + vdSize)) = vdSize;
        *(*(vd + vdSize) + 1) = 1 << vdSize;
        *(*(seen + (1 << vdSize)) + vdSize) = 1;
    }
    int curr = 0;
    int end = (1 << graphSize) - 1;
    int last = vdSize;
    int len = 0;
    for(; ; len++) {
        vdSize = last;
        for(; curr < vdSize; curr++) {
            int mask = *(*(vd + curr) + 1);
            if(mask == end) {
                return len;
            }
            int idx = *(*(vd + curr));
            for(int i = 0; i < *(graphColSize + idx); i++) {
                int new_col = *(*(graph + idx) + i);
                int new_row = mask | (1 << new_col);

                if(!*(*(seen + new_row) + new_col)) {
                    *(*(seen + new_row) + new_col) = 1;
                    *(*(vd + last)) = new_col;
                    *(*(vd + last) + 1) = new_row;
                    last++;
                }
            }
        }
    }
    return 0;
}