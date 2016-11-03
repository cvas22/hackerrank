/*
  Compare two linked lists A and B
  Return 1 if they are identical and 0 if they are not. 
  Node is defined as 
  class Node {
     int data;
     Node next;
  }
*/
int CompareLists(Node headA, Node headB) {
    // This is a "method-only" submission. 
    // You only need to complete this method
    
    int stat = 1;
    
    if(headA == null && headB == null)
        return 1;
    
    if (headA == null || headB == null) 
        return 0;
    
    
    int countA=0, countB=0;
    
    while((headA != null) && (headB != null)) {
        
        if(headA.data != headB.data) {
            stat = 0;
            break;
        }
        
        headA = headA.next;
        headB = headB.next;
        
        if(headA != null)
            countA++;
        
        if(headB != null)
            countB++;

        if(countA != countB) {
            stat = 0;
            break;
        }
    }
        
  return stat;
}
