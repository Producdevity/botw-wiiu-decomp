extern "C" void fn_0308eacc(void*, int, void*, int);
extern "C" void fn_03bc7400(void*, void*, int);

namespace {
struct Buffer {
    int padding_0;
    char data[1];
};
}

extern "C" void fn_03bc74a8(void* buffer, int* countPtr, int value) {
    int count = *countPtr;

    if (count <= 0) {
        count = 1;
    }
    fn_0308eacc(((Buffer *)buffer)->data, count, (void*)(value), 4);
    fn_03bc7400(buffer, countPtr, value);
}
