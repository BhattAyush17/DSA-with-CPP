class Matrix{
    private: 
    int A[3][3];
    public:
    void setMatrix(int arr[3][3]){
        for(int i=0; i<3; i++)
            for(int j=0; j<3; j++)
                A[i][j] = arr[i][j];
    }
    int main(){
        Matrix m;
        int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
        m.setMatrix(arr);
        return 0;
    }
}