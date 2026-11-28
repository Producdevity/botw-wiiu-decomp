namespace {
struct Table {
    unsigned char padding_0[0x2D0];
    int entries[1];
};
}

extern "C" void fn_03c20fd8(int table, int index, int value) {
    if (index > 0) {
        reinterpret_cast<Table *>(table)->entries[index] = value;
    }
}
