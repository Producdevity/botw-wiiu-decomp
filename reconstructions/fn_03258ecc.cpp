extern "C" void fn_03258ecc(unsigned char* object) {
    int* values = reinterpret_cast<int*>(object + 216);
    for (unsigned i = 0; i < 32; ++i)
        values[i] = -1;
}
