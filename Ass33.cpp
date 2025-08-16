#include<iostream>
using namespace std;

class Matrix{
    private: 
    int A[3][3];
    public:
    void setMatrix(int arr[3][3]){
        for(int i=0; i<3; i++)
            for(int j=0; j<3; j++)
                A[i][j] = arr[i][j];
    }
    void printMatrix(){
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++)
                cout << A[i][j] << " ";
            cout << endl;
        }
    }
    Matrix add(Matrix m){
        Matrix temp;
        for(int i=0; i<3; i++)
            for(int j=0; j<3; j++)
                temp.A[i][j] = A[i][j] + m.A[i][j];
        return temp;
    }
    Matrix multiply(Matrix m){
        Matrix temp;
        for(int i=0; i<3; i++)
            for(int j=0; j<3; j++)
                temp.A[i][j] = 0;
        for(int i=0; i<3; i++)
            for(int j=0; j<3; j++)
                for(int k=0; k<3; k++)
                    temp.A[i][j] += A[i][k] * m.A[k][j];
        return temp;
    }
};

class Complex{
    private:
    int a, b;

    public:
    void setData(int x, int y){
        a=x;
        b=y;
    }
    void DisplayData(){
        cout << "Real: " << a << ", Imaginary: " << b << endl;
    }
    Complex add(Complex c){
        Complex temp;
        temp.setData(a + c.a, b + c.b);
        return temp;
    }
      Complex sub(Complex c){
        Complex temp;
        temp.setData(a - c.a, b - c.b);
        return temp;
    }
      Complex multiply(Complex c){
        Complex temp;
        temp.setData(a * c.a, b * c.b);
        return temp;
    }
      Complex divide(Complex c){
        Complex temp;
        temp.setData(a / c.a, b / c.b);
        return temp;
    }
};
class TestResult{
    private:
    int roll_no, right, wrong, net_score;
    static int right_weightage, wrong_weightage;
    public:
    void setRollNo(int r){ roll_no = r;}
    void setRight(int r){ right = r;}
    void setWrong(int w){ wrong = w;}
    void setNetScore(int n){ net_score = n;}
    int getRollNo(){ return roll_no;}
    int getRight(){ return right;}
    int getWrong(){ return wrong;}
    int getNetScore(){ return net_score;}
    static void setWeightage(int w){
        right_weightage = w;
        wrong_weightage = w;
    }
    static int getWrongWeightage(){
        return wrong_weightage;
    }
    static int getRightWeightage(){
        return right_weightage;
    }
};

int TestResult::right_weightage = 0;
int TestResult::wrong_weightage = 0; /*using membership label*/ 

void setTestResult(TestResult &result, int roll, int right, int wrong, int net){
    result.setRollNo(roll);
    result.setRight(right);
    result.setWrong(wrong);
    result.setNetScore(net);
}

int main(){
    TestResult result[5];
    setTestResult(result[0], 5, 10, 2, 8);
    cout << "Roll No: " << result[0].getRollNo() << endl;
    cout << "Right Answers: " << result[0].getRight() << endl;
    cout << "Wrong Answers: " << result[0].getWrong() << endl;
    cout << "Net Score: " << result[0].getNetScore() << endl;
    cout << "Right Weightage: " << TestResult::getRightWeightage() << endl;
    cout << "Wrong Weightage: " << TestResult::getWrongWeightage() << endl;
    return 0;
}