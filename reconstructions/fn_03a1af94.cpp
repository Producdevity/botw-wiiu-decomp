extern "C" void fn_0308eacc(void *, int, void *, int);
extern "C" void fn_03a1bd38(void *, void *, int, void *);

namespace {
struct Object {
    unsigned char padding_0[4];
    unsigned char member[1];
};
}

extern "C" void fn_03a1af94(void *self, void *first, void *second) {
    int kind = 2;
    fn_0308eacc(static_cast<Object *>(self)->member, 0x80, first, 4);
    fn_03a1bd38(self, 0, kind, second);
}
