// /*
//     * * * * *
//     * * * * *
//     * * * * * 
//     * * * * * 
//     * * * * * 

// */
// #include<stdio.h>
// int main(){
//     int n=5;
//     for(int i=1; i<=n; i++){
//         for (int j=1; j<=n; j++){
//             printf(" * ");
//         }
//         printf("\n");
//     }
// }

/*
    * 
    * * 
    * * *  
    * * * *  
    * * * * * 
*/
// #include<stdio.h>
// int main(){
//     int n=5;
//     for(int i=1; i<=n; i++){
//         for (int j=1; j<=i; j++){
//             printf(" * ");
//         }
//         printf("\n");
//     }
// }

// /*
//     * * * * *
//     * * * *
//     * * *  
//     * *  
//     *  

// */
// #include<stdio.h>
// int main(){
//     int n=5;
//     for(int i=1; i<=n; i++){
//         for (int j=n; j>=i; j--){
//             printf(" * ");
//         }
//         printf("\n");
//     }
// }
// /*
//             *
//           * *
//         * * * 
//       * * * * 
//     * * * * * 

// */
// #include<stdio.h>
// int main(){
//     int n=5;
//     for(int i=1; i<=n; i++){
//         for (int j=n-1; j>=i; j--){
//             printf(" ");
//         }
//         for(int k=1; k<=i; k++){
//             printf("* ");
//         }
//         printf("\n");
//     }
// }

// /*
//     * * * * *
//       * * * *
//         * * * 
//           * * 
//             *
// */
// #include<stdio.h>
// int main(){
//     int n=5;
//     for(int i=1; i<=n; i++){
//         for (int j=2; j<=i; j++){
//             printf(" ");
//         }
//         for(int k=n; k>=i; k--){
//             printf("* ");
//         }
//         printf("\n");
//     }
// }
// /*
//     * * * * * * * * *
//       * * * * * * *
//         * * * * * 
//           * * * 
//             *
// */
// #include<stdio.h>
// int main(){
//     int n=5;
//     for(int i=1; i<=n; i++){
//         for (int j=2; j<=i; j++){
//             printf("  ");
//         }
//         for(int k=n; k>=i; k--){
//             printf("* ");
//         }
//         for(int b=n-1; b>=i; b--){
//             printf("* ");
//         }
//         printf("\n");
//     }
// }

// /*
//             *
//           * * * 
//         * * * * *
//       * * * * * * *
//     * * * * * * * * * 
// */
// #include<stdio.h>
// int main(){
//     int n=5;
//     for(int i=1; i<=n; i++){
//         for (int j=2; j<=i; j++){
//             printf("  ");
//         }
//         for(int k=n; k>=i; k--){
//             printf("* ");
//         }
//         for(int b=n-1; b>=i; b--){
//             printf("* ");
//         }
//         printf("\n");
//     }
// }

/*
        1
      2 3 2
    3 4 5 4 3
  4 5 6 7 6 5 4
5 6 7 8 9 8 7 6 5

*/

// #include <stdio.h>

// int main() {
//     int n = 5;
//     for (int i = 1; i <= n; i++) {
//         for (int j = n - 1; j >= i; j--) {
//             printf("  ");
//         }
//         for (int k = i; k <= (2 * i - 1); k++) {
//             printf("%d ", k);
//         }
//         for (int b = (2 * i - 2); b >= i; b--) {
//             printf("%d ", b);
//         }
//         printf("\n");
//     }
//     return 0;
// }
/*
           1
         1   1
       1   2   1
     1   3   3    1
   1  4    6   4   1
 1  5   10   10  5   1
*/
// #include <stdio.h>

// int main() {
//     int n = 6;
//     for (int i = 0; i < n; i++) {
//         int number = 1;
//         for (int space = n - 1; space > i; space--) {
//             printf("  ");
//         }
//         for (int j = 0; j <= i; j++) {
//             printf("%4d", number);
//             number = number * (i - j) / (j + 1);
//         }
//         printf("\n");
//     }
//     return 0;
// }

