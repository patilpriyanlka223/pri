//============================================================================
// Name        : building.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
struct Point
{
	double x;
	double y;
};
float countLen(Point building[],Point p)
{
 float l,w,h;
 if((p.x<building[0].x)&&(p.y<building[0].y))
 {
	 w=building[3].x-building[0].x;
	 h=building[1].y-building[0].y;
	 l=w+h;
 }else if(p.x<building[0].x && p.y>building[0].y && p.y<building[1].y )
 	 {
	   h=building[1].y-building[0].y;
	   l=h;
	 }else if(p.x<building[1].x &&p.y>building[1].y)
	 {
		 w=building[2].x-building[0].x;
		 h=building[1].y-building[0].y;
		 l=w+h;
	 }else if(p.x>building[0].x && p.y>building[1].y && p.y<building[2].y)
	 {
	  w=building[2].x-building[1].x;
	  l=w;
	 }else if(p.x>building[3].x &&p.y>building[2].y)
	 {
	  w=building[2].x-building[1].x;
	  h=building[2].y-building[3].y;
	  l=w+h;
	 }else if(p.x>building[3].x && p.y>building[3].y && p.y<building[2].y)
	 {
	  h=building[3].y-building[3].y;
	  l=h;
	 }else if(p.x>building[3].x &&p.y<building[2].y)
	 {
	  w=building[2].x-building[1].x;
	  h=building[2].y-building[3].y;
	  l=w+h;
	 }else if(p.x>building[0].x && p.x<building[3].x && p.y<building[3].y)
	 {
	  w=building[3].x-building[01].x;
	  l=w;
	 }
 return l;
 }
int main()
{
	struct Point p;
    struct Point building1[4];
	for(int j=0;j<4;j++)
	{
		cout<<"Enter X coordinate of  "<<j+1<<"point of building"<<endl;
		cin>>building1[j].x;
		cout<<"Enter Y coordinate of  "<<j+1<<"point of building"<<endl;
		cin>>building1[j].y;
	}
	cout<<"Enter the source point"<<endl;
	cout<<"Enter the X coordinate of source"<<endl;
	cin>>p.x;
	cout<<"Enter the Y coordinate of source"<<endl;
	cin>>p.y;
	float length=countLen(building1, p);
	cout<<"Length"<<length<<endl;

	return 0;
}
