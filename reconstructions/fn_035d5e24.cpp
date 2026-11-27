extern "C" void* fn_0308e5a0(unsigned, void *, int);
struct ByamlHeader;
struct ByamlView;
extern "C" void* fn_0396bdd8(void*, const void*);

namespace {
struct Owner {
    char padding_0[0x10];
    ByamlView *view;
};
}

extern "C" void fn_035d5e24(void *owner, struct ByamlHeader *header, void *heap) {
    ByamlView *view = (ByamlView *)fn_0308e5a0(8U, heap, 4);

    if (view != 0) {
        view = (ByamlView *)fn_0396bdd8(view, header);
    }
    ((Owner *)owner)->view = view;
}
