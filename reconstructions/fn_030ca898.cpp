extern "C" void* fn_0308e578(unsigned size);

namespace {
struct Triple {
    int x;
    int y;
    int z;
};
}

extern "C" void fn_030ca898(void* arg0, int* arg1, int* arg2, int* arg3) {
    Triple *out = (Triple *)arg0;
    if ((out != 0) || (out = (Triple *)fn_0308e578(0xCU), out != 0)) {
        out->x = *arg1;
        out->y = *arg2;
        out->z = *arg3;
    }
}
