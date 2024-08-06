class Solution {
    public ListNode reverse(ListNode head) {
        ListNode cur = head;
        ListNode prev = null;
        ListNode next = null;
        while (cur != null) {
            next = cur.next;
            cur.next = prev;
            prev = cur;
            cur = next;
        }
        return prev; // Return prev instead of head
    }

    public ListNode removeNodes(ListNode head) {
        if (head == null) return null;

        head = reverse(head);
        ListNode cur = head;
        int max = head.val;
        ListNode prev = head;
        head = head.next;

        while (head != null) {
            if (head.val >= max) {
                max = head.val;
                prev = head;
            } else {
                prev.next = head.next;
            }
            head = head.next;
        }

        head = reverse(cur);
        return head;
    }}
    
