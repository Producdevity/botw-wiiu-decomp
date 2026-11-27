extern "C" void fn_033ec8c8(int, void*, int, int);

namespace {
struct Node {
    char padding_0[116];
    char *vtable;
};
}

extern "C" void fn_033ecac0(int sourceId, void* node, int mode) {
    int index;
    int count;

    index = 0;
    count = (*(int (**)(void*))(((Node *)node)->vtable + 188))(node);
    if (count > 0) {
        do {
            fn_033ec8c8(sourceId, node, index, mode);
            count -= 1;
            index += 1;
        } while (count != 0);
    }
}
