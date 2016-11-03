/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  class Node {
     int data;
     Node next;
  }
*/
    // This is a "method-only" submission. 
    // You only need to complete this method. 

void ReversePrint(Node head) {
    
    Node node = head;
    ArrayList<Integer> arr = new ArrayList<Integer>();
    
    
    while (node != null)  {
        arr.add(node.data);
        node = node.next;
    }
    
    int len = arr.size();
    
    while(--len >= 0){
        System.out.println(arr.get(len));
    }

}
