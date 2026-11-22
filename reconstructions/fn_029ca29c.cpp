extern "C" void fn_029ca29c(void* self) {
    char* a = *reinterpret_cast<char**>(self);
    char* b = *reinterpret_cast<char**>(a + 944);
    if (b) {
        *reinterpret_cast<unsigned int*>(b + 20) &= ~0x2000000;
    }
}
