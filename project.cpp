//Project Title : 
//To perform Lossless compression and decompression on a text file
//Approach : Using Huffman encoding algorithm

#include <bits/stdc++.h>
using namespace std;

//Node Structure
struct Node{
	char character;
	int frequency;
	struct Node *left,*right;
};
//END


//implemention of Min-Heap to sort the unique characters according to freq





int main(){
	//variables
	int ch;
	string f_name;
	string line;


	cout<<"x-x-x-x-x-x-x-x-x"<<endl;
	cout<<"|     MENU      |"<<endl;
	cout<<"x-x-x-x-x-x-x-x-x"<<endl;
	cout<<"| 1.Compress    |"<<endl;
	cout<<"| 2.Decompress  |"<<endl;
	cout<<"x-x-x-x-x-x-x-x-x"<<endl;
	cout<<"Enter choice :";
	cin>>ch;

	if(ch==1){
		cout<<"Enter Filename :";
		cin>>f_name;

		fstream inp_file; //file handler
		inp_file.open(f_name,ios::in);

		
	}	
	return 0;
}


