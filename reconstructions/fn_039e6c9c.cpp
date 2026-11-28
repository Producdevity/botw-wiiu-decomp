extern "C" void fn_030b0cb8(unsigned int* destination, const unsigned int* source);

extern "C" void fn_039e6c9c(char* value, const unsigned int* index) {
    fn_030b0cb8((unsigned int*)(value + 108), index);
}
