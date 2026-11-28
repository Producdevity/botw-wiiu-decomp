extern "C" unsigned char fn_02e54e5c(void);
extern "C" void fn_031ff300(void*, int, void*);
extern "C" unsigned char fn_0341d958(void);

extern "C" void *data_1046d59c;

namespace {
struct Object {
    char padding_0[0x1020];
    char block_1020[0x10];
    signed char flag_1030;
};
}

extern "C" void fn_02c0a580(void *object) {
    if ((fn_02e54e5c() != 0) && (fn_0341d958() == 0)) {
        fn_031ff300(data_1046d59c, 1, ((Object *)object)->block_1020);
        ((Object *)object)->flag_1030 = 1;
    }
}
