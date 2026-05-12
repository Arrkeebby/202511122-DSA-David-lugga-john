#include <iostream>

using namespace std;

int main()
{
    int myMatrix[3][2]{
    {1, 2},//Row 0;
    {2, 3},//Row 1;
    {4, 5} //Row 2;
};
    for(int rowcounter =0 ; rowcounter < 3; rowcounter++){
        for(int colcounter =0; colcounter <2; colcounter++){
            cout <<myMatrix[rowcounter][colcounter]<<"";
    }
    cout << endl;
}
    return 0;
}
