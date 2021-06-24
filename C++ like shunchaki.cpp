#include<iostream>
#include<math.h>
using namespace std;

float f(float x){
		return pow(x,3)+x-3;}
		float f2(float x){
			return 6*x;}
int main(){
	
			
				float a,b,e=0.0001,x1,x2,y;
				cin>>a>>b;
				
				if(f(a)*f2(a)<0){
					x1=a; y=b;}
					
					if(f(b)*f2(b)<0){
					x1=b; y=a;}						
					x2=x1-(y-x1)*f(x1)/(f(y)-f(x1));
					
					while(fabs(x2-x1)>=e){	x1=x2;
					
					x2=x1-(y-x1)*f(x1)/(f(y)-f(x1));
				}
						cout<<x2; return 0;
				
			
		}
	

