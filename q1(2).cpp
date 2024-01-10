#include <bits/stdc++.h>

using namespace std;

int main() {
int totalSum;
cin >> totalSum;
int value = totalSum / 5;
int remainderX = totalSum % 5;

for (int i = 0; i < 5; i++) {
if (remainderX > 0) {
if (i == 4){
 cout << value + 1;
}else{
cout << value + 1 << " ";
}
 remainderX--;
 } else {
 if (i == 4){
 cout << value;
 }else{
cout << value << " ";
    }
}
}
return 0;
}

