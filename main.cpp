#include <iostream>
using namespace std;
#include <iomanip>
//1. Creating make file
//2. Swap the value in the array using pointers** to help
 //3. Take input from argv
  

int main(int argc, char **argv){
int i,n,*a;
			n=argc-1;
 		     a=new int[n];
			for(i=0;i<n;i++) {
			    a[i]=atoi(argv[i+1]);
		         cout<< "a[" << i << "]=" <<a[i]<<endl;
		}

  int *pa=a;
  int *pb=a+n;
  int temp;

  for (i = 0; i < n / 2; i++) {
    temp = *pa;
    *pa = *pb;
    *pb = temp;
    pa++; pb--;
}

  pa-=n/2;
     // Using p within your program 
  cout<<"Reverse: ";
  for(i=0;i<n;i++) {
 		   cout<<setw(3)<<pa[i+1]<<" "; //p is the location where p points to
 //     p++;  
 }

 delete [] a;  
}

  
//}

