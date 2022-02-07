/* ConvertDecimalToBinary.cpp 
 * This ptogram converts decinal to binary using two different ways - recursion and iteration.
 * Author:     Elena Mudrakova
 * Module:     11
 * 
 *
 * Algoritham:
 * 1. Declare function for decimal-binary conversion using recursion. Function returns string and accepts integer n.
 * 2. if n == 0 return "0".
 * 3. Declare string str.
 * 4. while n > 0 .
 *   4.1 str += to_string(n % 2) .
 *   4.2 n = n/2 .
 *   4.3 call fucntion again recursively.
 * 5. after while loop reverse str.
 * 6. return str.
 * 7. Declare function for decimal-binary conversion using iteration. Function returns string and accepts integer n.
 * 8. if(n == 0) return "0".
 * 9. Declare string binary.
 * 10. while n > 0 .
 *   10.1 binary += to_string(n % 2).
 *   10.2 n = n / 2.
 * 11. after while loop reverse str.
 * 12. return str.
 */
#include <iostream>
//#include <sstream>    // to_string()
#include <string>
//#include <algorithm> // reverse()
//#include <vector>
using namespace std;


int binary_to_decimal_recurs(string s, int count, int sum );
//void binary_to_decimal_iter(string s);
int boop(string s, int count, int sum );

int main(){
   
    
    //cout << "Using recursion" << "\n";
    binary_to_decimal_recurs("1100100", 0, 0);
    //cout << "\nUsing iteration" << "\n";
    

    
    
};

// Convert binary to decimal recursively
int binary_to_decimal_recurs(string s, int count, int sum){ 
if (count == 0 ){
    cout << "first if stm" << endl;
    sum = s[count] - '0';
}
count ++; 
if (count < s.length()){
    sum = sum * 2 + (s[count] - '0');
    cout << "calling recursion.. " << endl;
    binary_to_decimal_recurs( s, count, sum);
    
}
cout  <<  "decimal is " << sum << endl ;
return sum; 

};


// Convert decimal to binary iteratively
// string decimal_to_binary_iter(int n){
//     if(n == 0) return "0";
       
//     string binary;
//     while(n > 0){
//         binary += to_string(n % 2);
//         n = n /2;
//     }
//     reverse(binary.begin(), binary.end());
//     return binary;
// };

    