/*
  Delete Node at a given position in a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  class Node {
     int data;
     Node next;
  }
*/
    // This is a "method-only" submission. 
    // You only need to complete this method. 

Node Delete(Node head, int position) {
  
    // Complete this method 
    
    Node ret = head;
    
    if (head == null)
        return null;
    
    if (position == 0 && head != null) {
        return head.next;
    }
    
  
    while(--position > 0 && head != null) {
       head = head.next;
    }
        
    Node prev = head;
    prev.next= head.next.next;
    
    return  ret;
}

