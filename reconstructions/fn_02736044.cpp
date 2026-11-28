extern "C" void fn_0355fa20(void*, void*);
extern "C" char* data_1047c390;

namespace {
struct Node {
    unsigned char padding_0[4];
    void *context;
};

struct Globals {
    unsigned char padding_0[0x1C];
    Node *node;
};

struct Object {
    unsigned char padding_0[0x1F4];
    void *handle;
};
}

extern "C" void fn_02736044(void *object) {
    Node *node;
    void *context;
    void *handle;

    handle = ((Object *)object)->handle;
    if (handle != 0) {
        node = ((Globals *)data_1047c390)->node;
        if (node != 0) {
            context = node->context;
            if (context != 0) {
                fn_0355fa20(context, handle);
            }
        }
    }
    ((Object *)object)->handle = 0;
}
