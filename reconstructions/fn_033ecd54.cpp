extern "C" void fn_033ec7ac(int, void*, int, int, int);

namespace {
struct Node {
    char padding_0[116];
    char *vtable;
};
}

extern "C" void fn_033ecd54(int sourceId, void* node, int mode) {
    int index;
    int count;

    index = 0;
    count = (*(int (**)(void*))(((Node *)node)->vtable + 188))(node);
    if (count > 0) {
        do {
            fn_033ec7ac(sourceId, node, index, mode, 0);
            count -= 1;
            index += 1;
        } while (count != 0);
    }
}
