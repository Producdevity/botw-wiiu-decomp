extern "C" unsigned char data_1053210c[];
extern "C" unsigned char data_1053213c[];
extern "C" void fn_03082c70(void*, int, int);
extern "C" unsigned* fn_03a38bf4(unsigned* context);

namespace {
struct Table {
    unsigned count;
    int entries;
};
}

extern "C" void fn_02f4d720(int unused, unsigned int index, int value) {
    unsigned int context;
    int entry;

    if (index < 4U) {
        fn_03a38bf4(&context);
        entry = ((Table *)data_1053213c)->entries;
        if (index < ((Table *)data_1053213c)->count) {
            entry += index * 8;
        }
        fn_03082c70(data_1053210c, entry, value);
    }
}
