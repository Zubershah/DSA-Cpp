// #include <iostream>
// using namespace std;
// int main()
// {
//     /*sum of all numbers from 1 to n which are divisible by 3*/
//     int n, sum = 0;
//     cout << "enter the number\n";
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         if (i % 3 == 0)
//         {
//             sum += i;
//         }
//     }
//     cout << "the sum value is " << sum;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     /*print factorial of a number n*/
//     int n, factorial = 1;
//     cout << "enter the number\n";
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         factorial *= i;
//     }
//     cout << "the factorial value is " << factorial;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     /*
//     1234
//     1234
//     1234
//     1234
//     */
//     int n = 4;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             cout << j;
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     /*
//     ****
//     ****
//     ****
//     ****
//     */
//     int n = 4;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     /*
//     ABCD
//     ABCD
//     ABCD
//     ABCD
//     */
//     int n = 4;
//     for (int i = 0; i < n; i++)
//     {
//         char ch = 'A';
//         for (int j = 1; j <= n; j++)
//         {
//             cout << ch;
//             ch++;
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     /*
//     123
//     456
//     789
//     */
//     int n = 3;
//     int num = 1;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             cout << num << " ";
//             num++;
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     /*
//     ABC
//     DEF
//     GHI
//     */
//     int n = 6;
//     char ch = 'A';
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             cout << ch << " ";
//             ch++;
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     /*
//      *
//      **
//      ***
//      ****
//      */
//     int n = 4;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < i + 1; j++)
//         {
//             cout << "*" << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     /*
//      1
//      22
//      333
//      4444
//     */
//     int n = 4;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             cout << i << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     /*
//      A
//      BB
//      CCC
//      DDDD
//     */
//     int n = 4;
//     char ch = 'A';
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             cout << ch << " ";
//         }
//         ch++;
//         cout << endl;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    /*
     1
     12
     123
     1234
    */
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }

    return 0;
}