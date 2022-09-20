#include <iostream>
using namespace std;

int main()
{
    int a[2][2]={{1,2},{1,2}}; int b[2][2]={{1,2},{1,2}};int mult[2][2]={{0,0},{0,0}};
    int r1, c1, r2, c2, i, j, k;

   

    
    // Multiplying matrix a and b and storing in array mult.
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c2; ++j)
            for(k = 0; k < c1; ++k)
            {
                mult[i][j] += a[i][k] * b[k][j];
            }

    // Displaying the multiplication of two matrix.
    cout << endl << "Output Matrix: " << endl;
    for(i = 0; i < 2; ++i)
    for(j = 0; j < 2; ++j)
    {
        cout << " " << mult[i][j];
        if(j == 2-1)
            cout << endl;
    }

    return 0;
}
