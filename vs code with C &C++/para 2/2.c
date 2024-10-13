#include <stdio.h>
  #define CUBE(x) x * x 
void solve() {
    int ans =  270/CUBE(3);
    printf("%d", ans);
}
int main() {
    solve();
	return 0;
}






   



// void solve() {
//     int a = 3;
//     int res = a++ + ++a + a++ + ++a;
//     printf("%d", res);
// }
// int main() {
// 	solve();
// 	return 0;
// }