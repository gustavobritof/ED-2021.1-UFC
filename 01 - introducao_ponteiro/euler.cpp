#include <iostream>
#include <iomanip>

using namespace std;

double fatorial(int n){
    
  double total = 1.0;

		for (int i = n ; i >0 ; i--)
			{
				total = total * i;
			}

		return total;
    
    
}

double euler(int n){
    double total=1.0;
    
    for(int i=1;i<=n;i++){
        
        total+=1/fatorial(i);
        
    }
    
    return total;
}



int main()
{
    int num ;
    std::cin >> num;
    
    std::cout <<fixed << setprecision(6)<< euler(num) << std::endl;   

    return 0;
}
