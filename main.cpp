#include <iostream>
using namespace std;
int main() {
  int n, m, k;
  cin >> n >> m >> k;
  int a[n][m];
  int b[m][k];
  int c[n][k];
  
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) 
      {
        cin >> a[i][j];
      }
    }
  
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < k; j++)
      {
        cin >> b[i][j];
      }
    }  
    
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < k; j++)
      {
        c[i][j] = 0;
      }
    }
    
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < k; j++) {
      for (int p = 0; p < m; p++) 
        {
          c[i][j] += a[i][p] * b[p][j];
        }
      } 
    }  
    
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) 
      {   
        cout << c[i][j] << " ";
      } 
    }
  return 0;
}
