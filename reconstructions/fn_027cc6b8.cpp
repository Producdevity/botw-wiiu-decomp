#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048cee8;
extern "C" RuntimeTag data_1048ceec;
extern "C" const RuntimeVTable data_10132a34;
extern "C" unsigned data_1048b304;
extern "C" RuntimeTag data_1048b308;
extern "C" const RuntimeVTable data_10132a24;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_10132a14;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10132a04;

typedef Pointer<&data_1048cee8, &data_1048ceec, &data_10132a34> Type0;
typedef Pointer<&data_1048b304, &data_1048b308, &data_10132a24> Type1;
typedef Pointer<&data_10485ed8, &data_10486e88, &data_10132a14> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_10132a04> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_027cc6b8(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
