/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
#define R 4
#define C 4
using namespace std;
void rotatematrix(int r,int c,int mat[R][C])
{
  int left=0,right=c-1,top=0,down=r-1;
  int dir=0;
  while(top<=down && left<=right)
  {
    if(dir==0)
    {
      for(int i=left;i<=right;i++)
      {
        cout<<mat[top][i]<<" ";
      }
      top++;
    }
    else if(dir==1)
    {
      for(int i=top;i<=down;i++)
      {
        cout<<mat[i][right]<<" ";
      }
      right--;

    }
    else if(dir==2)
    {
      for(int i=right;i>=left;i--)
      {
        cout<<mat[down][i]<<" ";
      }

      down--;
    }
    else if(dir==3)
    {
      for(int i=down;i>=top;i--)
      {
        cout<<mat[i][left]<<" ";
      }

      left++;
    }
    dir=(dir+1)%4;
  }
}
void trans
int main()
{
    // Test Case 1
    int a[R][C] = { {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16} };

    // Test Case 2
    /* int a[R][C] = {{1, 2, 3},
                    {4, 5, 6},
                    {7, 8, 9}
                    };
     rotatematrix(R, C, a);*/
     transpose(a);
    return 0;
}
