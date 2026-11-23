#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048b608;
extern "C" RuntimeTag data_1048b60c;
extern "C" const RuntimeVTable data_10161eac;
extern "C" unsigned data_104892c8;
extern "C" RuntimeTag data_1048b1fc;
extern "C" const RuntimeVTable data_10161e8c;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_10161e7c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10161e6c;

typedef Pointer<&data_1048b608, &data_1048b60c, &data_10161eac> Type0;
typedef Pointer<&data_104892c8, &data_1048b1fc, &data_10161e8c> Type1;
typedef Pointer<&data_10485ed8, &data_10486e88, &data_10161e7c> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_10161e6c> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_0290e79c(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
