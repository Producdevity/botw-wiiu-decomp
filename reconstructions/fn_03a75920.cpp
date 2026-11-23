namespace {
struct SlotTable {
    unsigned char unknown_00[28];
    void* slots[8];
};
}

extern "C" void fn_03a75920(SlotTable* table) {
    for (int i = 0; i < 8; i++)
        table->slots[i] = 0;
}
