#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int m;
	int n;
	int i;
	
	scanf("%d",&n);
    if (n>0 && n<10){
    for (i=n ; i>0 ; i--){
    	for (m=0 ; m<i ; m++){
       	cout << i << " ";
	  }cout << endl;
	}
  }else{
  	cout << "Bilangan tidak sesuai!";
  }
return 0;
	   

}
