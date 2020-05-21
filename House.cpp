/*
	This program gives house in output.Made of "*" "-" and "/" 

*/


#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
  int i,j,k;
  for(i=1; i<=10; i++)		//Outer loop of the program for * triangle and roof
    {
      for(j=9; j>=i; j--)// loop for spaces for * triangle
        {
          cout<<" ";
        }
      for(k=1; k<=(2*i-1); k++)//loop for upper section of house
        {
        	if(i==1){ //for creating first * and roof
        		
        		cout<<"* - - - - - - - - - - - - - - - - - - - - - - -  "; 
			}
			else if(i==2 && k==3 || i==3 && k==5 || i==4 && k==7 || i==5 && k==9 || i==6 && k==11 || i==7 && k==13 || i==8 && k==15 || i==9 && k==17){
			// condition for right leaned wall attached with roof 
          	cout<<"*                                             \\";
      }
      else{
			
          cout<<"*";
      }
      	if(k==19){//middle line of the house
        		
        		cout<<"* - - - - - - - - - - - - - - - - - - - - - -  ";
			}
      
        }
      cout<<"\n";
      
    }	//End of main loop 
      for(int m=1; m<=11; m++ ){
    		if(m==11){//floor of the house
    			cout<<"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -";
			}
			else if(m==5){
			//lock of the door and upper part of window along with "|" of walls of door
    		cout<<"| 	  --@--    |		 	 -------		|";
	}// Below all the program is for window and door
		else if( m==6 || m==7 || m==8 || m==9) {
			if(m==7){
			
    		cout<<"| 	           |    		|---|---|		|";
}else if (m==9){
		cout<<"| 	           |     	 	 -------		|";
	
}
else{
		cout<<"| 	           |    		|   |   |		|";
	
}


	}
	else{
		    		cout<<"| 		   |						|";

	}
    	cout<<"\n";
	}
	getch();
}

