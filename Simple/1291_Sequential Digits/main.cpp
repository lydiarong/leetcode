//
// Created by lima on 2019/12/21.
//
#include <iostream>
#include <list>
#include <math.h>
#include <vector>
using namespace std;

void showlist(list <int> g)
{
    list <int> :: iterator it;
    for(it = g.begin(); it != g.end(); ++it)
        cout << '\t' << *it;
    cout << '\n';
}


//int main()
//{
//    int low=31365477,high=514800930;
//    std::list<int> ans;
//    int start=low,end=high;
//    int i;
//    for(i=0;!(start/10==0);i++)
//    {
//        start=start/10;
//    }
//    int num_start=i;
//    for(i=0;!(end/10==0);i++)
//    {
//        end=end/10;
//    }
//    int num_end=i;
//
////    std::cout<<start<<std::endl;
////    std::cout<<num_start<<std::endl;
////    std::cout<<num_end<<std::endl;
//
//    int arr[9]={1,2,3,4,5,6,7,8,9};
//    int index=start,start1=0;
//    for (int i=num_start;i<=num_end;i++)
//    {
//        cout<<i<<endl;
//        while(start1<=high)
//        {
//            start1=0;
//            for(int j=index;(j<=index+i)&&(index+i<=9);j++)
//            {
//                start1=start1*10+arr[j-1];
//                std::cout<<start1<<std::endl;
//            }
//            if(start1<=high&&(start1>=low))
//            {
//                ans.push_back(start1);
//                std::cout<<start1<<std::endl;
//            }
//            index++;
//            if(index==10)
//                index=1;
//            if(start1%10==9)
//            {
//                index=1;
//                break;
//            }
////            if(start1==0)
////                break;
//        }
//
//    }
//    showlist(ans);
//    return 0;
//}
int main()
{
    int low=10,high=1000000000;
    std::list<int> ans;
    int start=low,end=high;
    int i;
    for(i=0;!(start/10==0);i++)
    {
        start=start/10;
    }
    int num_start=i;
    for(i=0;!(end/10==0);i++)
    {
        end=end/10;
    }
    int num_end=i;

//    std::cout<<start<<std::endl;
//    std::cout<<num_start<<std::endl;
//    std::cout<<num_end<<std::endl;

    int arr[9]={1,2,3,4,5,6,7,8,9};
    int index=start,start1=0;
    for (int i=num_start;i<=num_end;i++)
    {
        cout<<i<<endl;
        while(start1<=high)
        {
            start1=0;
            if(index+i<=9)
            {
                for(int j=index;(j<=index+i);j++)
                {
                    start1=start1*10+arr[j-1];
                    std::cout<<start1<<std::endl;
                }
            }
            else
            {
                index=1;
                break;
            }
            if(start1<=high&&(start1>=low))
            {
                ans.push_back(start1);
                std::cout<<start1<<std::endl;
            }
            index++;
        }
    }
    showlist(ans);
    return 0;
}