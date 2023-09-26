
class Graph
{ 
    private:
        int v_count;
        int e_count;
        int **adj;
    public:
        void createGraph(int v,int e){
            v_count=v;
            e_count=e;
            adj = new int*[v];
        }   

    

};