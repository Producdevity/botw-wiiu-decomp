#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10486c60;
extern "C" RuntimeTag data_10495410;
extern "C" const RuntimeVTable data_102e6a7c;
extern "C" unsigned data_10485f08;
extern "C" RuntimeTag data_1048b0d8;
extern "C" const RuntimeVTable data_102e6a6c;
extern "C" unsigned data_10485eec;
extern "C" RuntimeTag data_104868ec;
extern "C" const RuntimeVTable data_102e6a5c;
extern "C" unsigned data_10485ee8;
extern "C" RuntimeTag data_10486a8c;
extern "C" const RuntimeVTable data_102e6a4c;

typedef Pointer<&data_10486c60, &data_10495410, &data_102e6a7c> Type0;
typedef Pointer<&data_10485f08, &data_1048b0d8, &data_102e6a6c> Type1;
typedef Pointer<&data_10485eec, &data_104868ec, &data_102e6a5c> Type2;
typedef Pointer<&data_10485ee8, &data_10486a8c, &data_102e6a4c> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_035927d0(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
