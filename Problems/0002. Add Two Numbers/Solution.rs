// Definition for singly-linked list.
#[derive(PartialEq, Eq, Clone, Debug)]
pub struct ListNode {
  pub val: i32,
  pub next: Option<Box<ListNode>>
}

impl ListNode {
  #[inline]
  fn new(val: i32) -> Self {
    ListNode {
      next: None,
      val
    }
  }
}

impl Solution {
    pub fn add_two_numbers(l1: Option<Box<ListNode>>, l2: Option<Box<ListNode>>) -> Option<Box<ListNode>> {
        let mut dummy = Box::new(ListNode::new(0));
        let mut current = &mut dummy;
        let (mut l1, mut l2, mut carry) = (l1, l2, 0i32);

        while l1.is_some() || l2.is_some() || carry > 0 {
            let mut sum: i32 = carry + l1.as_ref().map_or(0, |node| node.val) + l2.as_ref().map_or(0, |node| node.val);

            carry = sum / 10;
            current.next = Option::Some(Box::new(ListNode::new(sum % 10)));
            current = current.next.as_mut().unwrap();

            l1 = l1.and_then(|node| node.next);
            l2 = l2.and_then(|node| node.next);
        }

        return dummy.next;
    }
}