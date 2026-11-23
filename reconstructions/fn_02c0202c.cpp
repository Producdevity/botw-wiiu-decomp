#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10490184;
extern "C" RuntimeTag data_10490afc;
extern "C" const RuntimeVTable data_101be6bc;
extern "C" unsigned data_10490160;
extern "C" RuntimeTag data_10490638;
extern "C" const RuntimeVTable data_101be69c;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_101be68c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_101be67c;

typedef Pointer<&data_10490184, &data_10490afc, &data_101be6bc> Type0;
typedef Pointer<&data_10490160, &data_10490638, &data_101be69c> Type1;
typedef Pointer<&data_10485ed8, &data_10486e88, &data_101be68c> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_101be67c> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_02c0202c(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
