#include <iostream>


void swap(int &i,int &j)
{
    int k = i;
    i = j;
    j = k;
    
}

int main(){
   int x =15;
    int y =51;

    std::cout << "before Swap X: " << x <<" Y: "<< y <<std::endl;
    std::cout << "Now Swapped"<<std::endl;
    swap(x,y);
    std::cout << "after Swap X: "<< x <<" Y : " << y << std::endl; 
    
    
    return 0;


}

