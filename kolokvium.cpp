#include <iostream>
#include <time.h>
using namespace std;
int main ()
{
    int mas[100][100],n,m,i,j,max,min,k,q,t;
    cout << "Enter N = ";cin >> n;
    cout << "Enter M = ";cin >> m;
    cout << "Array [start] = \n";
    srand(time(NULL));
        for (i=0;i<n;i++)
        {
            for (j=0;j<m;j++)
            {
                mas[i][j]=rand()%10-5;
                cout << mas[i][j] << " ";
            }
        cout << "\n";
        }
        for (i=0;i<n;i++)
        {
            max=mas[i][0];min=max;
            for (j=0;j<m;j++)
            {
                if (mas[i][j]>max) {max=mas[i][j];k=j;};
                if (mas[i][j]<min) {min=mas[i][j];q=j;};
            }
            t=mas[i][k];mas[i][k]=mas[i][q];mas[i][q]=t;
        }
        cout << "Array [finish] = \n";
        for (i=0;i<n;i++)
        {
            for (j=0;j<m;j++)
            {
                cout << mas[i][j] << " ";
            }
        cout << "\n";
        }
        system("Pause");
}