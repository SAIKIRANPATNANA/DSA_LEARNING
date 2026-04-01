/*#include <iostream>
using namespace std;
int main() {
    int i, j, k;
    cin>>k;
    for (i=1;i<=k;i++) {
        for (j=i;j<=k;j++) {
            cout<<j;
        }
        for (j=1; j<=i-1; j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}*/
/*#include <iostream>
using namespace std;
int main() {
    int i, j, k;
    cin>>k;
    for (i=1;i<=k;i++) {
        for (j=1;j<=k;j++) {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}*/
/*#include <iostream>
using namespace std;
int main() {
    int i, j, k;
    cin>>k;
    for (i=1;i<=k;i++) {
        for (j=i;j<=k;j++) {
            cout<<j;
        }
        for (j=1; j<=i-1; j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}*/
/*#include <iostream>
using namespace std;
int main() {
    int i,j,k,m,n;
    cin>>m;
    cin>>n;
    for(i=1; i<=m; i++) {
        for(j=1; j<=n; j++){
            if (i==1||j==1||i==m||j==n){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}*/
/*#include <iostream>
using namespace std;
int main() {
    int k,i,j,m,n;
    cin>>k;
    for(i=1;i<=k; i++){
        for(j=1; j<=k; j++) {
            if (i==1 || j==1){
                cout<<j;
            }
            else if (i==k || j==k){
                cout<<j;
            }
            else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}*/
/*#include <iostream>
using namespace std;
int main() {
    int k,i,j,m,n;
    cin>>k;
    for(i=1; i<=k; i++) {
        if(i%2!=0) {
            for(j=1;j<=6;j++ ){
                if(j%2!=0){
                    cout<<"1";
                }
                else{
                    cout<<"2";
                }
                }
        }
        else{
            for(j=1;j<=6;j++ ){
                if(j%2!=0){
                    cout<<"2";
                }
                else{
                    cout<<"1";
                }
                }
            
        }
        cout<<endl;
    }
    return 0;
}*/
/*#include <iostream>
using namespace std;
int main() {
    int i,j,k;
    cin>>k;
    for (i=1; i<=k; i++) {
        for(j=1; j<=k-i;j++){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            cout<<j;
        }
        for(j=i-1;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
} */

/*#include <iostream>
using namespace std;
int main() {
    int i,j,k;
    cin>>k;
    for(i=1;i<=k;i++) {
        for(j=1;j<=k-i;j++){
            cout<<" ";
        }
        cout<<i;
        if (i!=1 && i!=k) {
            for(j=1; j<=2*i-3; j++) {
                cout<<" ";
            }
            cout<<i;
        }
        if(i==k) {
            for(j=1; j<=2*i-2; j++){
                cout<<i;
            }
        }
        cout<<endl;
    }
    return 0;
}*/


