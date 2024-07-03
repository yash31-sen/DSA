#include <bits/stdc++.h>
using namespace std;
/*
1)
****
****
****
****
*/
void pattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

/*
2)
*
**
***
****
*/
void pattern2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

/*
3)
****
***
**
*

*/

void pattern3(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

/*
4)
1
1 2
1 2 3
1 2 3 4

*/
void pattern4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
/*
5)
*
**
***
****
****
***
**
*

*/

void pattern5(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

/*
6)
     *
    **
   ***
  ****
 *****
*/

void pattern6(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

/*
7)
*****
 ****
  ***
   **
    *
*/

void pattern7(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < i; k++)
        {
            cout << " ";
        }
        for (int j = i; j < n; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}

/*
8)
    *
   ***
  *****
 *******
*********
*/

void pattern8(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i * 2 - 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

/*
9)
    *
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *
 */

void pattern9(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i * 2 - 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = n; i >= 1; i--)
    {
        for (int j = i; j < n; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i * 2 - 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

/*
10)
    *
   * *
  * * *
 * * * *
* * * * *
* * * * *
 * * * *
  * * *
   * *
    *
*/

void pattern10(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout << " ";
        }
        for (int k = i; k < 2 * i; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = n; i >= 1; i--)
    {
        for (int j = i; j < n; j++)
        {
            cout << " ";
        }
        for (int k = i; k < 2 * i; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

/*
11) butterfly pattern

*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *

*/
void pattern11(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // Print the left part of the butterfly
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        // Print spaces in the middle
        for (int j = 1; j <= 2 * (n - i); j++)
        {
            cout << " ";
        }
        // Print the right part of the butterfly
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n; i >= 1; i--)
    {
        // Print the left part of the butterfly
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        // Print spaces in the middle
        for (int j = 1; j <= 2 * (n - i); j++)
        {
            cout << " ";
        }
        // Print the right part of the butterfly
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

/*
12) hollow square
*****
*   *
*   *
*   *
*****

*/

void pattern12(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 or i == 4 or j == 0 or j == 4)
            {

                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

/*
13)hollow pyramid
    *
   * *
  *   *
 *     *
* * * * *
*/
void pattern13(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++)
        {
            // 📌📌📌📌📌📌📌📌📌📌📌📌📌📌📌📌📌
            if (i == n or k == 1 or k == (2 * i - 1))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }
}
int main()
{
    pattern13(5);
}