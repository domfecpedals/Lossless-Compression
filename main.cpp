//
//  main.cpp
//  Lossless
//
//  Created by Yuan Liu on 1/26/15.
//  Copyright (c) 2015 Yuan Liu. All rights reserved.
//

#include <iostream>
#include <string>
#include "Huffman.h"
#include "shannon.h"
#include "adaptivehuffman.h"

using namespace std;

int main(int argc, char * argv[]) {
    // insert code here...
    
    char *filename;
    
    string default_file="audio.dat";
    
    if(argv[1]==NULL){
        filename=&default_file[0];
        cout<<"Missing filename, work on text.dat for testing"<<endl;
    }else{
        filename=argv[1];
        cout<<"file name is: "<<filename<<endl;
    }
    
    
    
    huffman_routine(filename);
    shannon_routine(filename);
    
    
    return 0;
}