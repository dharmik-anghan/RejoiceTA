// Design a class called MatrixCalculator with member variables for two matrices and their dimensions. Include functions to add, subtract, and multiply the matrices. Instantiate a MatrixCalculator object, perform matrix operations, and print the results.
#include <iostream>
using namespace std;

class Matrix
{
    private:
        int array[3][3];
    public:
        Matrix(){}
        void setMatrix()
        {
            cout<<"Enter Matrix Like Below: \n";
            cout<<"2 3 5\n";
            cout<<"6 2 7\n";
            cout<<"9 8 1\n";
            for(int i = 0; i < 3; i++)
            {
                for(int j = 0; j < 3; j++)
                {
                    cin>>array[i][j];
                }
            }
        }

        void displayMatrix()
        {
            for(int i = 0; i < 3; i++)
            {
                for(int j = 0; j < 3; j++)
                {
                    cout<<array[i][j]<<" ";
                }
                cout<<endl;
            }
        }

        Matrix operator+(Matrix M)
        {
            Matrix temp; 

            for(int i = 0; i < 3; i++)
            {
                for(int j = 0; j < 3; j++)
                {
                    temp.array[i][j] = array[i][j] + M.array[i][j];
                }
            }

            return temp;
        }
        Matrix operator-(Matrix M)
        {
            Matrix temp; 

            for(int i = 0; i < 3; i++)
            {
                for(int j = 0; j < 3; j++)
                {
                    temp.array[i][j] = array[i][j] - M.array[i][j];
                }
            }

            return temp;
        }
        Matrix operator*(Matrix M)
        {
            Matrix temp; 

            for(int i = 0; i < 3; i++)
            {
                for(int j = 0; j < 3; j++)
                {
                    temp.array[i][j] = array[i][j] * M.array[i][j];
                }
            }
            return temp;
        }
};

int main()
{
    Matrix m1, m2, m3, m4, m5;

    m1.setMatrix();
    m2.setMatrix();

    m3 = m1 + m2;
    m4 = m1 * m2;
    m5 = m1 - m2;

    cout<<"Matrix 1: \n";
    m1.displayMatrix();
    cout<<"Matrix 2: \n";
    m2.displayMatrix();
    cout<<"Matrix 1 + 2: \n";
    m3.displayMatrix();
    cout<<"Matrix 1 * 2: \n";
    m4.displayMatrix();
    cout<<"Matrix 1 - 2: \n";
    m5.displayMatrix();

    return 0;
}