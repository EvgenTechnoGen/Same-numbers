#include <iostream>
using namespace std;

int main() {
   int num_1, num_2, num_3;
   cout << "Enter 3 numbers:" << endl;
   cin >> num_1 >> num_2 >> num_3;

   if (num_1 == num_2 && num_1 == num_3 && num_2 == num_3) {
       cout << num_1 << " = " << num_2 << " = " << num_3 << " (3 same numbers) " << endl;
   }

   else if (num_1 == num_2 && num_1 != num_3 && num_2 != num_3) {
       cout << num_1 << " = " << num_2 << " (2 same numbers) " << endl;
   }

   else if (num_1 != num_2 && num_2 != num_3 && num_1 == num_3) {
       cout << num_1 << " = " << num_3 << " (2 same numbers) " << endl;
   }

   else if (num_1 != num_2 && num_1 != num_3 && num_2 != num_3) {
       cout << "No same numbers." << endl;
   }

   system("pause");
   return 0;
}
