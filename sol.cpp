#include <bits/stdc++.h>

using namespace std;

int main() {                            
  // ios::sync_with_stdio(false);
	// cin.tie(0);
  int tt;
  cin >> tt;
  while (tt--) { 
    int year, month, day;
    scanf("%d:%d:%d", &year, &month, &day);
    int d = 0;
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
    	d = ((31 - day) / 2) + 1;
    } else if (month == 2) {
    	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
    		d = ((29 - day) / 2) + 1;
    	} else {
    		d = ((59 - day) / 2) + 1;
    	}
    } else {
    	d = ((61 - day) / 2) + 1;
    }
    printf("%d\n", d);
  }
  return 0;
}      
