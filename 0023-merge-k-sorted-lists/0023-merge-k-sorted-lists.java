/**
 * Definition for singly-linked list.
 * public class ListNode {
 * int val;
 * ListNode next;
 * ListNode() {}
 * ListNode(int val) { this.val = val; }
 * ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode mergeKLists(ListNode[] lists) {
        int n = lists.length;

        // Edge case: If the array of lists is empty
        if (n == 0) { return null; }

        // Start the Divide and Conquer process over the entire list array
        return partition(0, n-1, lists);
    }
    
    // Recursive helper to merge two sorted lists (O(N) time)
    private ListNode merge_two_lists(ListNode list1, ListNode list2) {

        // Base cases
        if (list1 == null) { return list2; }
        if (list2 == null) { return list1; }

        // Compare heads and recursively merge the rest
        if (list1.val <= list2.val) {
            // Attach the result of merging the rest of list1 and all of list2
            list1.next = merge_two_lists(list1.next, list2);
            return list1;
        } else {
            // Attach the result of merging all of list1 and the rest of list2
            list2.next = merge_two_lists(list1, list2.next);
            return list2;
        }
    }

    // Divide and Conquer function: Splits the array of lists and merges results
    private ListNode partition(int start, int end, ListNode[] lists) {

        // Base case 1: Segment is empty (shouldn't happen with initial call)
        if (start > end) { return null; }
        // Base case 2: Segment contains a single list (the smallest subproblem)
        if ( start == end) { return lists[start]; }

        // Find the midpoint to split the array of lists
        int mid = start + (end - start) / 2;

        // Recursively merge the left half
        ListNode L1 = partition(start, mid, lists);
        // Recursively merge the right half
        ListNode L2 = partition(mid+1, end, lists);

        // Combine the two merged results
        return merge_two_lists(L1, L2);
    }
}