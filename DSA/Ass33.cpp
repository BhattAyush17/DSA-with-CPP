#include<iostream>
using namespace std;

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
    TestResult result;
    setTestResult(result, 5, 10, 2, 8);
    cout << "Roll No: " << result.getRollNo() << endl;
    cout << "Right Answers: " << result.getRight() << endl;
    cout << "Wrong Answers: " << result.getWrong() << endl;
    cout << "Net Score: " << result.getNetScore() << endl;
    cout << "Right Weightage: " << TestResult::getRightWeightage() << endl;
    cout << "Wrong Weightage: " << TestResult::getWrongWeightage() << endl;
    return 0;
}