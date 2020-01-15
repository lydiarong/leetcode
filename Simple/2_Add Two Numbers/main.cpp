//
// Created by lima on 2020/1/15.
//

#include <iostream>
using namespace std;
struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x):val(x),next(NULL){}
};
int main(){
    ListNode first1(1);
//    ListNode second1(4);
//    ListNode third1(3);
//    first1.next = &second1;
//    second1.next = &third1;
    ListNode first2(9);
    ListNode second2(9);
//    ListNode third2(4);
    first2.next = &second2;
//    second2.next = &third2;
    ListNode *head1 = &first1;
    ListNode *head2 = &first2;

//    for(;;head1++){
//        cout<<head1->val;
//        if(head1->next==NULL)break;
//    }cout<<endl;
//    for(;;head2++){
//        cout<<head2->val;
//        if(head2->next==NULL)break;
//    }
    int flag=0,flag1=0,flag2=0;
    ListNode *resnode=new ListNode(0);
    ListNode *res=resnode;
    for(;flag1==0||flag2==0||flag!=0;){
        if(head1->next==NULL)flag1=1;
        if(head2->next==NULL)flag2=1;
        resnode->next=new ListNode(0);
        resnode=resnode->next;
        resnode->val=(head1->val+head2->val+flag)%10;
        flag=(head1->val+head2->val+flag)/10;
        cout<<resnode->val<<",";
        cout<<flag<<endl;
        if(flag1!=1)
        {head1=head1->next;}
        else {head1->val=0;}
        if(flag2!=1)
        {head2=head2->next;}
        else {head2->val=0;}
    }

}