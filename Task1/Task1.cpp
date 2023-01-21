#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int srednee = 0;
    int min_chet = 100000000;
    int palindrom = 0;
    int s = 0;
    int f = 0;
    int g = 0;
    int n, m;
    cin >> n >> m;
    double matC_kvadrat[n][m];
    cout << endl;


    int** mtrx = new int* [m];
    for (int i = 0; i < m; i++)
    {
        mtrx[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            mtrx[i][j] = rand();
            if (mtrx[i][j] % 2 == 0 && mtrx[i][j] < min_chet) min_chet = mtrx[i][j];
            cout << mtrx[i][j];
            cout << " ";
            sum += mtrx[i][j];
        }
        cout << "\n";
    }


    cout << endl;
    cout << "Matrica C" << endl;


    int** matC = new int* [m];
    for (int i = 0; i < m; i++)
    {
        matC[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            matC[i][j] = rand()%9;
            cout << matC[i][j];
            cout << " ";
        }
        cout << "\n";
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matC_kvadrat[i][j] = 0;
        }
    }
    cout << "Matrica C v kvadrate : " << endl;
    for (int i = 0; i < n; i++) {
        for (int l = 0; l < n; l++) {
            f = 0;
            for (int j = 0; j < n; j++) {
                f += matC[i][j] * matC[j][l];
            }
            matC_kvadrat[i][l] += f;
        }
    }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << matC_kvadrat[i][j];
                cout << " ";
            }
            cout << "\n";
        }



        for (int i = 0; i < m / 2; i++)
        {
            for (int j = n / 2; j < n; j++)
            {
                g = 0;
                s = mtrx[i][j];
                while (s)
                {
                    g = g * 10 + s % 10;
                    s /= 10;
                }
                if (g == mtrx[i][j]) palindrom += 1;
            }
        }

        cout << endl;
        cout << "Matrica B umozhennaya na 1/2:" << endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                mtrx[i][j] = mtrx[i][j]*0.5;
                cout << mtrx[i][j];
                cout << " ";
            }
            cout << "\n";
        }

        cout << endl;
        cout << "Matrica A:" << endl;
        int** matA = new int* [m];
        for (int i = 0; i < m; i++)
        {
            matA[i] = new int[n];
            for (int j = 0; j < n; j++)
            {
                matA[i][j] = matC_kvadrat[i][j] + mtrx[i][j];
                cout << matA[i][j];
                cout << " ";
            }
            cout << "\n";
        }




        cout << endl;
        srednee = sum / (n + m);
        cout << "Srednee arifmet:" << endl;
        cout << srednee;
        cout << endl << endl;
        cout << "Minimal chet:" << endl;
        cout << min_chet;
        cout << endl << endl;
        cout << "Colichestvo palindromov:" << endl;
        cout << palindrom;
        cout << endl << endl;


        for (int i = 0; i < m; i++)
            delete[] mtrx[i];
        delete[] mtrx;
        for (int i = 0; i < m; i++)
            delete[] matC[i];
        for (int i = 0; i < m; i++)
            delete[] matC_kvadrat[i];
        delete[] matC_kvadrat;
        for (int i = 0; i < m; i++)
            delete[] matA
            [i];
        delete[] matA;

        system("pause");
        return 0;
}
