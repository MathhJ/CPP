#include <bits/stdc++.h>

using namespace std;

  void solve() {

    string username = "username";
    auto fun = [&, username](){
        cout << "Hello " <<username<<"\n";
    };

    fun();
    
  }


  int main() {
      ios_base::sync_with_stdio(0);
      cin.tie(0);
      int t = 1;
      // cin >> t;

      while (t--) {
          solve();
      }
      return 0;
  }