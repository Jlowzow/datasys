#include <iostream>
using namespace std;

class Node
{
public:
	int data;
	Node* link;
};

void main(void)
{
	Node* A;
	A=NULL;
	Node * temp=new Node;
	temp->data=2;
	temp->link=NULL;
	A=temp; //A peikar no til starten av lista der data=2
	//Vi vil leggja til nytt element med data=4 i slutten av lista:
	//Lagar først eit nytt element 
	temp=new Node;
	temp->data=4;
	temp->link=NULL;
	//Finn slutten av lista:
	Node* temp1=A; //Startar med første element
	while(temp1->link!=NULL) temp1=temp1->link;  //Flyttar temp1 bakover i lista
	//temp1 peikar no på siste element
	temp1->link=temp;
	//temp er no siste element
	//Tar utskrift av alle element:
	temp1=A; //Startar med første element
	 do{cout<<temp1->data<<endl;
		temp=temp1;
		temp1=temp1->link;  //Flyttar temp1 bakover i lista
	}while(temp->link!=NULL);


}