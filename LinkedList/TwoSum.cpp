#include<bits/stdc++.h>
using namespace std;

struct ListNode{
    ListNode* next;
    int val;
    ListNode(int x) : val(x) , next(NULL) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l3 = new ListNode(0);
        int carry = 0;
        ListNode* head = l3;
        while(l1 && l2){
            int value = l1->val + l2->val + carry;
            carry = value/10;
            l3->next = new ListNode(value%10); 
            l1 = l1->next;
            l2 = l2->next;
            l3 = l3->next;
        }

        while(l2){
            int value = l2->val+ carry;
            carry = value/10;
            l3->next = new ListNode(value%10);
            l2 = l2->next;
            l3 = l3->next;
        }
        while(l1){
            int value = l1->val + carry;
            carry = value/10;
            l3->next = new ListNode(value%10);
            l1 = l1->next;
            l3 = l3->next;
        }
        if(carry){
            l3->next = new ListNode(carry);
        }
        return head->next;
    }
};

ListNode* createList(const vector<int>& nums){
    ListNode* head = new ListNode(nums[0]);
    ListNode* current = head;

    for(int i = 1 ; i < nums.size() ; i++){
        current->next = new ListNode(nums[i]);
        current = current-> next;
    }
    return head;
}

void printList(ListNode* head){
    while(head){
        cout<<head->val;
        if(head->next) cout<<"->";
        head = head->next;
    }
    cout<<endl;
}

int main(){
    vector<int> num1 = {2,4,3};
    vector<int> num2 = {5 ,6 ,4};

    ListNode* l1 = createList(num1);
    ListNode* l2 = createList(num2);

    Solution sol;
    ListNode* result = sol.addTwoNumbers(l1 , l2);

    cout<<"Result: ";
    printList(result);

    return 0;
}