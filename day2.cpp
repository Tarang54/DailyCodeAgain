#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int n;
	cin>>n;
        //decimal to binary and calculating compliment
        int ans = 0, i = 0;
        while(n!=0){
            int bit = n&1;
            ans = (bit*pow(10,i))+ans;
            n=n>>1;
            i++;
        }
        cout << ans<<endl;
        
        i=0;
        int an = 0;
        while(ans!=0){
            int dig = ans % 10;
            dig = (dig==1)?0:1;
            an = (dig*pow(10,i))+an;
            ans/=10;
            i++;
        }
        
        //binary to decimal
        i=0;
        int ans1 = 0;
        while(an!=0){
            int dig = an % 10;
            if(dig == 1){
                ans1+= pow(2,i);
            }
            an/=10;
            i++;
        }
        
    cout<< ans1;
    

		
}
