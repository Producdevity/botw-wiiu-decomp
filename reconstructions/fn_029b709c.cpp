extern "C" void fn_029b709c(void* self) {
    char* a = *reinterpret_cast<char**>(self);
    char* b = *reinterpret_cast<char**>(a + 944);
    if (b) {
        *reinterpret_cast<unsigned int*>(b + 16) &= ~2;
    }
}
