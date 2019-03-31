//
//  nest.cpp
//  
//
//  Created by Eram M on 3/27/19.
//
/*This was written by call number 1.
 This was written by call number 2.
 This was written by call number 3.
 This was written by call number 4.
 This ALSO written by call number 4.
 This ALSO written by call number 3.
 This ALSO written by call number 2.
 This ALSO written by call number 1.*/

#include <stdio.h>
#include <iostream>
#include <iomanip>
//
//std::string indentation(int n, int i){
//    std::string str = "";
//    if(n==0){return "";}
//    if(n==1){str="\t";}
//    return str = str + indentation(n-1);
//}
void print_tree(int n, int i){
    if(n==0){  return ;}
    std::cout<<std::string( i, ' ' )<<"This was witten  by call number "<<i<<std::endl;
    print_tree(n-1, i+1);
   std::cout<<std::string( i, ' ' )<<"This was ALSO written by call number "<<i<<std::endl;
    
    
    //std::cout<<"This was ALSO written by call number "<<n<<std::endl;
    
}

int main(){
    
    print_tree(4,1);
    return 0;
}
