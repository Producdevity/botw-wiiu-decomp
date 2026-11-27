extern "C" unsigned* fn_0396cf54(unsigned *, unsigned);
extern "C" void fn_0396d03c(void*, void*);

namespace {
struct Root {
    int padding_0;
    int offset;
};
}

extern "C" void fn_0396bff0(void **holder, void *arg) {
    unsigned handle;
    Root *root = (Root *)*holder;

    fn_0396cf54(&handle, (unsigned)((char *)root + root->offset));
    fn_0396d03c(&handle, arg);
}
