extern "C" void *data_104698f8;
extern "C" unsigned char fn_02eaa630(void* p);
extern "C" void fn_02eaa638(void* p, unsigned char v);
extern "C" unsigned char fn_02efc068(void* p);
extern "C" void fn_02f03514(void*);

namespace {
struct Object {
    char padding_0[1156];
    char member_484;
};
}

extern "C" void fn_02f03584(void* object) {
    if (fn_02efc068(&((Object *) object)->member_484) != 0) {
        fn_02eaa638(data_104698f8, 1);
    }
    if (fn_02eaa630(data_104698f8) != 0) {
        fn_02f03514(object);
    }
}
