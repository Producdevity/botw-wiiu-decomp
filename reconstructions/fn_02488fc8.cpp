extern "C" void fn_030b0cb8(unsigned int* destination, const unsigned int* source);

extern "C" void fn_02488fc8(char* value, const unsigned int* index) {
    fn_030b0cb8((unsigned int*)(value + 6364), index);
}
