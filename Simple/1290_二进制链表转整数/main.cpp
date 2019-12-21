#include <iostream>
#include <math.h>
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    ListNode* head;
    ListNode first(1);
    ListNode second(0);
    ListNode third(1);
    head=&first;
    first.next=&second;
    second.next=&third;
    int val1=0;
//    for(;;head=head.next)
    for(;;head++)
    {
        val1=(val1<<1)|(head->val);
        if((head->next)==NULL)
            break;
    }
    std::cout << val1 << std::endl;
    return 0;
}
