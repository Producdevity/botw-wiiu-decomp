extern "C" int fn_03a2fe80(int, void *, int);

extern "C" int data_102229f8;
extern "C" int data_102229fc;

namespace {
struct Vtable {
    unsigned char padding_0[0xCC];
    void (*notify)();
};
struct Node {
    unsigned char padding_0[0x14];
    Vtable* vtable;
};
struct Holder {
    int source;
    int first;
    int second;
};
}

extern "C" void fn_02f0974c(void *arg0, int arg1)
{
    if (arg1 != 0) {
        ((Holder*) arg0)->source = arg1;
        int first = fn_03a2fe80(arg1, &data_102229fc, 1);
        ((Holder*) arg0)->first = first;
        if (first != 0) {
            ((Node*) (long long) first)->vtable->notify();
        }
        int second = fn_03a2fe80(((Holder*) arg0)->source, &data_102229f8, 1);
        ((Holder*) arg0)->second = second;
        if (second != 0) {
            ((Node*) second)->vtable->notify();
        }
    }
}
