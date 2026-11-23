extern "C" void fn_031a744c(int);

extern "C" void fn_031a4868(int value, void* object) {
    *(unsigned short*)((char*)object + 8) = (*(unsigned short*)((char*)object + 8)) | 0x20;
    fn_031a744c(value + 260);
}
