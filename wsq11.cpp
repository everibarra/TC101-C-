#include 
#include 
 #include "BigIntegerLibrary.hh"
  using namespace std;
   bool is_palindrome(BigInteger n) {
   string s = bigIntegerToString (n);
    reverse (s.begin(), s.end());
     BigInteger bi = stringToBigInteger (s);
      if (n == bi) {
      return true;
       }
        else {
        return false;
        } }
         BigInteger apply196(BigInteger n) {
         string s2 = bigIntegerToString (n);
         reverse (s2.begin(), s2.end());
         BigInteger bi = stringToBigInteger (s2);
         n = n + bi; return n;
         }

         int main() {
         int lb;
         int up;
         int np = 0;
         int nl = 0;
          int l = 0;
           BigInteger bn;
           cout  "Write the lower bound: ";
           cin >> lb;
           cout  "Write the upper bound: ";
           cin >> ub;
            cout  endl;
            for (int i=lb; iub; i++) {
            if(is_palindrome(i)==true) {
            cout  "This number is a natural palindrome"  endl; np++;
            }

            else {
            bn = apply196 (i);
            for(int j=1; j30; j++) {
            if(is_palindrome (bn)==true) {
            cout  "This is a non-Lychrel number"endl;
            nl++;
            break;
            }

            else {
             bn = apply196 (bn);
              } }

               if (is_palindrome(bn) == false){
                cout"This is a Lychrel number"endl; l++; coutendl;
                 } } }

                 cout  endl;
                 cout  "Analysis Report: "  endl;
                 cout  endl;
                 cout  "Number of Values Analyzed: "  (ub-lb) + 1  endl;
                 cout  "Number of Natural Palindromes: "  np  endl;
                 cout  "Number of Non-Lychrel Numbers: "  nl  endl;
                 cout  "Number of Lychrel Numbers: "  l  endl; return 0; }
