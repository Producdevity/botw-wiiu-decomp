#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10492248;
extern "C" RuntimeTag data_10495b3c;
extern "C" const RuntimeVTable data_102f729c;
extern "C" unsigned data_10486700;
extern "C" RuntimeTag data_10486f80;
extern "C" const RuntimeVTable data_102f728c;
extern "C" unsigned data_104866fc;
extern "C" RuntimeTag data_10486f7c;
extern "C" const RuntimeVTable data_102f727c;
extern "C" unsigned data_104866f8;
extern "C" RuntimeTag data_10486f78;
extern "C" const RuntimeVTable data_102f716c;

typedef Pointer<&data_10492248, &data_10495b3c, &data_102f729c> Type0;
typedef Pointer<&data_10486700, &data_10486f80, &data_102f728c> Type1;
typedef Pointer<&data_104866fc, &data_10486f7c, &data_102f727c> Type2;
typedef Pointer<&data_104866f8, &data_10486f78, &data_102f716c> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_035fc938(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
