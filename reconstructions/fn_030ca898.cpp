extern "C" void* fn_0308e578(unsigned size);

namespace {
struct Triple {
    int x;
    int y;
    int z;
};
}

extern "C" void fn_030ca898(void* memory, int* x, int* y, int* z) {
    Triple *out = (Triple *)memory;
    if ((out != 0) || (out = (Triple *)fn_0308e578(0xCU), out != 0)) {
        out->x = *x;
        out->y = *y;
        out->z = *z;
    }
}
