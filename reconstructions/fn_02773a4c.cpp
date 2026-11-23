#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10486e80;
extern "C" RuntimeTag data_10486e84;
extern "C" const RuntimeVTable data_1012a04c;
extern "C" unsigned data_10486e8c;
extern "C" RuntimeTag data_10486e90;
extern "C" const RuntimeVTable data_1012a014;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_1012a004;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10129ff4;

typedef Pointer<&data_10486e80, &data_10486e84, &data_1012a04c> Type0;
typedef Pointer<&data_10486e8c, &data_10486e90, &data_1012a014> Type1;
typedef Pointer<&data_10485ed8, &data_10486e88, &data_1012a004> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_10129ff4> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_02773a4c(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
