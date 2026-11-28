extern "C" void fn_03bf6b14(void*);

extern "C" void fn_03bfaac4(char* self) {
    unsigned int remaining = (unsigned char)self[0xA];
    if (remaining != 0) {
        int offset = 0;
        do {
            fn_03bf6b14(*(char**)(self + 0xC) + offset);
            remaining -= 1;
            offset += 0x14;
        } while (remaining != 0);
    }
    *(int*)(self + 4) &= 0xFFFFFFFE;
}
