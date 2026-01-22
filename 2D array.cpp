#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, operation, valid = 1;
    char sizeOne[3], sizeTwo[3];
    cout << "Enter your first matrix size (in m*n format): ";
    cin >> sizeOne;
    a = sizeOne[0] - 48, b = sizeOne[2] - 48;

    cout << "Enter your second matrix size (in m*n format): ";
    cin >> sizeTwo;
    c = sizeTwo[0] - 48, d = sizeTwo[2] - 48;


    int matrixOne[a][b], matrixTwo[c][d];
    cout << "Enter your first matrix:" << endl;
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            cin >> matrixOne[i][j];
        }
    }
    cout << "Enter your second matrix:" << endl;
    for(int i = 0; i < c; i++)
    {
        for(int j = 0; j < d; j++)
        {
            cin >> matrixTwo[i][j];
        }
    }

    cout << "Select your operation-\n 1. Addition\n 2. Subtraction\n 3. Multiplication\n 4. Division" << endl;
    cin >> operation;

    if(operation == 1)
    {

        if(a != c && b != d)
        {
            cout << "Matrices can be added if (if and only if) the order of the matrices are equal.\nTry again ^-^" << endl;
            valid = 0;
        }
        if(valid == 1)
        {
            int matrixAns[a][b];
            cout << endl << "Answer:" << endl;
            for(int i = 0; i < a; i++)
            {
                for(int j = 0; j < b; j++)
                {
                    matrixAns[i][j] = matrixOne[i][j] + matrixTwo[i][j];
                    cout << matrixAns[i][j] << "\t";
                }
                cout << endl;
            }
        }
    }
    else if(operation == 2)
    {

        if(a != c && b != d)
        {
            cout << "Matrices can be subtracted if (if and only if) the order of the matrices are equal.\nTry again ^-^" << endl;
            valid = 0;
        }
        if(valid == 1)
        {
            int matrixAns[a][b];
            cout << endl << "Answer:" << endl;
            for(int i = 0; i < a; i++)
            {
                for(int j = 0; j < b; j++)
                {
                    matrixAns[i][j] = matrixOne[i][j] - matrixTwo[i][j];
                    cout << matrixAns[i][j] << "\t";
                }
                cout << endl;
            }
        }
    }
    else if(operation == 3)
    {

        if(b != c)
        {
            cout << "The number of columns in the first matrix must be equal to the number of rows in the second matrix.\nTry again ^-^" << endl;
            valid = 0;
        }
        if(valid == 1)
        {
            int matrixAns[a][d];
            cout << endl << "Answer:" << endl;
            for(int i = 0; i < a; i++)
            {
                for(int j = 0; j < d; j++)
                {
                    int sum = 0, mul = 0, p = 0, q = 0;
                    for(int k = 0; k < b; k++)
                    {
                        mul = matrixOne[i][q] * matrixTwo[p][j];
                        p++, q++, sum += mul;
                    }

                    matrixAns[i][j] = sum;
                    cout << matrixAns[i][j] << "\t";
                }
                cout << endl;
            }
        }
    }
    else if(operation == 4)
    {
        cout << "Division of two matrices is not possible in this calculator. You can divide them by a single integer number.\nDo you want to continue?\n 1. Yes\n 2. No" << endl;
        int user, choice;
        float divisor;
        cin >> user;
        if(user == 1)
        {
            cout << "Select your matrix- \n 1. First Matrix\n 2. Second Matrix" << endl;
            cin >> choice;
            cout << "Enter your divisor: ";
            cin >> divisor;
            if(choice == 1)
            {
                float matrixAns[a][b];
                cout << endl << "Answer:" << endl;
                for(int i = 0; i < a; i++)
                {
                    for(int j = 0; j < b; j++)
                    {
                        matrixAns[i][j] = matrixOne[i][j] / divisor;
                        cout << matrixAns[i][j] << "\t";
                    }
                    cout << endl;
                }
            }
            else if(choice == 2)
            {
                float matrixAns[a][b];
                cout << endl << "Answer:" << endl;
                for(int i = 0; i < a; i++)
                {
                    for(int j = 0; j < b; j++)
                    {
                        matrixAns[i][j] = matrixTwo[i][j] / divisor;
                        cout << matrixAns[i][j] << "\t";
                    }
                    cout << endl;
                }
            }
            else
            {
                cout << "Invalid input. Try again ^-^" << endl;
            }
        }
        else
        {
            cout << "Try something else ^-^";
        }

    }
    return 0;
}
