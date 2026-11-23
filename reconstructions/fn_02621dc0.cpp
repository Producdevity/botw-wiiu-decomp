#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048c028;
extern "C" RuntimeTag data_1048c024;
extern "C" const RuntimeVTable data_100f9408;
extern "C" unsigned data_1048bda4;
extern "C" RuntimeTag data_1048bda8;
extern "C" const RuntimeVTable data_100f93f8;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_100f93e8;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100f93d8;

typedef Pointer<&data_1048c028, &data_1048c024, &data_100f9408> Type0;
typedef Pointer<&data_1048bda4, &data_1048bda8, &data_100f93f8> Type1;
typedef Pointer<&data_10485ed8, &data_10486e88, &data_100f93e8> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_100f93d8> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_02621dc0(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
