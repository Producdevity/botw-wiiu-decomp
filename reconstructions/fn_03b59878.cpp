extern "C" void fn_03b57174(void*);

namespace {
struct Child {
    char padding_0[28];
    int value;
    char padding_20[120 - 32];
    Child *next;
    char padding_7c[264 - 124];
    int enabled;
};

struct Object {
    char padding_0[6];
    signed char dirty;
    char padding_7[44 - 7];
    int value;
    char padding_30[256 - 48];
    Child *children;
};
}

extern "C" void fn_03b59878(void* object, int value) {
    Child *child;

    child = ((Object *)object)->children;
    ((Object *)object)->dirty = 1;
    ((Object *)object)->value = value;
    for (; child != 0; child = child->next) {
        if (child->enabled != 0) {
            child->value = ((Object *)object)->value;
            fn_03b57174(child);
        }
    }
}
