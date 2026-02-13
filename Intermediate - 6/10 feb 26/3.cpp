// // return length of a number using recursion
// #include <bits/stdc++.h>
// using namespace std;
// int length(int n)
// {
//     if (n == 0)
//         return 0; // base case
//     if (n == 1)
//         return 1;              // base case 1 se jyada bhi ho skte h ye isliye dala h ki agr value hi zero bhej di toh pr ye glt h solu for zero this  que is for only n>0
//     return 1 + length(n / 10); // recursive case
// }
// int main()
// {
//     cout << length(0);
// }

// return length of a number using recursion handle for negative
// #include <bits/stdc++.h>
// using namespace std;
// int length(int n)
// {
//     if (n == 0)
//         return 0;              // base case
//     return 1 + length(n / 10); // recursive case
// }
// int main()
// {
//     int n;
//     cout << "enter no.: ";
//     cin >> n;
//     if (n < 0)
//     {
//         n = -(n);
//     }
//     if (n < 10)
//     {
//         cout << 1;
//     }
//     else
//     {
//         cout << length(n);
//     }
// }

// return length of a number using recursion handle for negative and handling floating value ? ?
