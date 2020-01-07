//
// Created by lima on 2020/1/7.
//

#include <iostream>
#include <vector>
using namespace std;

void insertionsort(int *mat,int len){
    for(int i=1;i<len;i++){
        int value=mat[i];
        int j=i-1;
        for(;j>=0;j--){
            if(mat[j]>value){
                mat[j+1]=mat[j];
            }
            else{
                break;
            }
        }
        mat[j+1]=value;
    }
}

void insertionsort(int (&mat)[6]){
    for(int i=1;i<sizeof(mat)/sizeof(*mat);i++){   //需要插入的数  从第二个数开始到最后
        int value=mat[i];
        int j=i-1;
        for(;j>=0;j--){  // 查找插入的位置
            if(mat[j]>value){
                mat[j+1]=mat[j];
            }
            else{
                break;
            }
        }
        mat[j+1]=value;
    }
}
int main() {
    int mat[6]={4,5,6,1,3,2};
    insertionsort(mat);
    cout<<"Using reference:"<<endl;
    for(int i=0;i<sizeof(mat)/sizeof(*mat);i++){
        cout << mat[i] << ",";
    }
    cout << endl;
    insertionsort(mat,6);
    cout<<"Using pointer:"<<endl;
    for(int i=0;i<sizeof(mat)/sizeof(*mat);i++){
        cout<<mat[i]<<",";
    }
    cout<<endl;
    return 0;
}