# include<iostream>
using namespace std;
// void sort012(int* arr, int n) {
//     int c1 = 0, c2 = 0, c3 = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == 0)
//         {
//             c1++;
//         }
//         else if (arr[i] == 1) {
//             c2++;
//         }
//         else
//             c3++;
//     }

//     for (int i = 0; i < c1; i++)
//     {
//         arr[i] = 0;
//     }
//     for (int i = c1; i < c1 + c2; i++)
//     {
//         arr[i] = 1;
//     }
//     for (int i = c1 + c2; i < n; i++)
//     {
//         arr[i] = 2;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

//m-2
// void sort012(int* arr, int n) {
//         int l=0;
//         int m=0;
//         int h=n-1;
//         while(m<=h){
//             if(a[m]==0){
//                 swap(a[m],a[l]);
//                 l++;
//                 m++;
//             }
//             else if(a[m]==1){
//                 m++;
//             }
//             else{
//                 swap(a[m],a[h]);
//                 h--;
//             }
//         }
// }
int main() {
    int arr[] = { 1,1,0,2,0 };
    int n = sizeof(arr) / sizeof(arr[0]);
    // sort012(arr, n);
    cout<<n;
    return 0;
}