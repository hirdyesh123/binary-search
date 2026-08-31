// Last updated: 8/31/2026, 3:26:35 PM
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    int size(ListNode* head){
14        ListNode* temp=head;
15        int counter=0;
16        while(temp!=NULL){
17            counter++;
18            temp=temp->next;
19        }
20        return counter;
21    }
22    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
23        vector<int>hirdyesh;
24        int counter=2;
25        int prev=head->val;
26        int next=-1;
27        if(size(head)==2) return {-1,-1};
28        ListNode* temp=head->next;
29        while(temp!=NULL){
30            if(temp->next!=NULL)  next=temp->next->val;
31            if(temp->val<prev && temp->val<next){
32                hirdyesh.push_back(counter);
33            }
34            else if(temp->val>prev && temp->val>next){
35                hirdyesh.push_back(counter);
36            }
37            prev=temp->val;
38            temp=temp->next;
39            counter++;
40        }
41        if(hirdyesh.size()<2) return {-1,-1};
42       sort(hirdyesh.begin(),hirdyesh.end());
43       vector<int>tem(2,0);
44        int minDistance = INT_MAX;
45
46      for (int i = 1; i < hirdyesh.size(); i++) {
47            minDistance = min(minDistance,hirdyesh[i] - hirdyesh[i - 1]);
48        }
49       tem[0]=minDistance;
50       tem[1]=hirdyesh[hirdyesh.size()-1]-hirdyesh[0];
51       return tem;
52    }
53};