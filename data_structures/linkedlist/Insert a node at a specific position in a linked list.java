/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  class Node {
     int data;
     Node next;
  }
*/
    

Node InsertNth(Node head, int data, int position) {
   // This is a "method-only" submission. 
    // You only need to complete this method.
    
    Node node = new Node();
    node.data = data;
    Node temp, head_b = head;
    
    if (head == null) {
        return node;
    }
    
    if (position <= 0) {    
        node.next=head;
        return node;       
    }
    
    //Adjust index
    position--;
    
    while (position != 0 && head != null){
        head=head.next;
        position--;
    }
    
    temp = head.next;
    head.next = node;
    node.next = temp;
    
    return head_b;
   
}
