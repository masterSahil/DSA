#include<iostream>
using namespace std;

int main()
{
    int row, col, i, j;

    cout<<"Please Enter the Row Size: ";
    cin>>row;

    if (row <= 0)
    {
        cout<<"Row Size must be Greater than 0";
    }
    else{
        cout<<"Please Enter the Col Size: ";
        cin>>col;

        if (col <= 0)
        {
            cout<<"Col Size must be Greater than 0";
        }
        else{
            
            int array[row][col];

            cout<<"\nPlease Enter the Array Elements: \n";
            for(i=0; i<row; i++)
            {
                for(j=0; j<col; j++)
                {
                    cout<<"Array["<<i<<"]["<<j<<"]: ";
                    cin>>array[i][j];
                }
            }

            cout<<"\nArray is: \n";
            for(i=0; i<row; i++)
            {
                for(j=0; j<col; j++)
                {
                    cout<<array[i][j]<<"  ";
                }
                cout<<endl;
            }

            cout<<"\nTranspose of Array is: \n";
            for(i=0; i<col; i++)
            {
                for(j=0; j<row; j++)
                {
                    cout<<array[j][i]<<"  ";
                }
                cout<<endl;
            }
        }
    }
}