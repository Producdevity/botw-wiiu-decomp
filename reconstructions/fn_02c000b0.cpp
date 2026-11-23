extern "C" bool fn_02c000b0(void* p, unsigned mask) { unsigned char bits = mask; return (*(unsigned char*)((char*)p + 0) & bits) == 0; }
