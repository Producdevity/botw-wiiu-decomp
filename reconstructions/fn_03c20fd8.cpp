namespace {
struct Table {
    unsigned char padding_0[0x2D0];
    int entries[1];
};
}

extern "C" void fn_03c20fd8(int arg0, int arg1, int arg2) {
    if (arg1 > 0) {
        reinterpret_cast<Table *>(arg0)->entries[arg1] = arg2;
    }
}
