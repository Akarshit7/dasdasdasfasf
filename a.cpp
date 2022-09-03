#include<bits/stdc++.h>
#define int            long long int
#define F              first
#define S              second 
#define pb             push_back
#define haa            cout<<"YES"<<endl
#define naa            cout<<"NO"<<endl
#define sprint(x)      cout<<x<<endl
#define fastio         ios::sync_with_stdio(false), cin.tie(NULL),cout.tie(NULL)
using namespace std;


struct node
{
	int data;
	node * next;
	
};
void insert(int data1,node* &head1){
	node *new_node=new node;
	new_node->data=data1;
	new_node->next=head1;
    head1=new_node;
  }   
  
  void insert_last(int data1,node* &head1){
  	
  	node *q=head1;
  	while(q->next!=NULL){
  		q=q->next;
  	}
  	
	node *new_node=new node;
	new_node->data=data1;
	q->next=new_node;
  } 

int32_t main(){
	fastio;
	//#ifndef ONLINE_JUDGE
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	//#endif
    int t;
    cin>>t;
    while(t--){
    
	    node *head =new node;
	    // head=;
	    head->data=32;
	    head->next=NULL;
	    // head->next->next=
	     node *current=new node;
	     head->next=current;
	     current->data=13;
	     current->next=NULL;
	    // head->data=98;
     
     
     insert(321231,head);
	     insert(3,head);
	     insert_last(123,head);
	     node *q=head;
	     while(q!=NULL){
	     	cout<<q->data<<" ";
	     	q=q->next;
	     	
	     }
	     
     
      
      
    }
    return 0;
}