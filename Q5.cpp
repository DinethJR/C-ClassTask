#include<iostream>
using namespace std;
 void inputHeight(float Height[],int size){
 	
 	for(int i=0;i<size;i++){
 		cout<<"Enter the Height of Student "<<i+1<<endl;
 		cin>>Height[i];
	 }
 	
 }
 
 
float findMaxHeight(float Height[],int size ){
	float MaxHeight=Height[0];
	for(int i=1;i<size;i++){
		if(Height[i]>MaxHeight){
			MaxHeight= Height[1];
		}
	}
	
	return MaxHeight;
}


float findMinHeight(float Height[],int size){
	float MinHeight=Height[0];
	for(int i=1;i<size;i++){
		if(Height[1]<MinHeight){
			MinHeight=Height[i];
		}
	}
	
	return MinHeight;
}


float findTotalHeight(float Height[],int size){
	float Total=0;
	for(int i=0;i<size;i++){
		Total+=Height[i];
		
	}
	return Total;
}

float printHeight(float Height[],int size){
	for(int i=0;i<size;i++){
		cout<<"The Height of the Student"<<i+1<<" "<<Height[i]<<endl; 
	}
}

int main(){
	float Height[5];
	int size=5;
	
	inputHeight(Height,size);
	
	cout<<"Maximum Height"<<findMaxHeight(Height,size)<<endl;
	cout<<"Minimum Height"<<findMinHeight(Height,size)<<endl;
	cout<<"Total Height"<<findTotalHeight(Height,size)<<endl;
	
	printHeight(Height,size);
	
	return 0;
	
}

