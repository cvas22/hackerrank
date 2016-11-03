/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  class Node {
     int data;
     Node next;
  }
*/
Node Insert(Node head,int data) {

    Node start = head;
    
    Node node = new Node();
    node.next = null;
    node.data = data;
    
    if(head == null) {
        return node;
    }
   
      //Traverse till end
    while (head.next != null) {
       head=head.next;
    }
        
     head.next = node;
     return start;   
}