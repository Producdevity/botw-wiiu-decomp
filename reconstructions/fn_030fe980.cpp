extern "C" bool fn_030fe980(void* p, unsigned i) { unsigned char bit = 1u << i; unsigned char v = *(unsigned char*)p; return (v & bit) != 0; }
