#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;



int main()
{
	//wagers
	double favorite1, , draw1, underdog1, favourite2, draw2, underdog2;



    int s3;

	int loop = true;


	double s1 = bankroll(favourite1, draw1);
	double s2 = bankroll(favourite2, underdog2);

	while(loop){
		
		cout<<"\nInput bankroll % investment: ";
		cin>>s3;
		if(s3 == 0){
			break; 
		}

		else{

			for(int i = 0; i <= 5; i++){

				s3 = i;
				    

			
				double hedge = bankroll(underdog2, draw2);

				    if(hedge > 0)
				    {
					cout<<"\ns1 Hedge Soccer Bet:  "<hedge; // soccer bet for more read profitability
	

					cout<<"\n----------------------";

				    }

			}

		}

	}
    return 0;

}
