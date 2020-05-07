#include "head.h"

int main() {
    // load the file. The constructor now does most of the work
    BitMap example_bmp("foto"); 

    // get the vector <R,G,B> for the pixel at (1,1)
    std::vector<unsigned int> example_vector = example_bmp.getPixel(1,1); 
}