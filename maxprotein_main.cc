///////////////////////////////////////////////////////////////////////////////
// maxprotein_main.cc
//
// Compile with g++ -std=c++11 maxprotein_main.cc -o experiment
//
// Run with ./experiment
///////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include "maxprotein.hh"
#include "timer.hh"
using namespace std;

void print_time1(int n ){
    FoodVector source;
    
    for( int i=0; i < n; i++){
        
    FoodVector filter_food_vector(source);
    Timer timer;
    
    double elapsed = timer.elapsed();
    cout << "filter_food_vector, "
    << "n=" << n << ", "
    << "output=\"" << i << "\", "
    << "elapsed time=" << elapsed << " seconds" << endl;


    }
    
       
}
void print_time2(int n ){
    FoodVector foods;
    
    for( int i=0; i < n; i++){
        
        FoodVector greedy_max_protein(foods);
        Timer timer;
        
        double elapsed = timer.elapsed();
        cout << "greedy_max_protein, "
        << "n=" << n << ", "
        << "output=\"" << i << "\", "
        << "elapsed time=" << elapsed << " seconds" << endl;

    }
    
    
}
void print_time3(int n ){
    FoodVector foods;
    
    for( int i=0; i < n; i++){
        
        FoodVector exhaustive_max_protein(foods);
        Timer timer;

        double elapsed = timer.elapsed();
        cout << "exhaustive_max_protein, "
        << "n=" << n << ", "
        << "output=\"" << i << "\", "
        << "elapsed time=" << elapsed << " seconds" << endl;

    }
    
   }
void check_text(){
    
    
    FoodVector foods;
    if ( ! load_usda_abbrev("ABBREV.txt")) {
        cerr << "error: cannot open \"ABBREV.txt\"" << endl;
     }
}
int main ()

{
    int n ;
    
    check_text();
    cout << " please input the size:\n";
    cin >> n;
    
    
    print_time1(n);
    
    print_time2(n);
    
    print_time3(n);
    
    return 0;
}
