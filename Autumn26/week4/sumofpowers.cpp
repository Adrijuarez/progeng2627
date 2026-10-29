#include <iostream>

double pow (double base, int exp)
{
    double output=1 ;
    for ( int n=1 ; n<= exp; n++){
    output= output * base ;
    

} 
return output;}

int main () {

    int n ;
    double x ;

    std:: cin >> x >> n ;

    double result = 0 ;

    for( int i=1 ; i<=n ; i++){ 
        result = result + pow (x,i);
    
    }
std:: cout << result << std::endl;
}
