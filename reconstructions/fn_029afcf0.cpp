extern "C" void fn_029afcf0(void* self) {
    char* a = *reinterpret_cast<char**>(self);
    char* b = *reinterpret_cast<char**>(a + 908);
    if (b) {
        *reinterpret_cast<unsigned char*>(b + 620) |= 8;
    }
}
