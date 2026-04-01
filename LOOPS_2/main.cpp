/*#include <iostream>
using namespace std;
int main(){
    int k;
    int n;
    k = n;
    int i,j;
    cin>>k;
      for(i=0; k>0; ++i) {
            k = k/10;
        }
        j = 0;
        while(n!=0) {
            n = n/10;
            j++;
        }
      cout<<i;
      cout<<j;
    }*/
/*#include <iostream>
using namespace std;
int main() {
    int k;
    cin>>k; 
    int i;
    int r;
    int sum = 0;
    for(i=0; k!=0; i++) {
        r = k%10;
        k = k/10;
        sum += r;
    }
    cout<<"sum = "<<sum;
    
}*/
/*#include <iostream> 
using namespace std;
int main() {
    int k;
    cin>>k;
    int i,r, reverse;
    reverse = 0;
    for(i=0;k!=0; i++) {
         r = k%10;
         reverse = reverse*10 + r;
         k = k/10;
    }
    cout<<reverse;
}*/
/*#include <iostream>
using namespace std;
int main() {
    int k;
    cin>>k;
    int i;
    int j = 0;
    int m = 0;
    for (i=1; i<=k; i++) {
        if (i%2==0) {
            j += i;
        }
        else {
            m += i;
        }
    }
    cout<<(m-j);
}*/
/*#include <iostream>
using namespace std;
int main() {
    int k;
    cin>>k;
    int result = 1;
    for (int i=k; i>0; i--) {
    result *= i;
    }
    cout<<result;
}*/
/*#include <iostream>
using namespace std;
int main() {
    int k,i,fact;
    cin>>k;
    fact = 1;
    for (i=1; i<=k; i++) {
        fact *= i;
    }
cout<<fact;
return 0;
}*/
/*#include <iostream> 
using namespace std;
int main() {
    int k,i,r,result;
    cin>>k;
    int p = 1;
    result = 0;
    for (i=1; k!=0; i++) {
        r = k%10;
        result += (r*p);
        k = k/10;
        p = p*2;
    }
    cout<<result;
    return 0;
}*/
/*#include <iostream> 
using namespace std;
int main() {
    int k,i; 
    int r;
    cin>>k;
    int result = 0;
    int answer = 0;
    for(i=0; k!=0; i++) {
        r = k%2;
        // cout<<r;
        result = result*10 + r ;
        k = k/2;
    }
  for (i=0; result!=0; i++) {
        r = result%10;
        answer = answer*10 + r;
        result = result/10;
  }
  cout<<answer;
  return 0;
}
*/








