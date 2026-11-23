struct TableEntry {
    unsigned int words[2];
};

extern "C" TableEntry data_10523770[];

extern "C" TableEntry* fn_02d331b4(void* context, int index) {
    return &data_10523770[index];
}
