#include <iostream>
using namespace std;


bool isGanjil(int cekGanjil){
    if (cekGanjil % 2 != 0)
    {
        return false;
    }else{
        return true;
    }
}
void isGenapKecil (int arr[], int size){
    int genapKecil = 1000;
    int idx = -1;

    for (int i = 0; i < size; i++){
        if(isGanjil(arr[i]) && arr[i] < genapKecil){
            genapKecil = arr[i];
            idx = i;
        }
    }
    if(genapKecil != 1000){
    cout << "Genap Terkecil : "<< arr[idx] << endl;
    cout << "index : "<< idx << endl;
    }else {
        cout << "Tidak ada angka genap" << endl;
    }
}

int main(){
    int arr[]= {6,7,4,3,2};
    int size = sizeof(arr)/sizeof(arr[0]);

    isGenapKecil(arr,size);

}
