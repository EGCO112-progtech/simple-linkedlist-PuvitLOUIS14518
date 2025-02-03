//
//  main.c
//  simple linkedlist
//
//  Created by Mingmanas Sivaraksa on 4/2/2566 BE.
//

#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int main(int argc, const char * argv[]) {
    /*  Exercise I
    1. Add 1 more than at the end
    2. Add value(11)
    3. Make next become NULL
 */
    
/*  Exercise II
        1. Add 1 more than at the begining!!!!
        2. Add value (2)
        
*/

    int c=5;
    struct node a,b,d,e,*head ;
    a.value = c;
    a.next=&b;
    head=&a;
    b.value=head->value+3;
    //d.value=head->value+6;
   
    b.next=&d;
    
    b.next->value=11;
    d.next=&e;
    e.value=2;
    e.next=NULL;  

    printf("%d\n", head ->value ); //what value for 5
    printf("%d\n", head ->next->value ); //what value for 8
    printf("%d\n", head->next->next->value); //what value for 11
    printf("%d\n", head->next->next->next->value); //what value for 2

    typedef struct node* NodePtr;
    NodePtr tmp=head; //add temp value to faciliate
        
    /*  Exercise III Use loop to print everything*/
        printf("Exercise III Use loop to print everything\n");
        int i,n=4;
        for(i=0;i<n;i++){
            printf("%d\n", tmp->value);
            tmp=tmp->next;

          // What is missing???
        }
    
    
   /*  Exercise IV change to while loop!! (you can use NULL to help)*/
   printf("Exercise IV change to while loop!! (you can use NULL to help)\n");
       tmp=head;
         while(tmp!=NULL){
            printf("%d \n", tmp->value);
            
            tmp=tmp->next;
           // What is missing???
        }
    
    
 /*  Exercise V Use malloc to create all nodes, instead of create a struct!!
         //use a loop to help
          
     */
    printf("Exercise V Use malloc to create all nodes, instead of create a struct!! use a loop to help\n");
         head=(NodePtr)malloc(sizeof(struct node));
         tmp=head;

         for(i=0;i<3;i++){
          //สร้างอีก 3โหนด มาต่อท้าย
         //ใส่ค่า i+3 ในvalue
           tmp->value=i+3;
           tmp->next=(NodePtr)malloc(sizeof(struct node));
           tmp=tmp->next;
         } tmp->value=i+3;
         tmp->next=NULL;
         for(tmp=head;tmp!=NULL;tmp=tmp->next)
         {
            printf("%d \n", tmp->value); 
         }
    printf("Exercise VI Free all node !! //use a loop to help \n");
         for(tmp=head;tmp!=NULL;tmp=tmp->next)
         {  head=head->next;
            printf("\nFree %d\n",tmp->value);
            free(tmp);
            printf("%d \n", tmp->value); 
         }       
           
           // What is missing???
        
    /*  Exercise VI Free all node !!
         //use a loop to help
          
     */
}
