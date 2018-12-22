#include <iostream>

using namespace std;
void iden (int n){
 for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
            if(i==j) cout<<"1 ";
            else cout<<"0 ";
            }
            cout<<endl;

             }
}

int main(){
    int n;
    cout<<"Praktek UAS Semester 1"<<endl;
    cout<<"Masukan jumlah ordo matrik (n): 5"<<endl;
    cout<<"----------------------------------"<<endl;
    cout<<"Masukkan ordo matriks : ";
    cin>>n;
    cout<<endl;
    iden(n);

}
