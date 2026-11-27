extern "C" void *data_1047c318;
extern "C" void fn_033d0524(void*, int);
extern "C" void fn_03984eb0(int, int, int, int);

namespace {
struct Settings {
    char padding_0[228];
    int mode;
};
struct Entry {
    char padding_0[32];
    int id;
};
}

extern "C" void fn_033d0594(int* handle, void* entry, int flags) {
    int mode;

    mode = ((Settings *)data_1047c318)->mode;
    fn_033d0524(entry, flags);
    fn_03984eb0(*handle, ((Entry *)entry)->id, 0, mode);
}
