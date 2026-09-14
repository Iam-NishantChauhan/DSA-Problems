/* Structure of Linked List Node
class Node {
	public:
	int data;
	Node *next;
	Node(int x) {
		data = x;
		next = nullptr;
	}
}; */

class Solution {
	public:
	int findLength(Node* slow, Node* fast) {
		int cnt = 1;
		fast = fast->next;
		while(fast != slow){
		    cnt++;
		    fast=fast->next;
		}
		return cnt;
	}
	int lengthOfLoop(Node *head) {
		// code here
		Node* slow = head;
		Node* fast = head;
		while (fast != NULL && fast->next != NULL) {
			slow = slow->next;
			fast = fast->next->next;
			if (slow == fast)
				return findLength(slow, fast);
		}
		return 0;
	}
};
