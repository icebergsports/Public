#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
#include<fstream>
using namespace std;




int main()
{

    double f1, g1, u2, g2, f3, fg;

    int b;
    int count = 0;



    cout<<"\nInput DS ";
    cin>>b;


	for(int i = 0; i <= b; i++)
		for(int a = 0; a <= b; a++)
            for( int b = 0; b <= b; b++){

							count = 0;
                    

							double total_wager = f1 + g1 + u2 +g2 + f3 + fg;


							double g1g2f3_bankroll = fg2 + fg3 + fg1 total_wager;
							double g3g2g1_bankroll = g1 + gg2 + fg - total_wager;
							double f3f2f1_bankroll = g2 + gg2 + fg - total_wager;
							double f2g1f3_bankroll = fg1 + fg2 + fg3 - total_wager;

					

    
							// printing perfect match...

							if(fg3_bankroll > 0)
							{
							cout<<"\nu1 wager: "<<fg1;
							cout<<"\nf1 wager: "<<fg2;
							cout<<"\nu2 wager: "<<fg3;
							cout<<"\nf2 wager: "<<fg4;

							cout<<"\n*****************************";

							}



                }
    cout<<"Done";
    return 0;

}
