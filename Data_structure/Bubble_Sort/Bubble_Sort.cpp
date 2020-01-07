//
// Created by lima on 2020/1/7.
//
#include <iostream>
using namespace std;

void Bubble_Sort(int *mat,int len){
    int temp;
    bool flag=false; // 提前退出冒泡循环的标志位
    for(int i=0;i<len;i++){ //how time should it go
        for(int j=0;j<len-i-1;j++){ //number next to each other if change space
            if(mat[j]>mat[j+1]){
                temp=mat[j];
                mat[j]=mat[j+1];
                mat[j+1]=temp;
                flag=true;   // 表示有数据交换
            }
        }
        if(!flag) break;     // 没有数据交换，提前退出
    }
}
int main(){
    int mat[6]={4,5,6,1,3,2};
    Bubble_Sort(mat,6);
    for(int i=0;i<sizeof(mat)/ sizeof(*mat);i++){
        cout<<mat[i]<<endl;
    }
    return 1;

}
