extern "C" void fn_03b3eb0c(void*, void*);
extern "C" void fn_03b4049c(void*, void*, void*);

extern "C" void *data_1047ed30;
extern "C" void *data_1047ed58;

namespace {
struct Registry {
    char padding_0[0x14];
    void *current;
};
}

extern "C" void fn_03a75474(void *entry) {
    void *previous = ((Registry *)data_1047ed30)->current;

    fn_03b3eb0c(data_1047ed30, entry);
    fn_03b4049c(data_1047ed58, entry, previous);
}
