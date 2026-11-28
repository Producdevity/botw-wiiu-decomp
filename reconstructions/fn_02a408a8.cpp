extern "C" int data_10467c34;
extern "C" void fn_02a3fbe8(void*);
extern "C" int fn_02a404d0(void*);
extern "C" int fn_02a40788(void*);
extern "C" int fn_02a40834(void*);
extern "C" int fn_02ddf554();
extern "C" int fn_02e35b5c(int);

namespace {
struct Object {
    char padding_0[0x40];
    unsigned int state;
};
}

extern "C" void fn_02a408a8(void* object) {
    if (fn_02e35b5c(data_10467c34) == 0) {
        switch (((Object *)object)->state) {
        case 1:
            fn_02a404d0(object);
            return;
        case 2:
            fn_02a40788(object);
            return;
        case 5:
            fn_02a40834(object);
            return;
        case 7:
            if (fn_02ddf554() == 0) {
                fn_02a3fbe8(object);
            }
            break;
        }
    }
}
