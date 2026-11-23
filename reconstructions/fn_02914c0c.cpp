#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048dda4;
extern "C" RuntimeTag data_1048dda8;
extern "C" const RuntimeVTable data_101634ac;
extern "C" unsigned data_1048dd74;
extern "C" RuntimeTag data_1048dd78;
extern "C" const RuntimeVTable data_1016349c;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_1016348c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1016347c;

typedef Pointer<&data_1048dda4, &data_1048dda8, &data_101634ac> Type0;
typedef Pointer<&data_1048dd74, &data_1048dd78, &data_1016349c> Type1;
typedef Pointer<&data_10485ed8, &data_10486e88, &data_1016348c> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_1016347c> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_02914c0c(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
